// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryManagerComponent.h"

#include "InventoryFragment_InventoryIcon.h"
#include "Engine/ActorChannel.h"
#include "Engine/World.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "LyraInventoryItemDefinition.h"
#include "LyraInventoryItemInstance.h"
#include "NativeGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include "WorldPartition/WorldPartitionBuilder.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraInventoryManagerComponent)

class FLifetimeProperty;
struct FReplicationFlags;

// broadcast message tags
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Message_StackChanged, "Lyra.Inventory.Message.StackChanged");

// inventory item tags
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_Count, "Lyra.Inventory.Item.Count");

//////////////////////////////////////////////////////////////////////
// FInventoryEntry

FString FInventoryEntry::GetDebugString() const
{
	TSubclassOf<ULyraInventoryItemDefinition> ItemDef;
	if (Instance != nullptr)
	{
		ItemDef = Instance->GetItemDef();
	}

	return FString::Printf(TEXT("%s (%d x %s)"), *GetNameSafe(Instance), StackCount, *GetNameSafe(ItemDef));
}

//////////////////////////////////////////////////////////////////////
// FInventoryList

void FInventoryList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	for (int32 Index : RemovedIndices)
	{
		FInventoryEntry& Stack = Entries[Index];
		BroadcastChangeMessage(Stack, /*OldCount=*/ Stack.StackCount, /*NewCount=*/ 0);
		Stack.LastObservedCount = 0;
	}
}

void FInventoryList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	for (int32 Index : AddedIndices)
	{
		FInventoryEntry& Stack = Entries[Index];
		BroadcastChangeMessage(Stack, /*OldCount=*/ 0, /*NewCount=*/ Stack.StackCount);
		Stack.LastObservedCount = Stack.StackCount;
	}
}

void FInventoryList::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	for (int32 Index : ChangedIndices)
	{
		FInventoryEntry& Stack = Entries[Index];
		check(Stack.LastObservedCount != INDEX_NONE);
		BroadcastChangeMessage(Stack, /*OldCount=*/ Stack.LastObservedCount, /*NewCount=*/ Stack.StackCount);
		Stack.LastObservedCount = Stack.StackCount;
	}
}

void FInventoryList::BroadcastChangeMessage(FInventoryEntry& Entry, int32 OldCount, int32 NewCount)
{
	FInventoryChangeMessage Message;
	Message.InventoryOwner = OwnerComponent;
	Message.Instance = Entry.Instance;
	Message.NewCount = NewCount;
	Message.Delta = NewCount - OldCount;

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(OwnerComponent->GetWorld());
	MessageSystem.BroadcastMessage(TAG_Lyra_Inventory_Message_StackChanged, Message);
}

ULyraInventoryItemInstance* FInventoryList::AddEntry(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount)
{
	ULyraInventoryItemInstance* Result = nullptr;

	check(ItemDef != nullptr);
 	check(OwnerComponent);

	AActor* OwningActor = OwnerComponent->GetOwner();
	check(OwningActor->HasAuthority());


	FInventoryEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.Instance = NewObject<ULyraInventoryItemInstance>(OwnerComponent->GetOwner());  //@TODO: Using the actor instead of component as the outer due to UE-127172
	NewEntry.Instance->SetItemDef(ItemDef);
	for (ULyraInventoryItemFragment* Fragment : GetDefault<ULyraInventoryItemDefinition>(ItemDef)->Fragments)
	{
		if (Fragment != nullptr)
		{
			Fragment->OnInstanceCreated(NewEntry.Instance);

			// get the transient data from the payload
			ULyraInventoryItemFragmentPayload* TransientFragment = Fragment->CreateNewTransientFragment(OwnerComponent->GetOwner());
			if(IsValid(TransientFragment))
			{
				// add the transient fragment to the item instance
				NewEntry.Instance->TransientFragments.Add(Fragment->GetClass(), TransientFragment);
			}
		}
	}
	NewEntry.StackCount = StackCount;
	Result = NewEntry.Instance;

	MarkItemDirty(NewEntry);

	BroadcastChangeMessage(NewEntry, 0, NewEntry.StackCount);
	
	return Result;
}


void FInventoryList::AddEntry(ULyraInventoryItemInstance* Instance)
{
	if (!IsValid(Instance))
		return;

	FInventoryEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.Instance = Instance;
	NewEntry.StackCount = Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);

	MarkItemDirty(NewEntry);
}

void FInventoryList::RemoveEntry(ULyraInventoryItemInstance* Instance)
{
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FInventoryEntry& Entry = *EntryIt;
		if (Entry.Instance == Instance)
		{
			EntryIt.RemoveCurrent();
			MarkArrayDirty();
		}
	}
}

void FInventoryList::ClearInventoryEntries()
{
	// TODO Do some profiling make sure the transient fragments are not leaving memory leaks

	// Remove all the inventory entries
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FInventoryEntry& Entry = *EntryIt;
		if(IsValid(Entry.Instance))
		{
			// call transient fragment clean up functions
			for (auto& TransientFragment : Entry.Instance->TransientFragments)
			{
				if(IsValid(TransientFragment.Value))
				{
					TransientFragment.Value->DestroyTransientFragment();
				}
			}	
		}
		
		EntryIt.RemoveCurrent();
	}
	MarkArrayDirty();
}

TArray<ULyraInventoryItemInstance*> FInventoryList::GetAllItems() const
{
	TArray<ULyraInventoryItemInstance*> Results;
	Results.Reserve(Entries.Num());
	for (const FInventoryEntry& Entry : Entries)
	{
		if (Entry.Instance != nullptr) //@TODO: Would prefer to not deal with this here and hide it further?
		{
			Results.Add(Entry.Instance);
		}
	}
	return Results;
}


//////////////////////////////////////////////////////////////////////
// ULyraInventoryManagerComponent

ULyraInventoryManagerComponent::ULyraInventoryManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, InventoryList(this)
{
	SetIsReplicatedByDefault(true);
	bWantsInitializeComponent = true;
}

void ULyraInventoryManagerComponent::BeginPlay()
{
	Super::BeginPlay();
}


void ULyraInventoryManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void ULyraInventoryManagerComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, InventoryList);
}

int32 ULyraInventoryManagerComponent::CanAddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount)
{
	if (!IsValid(ItemDef))
	{
		return 0;
	}

	const ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();
	
	int32 AllowedAmount = StackCount;

	// Check if this item is allowed in the inventory
	if (AllowedItems.Num() > 0 && !AllowedItems.Contains(ItemDef))
	{
		return 0;
	}

	// Check if this item is not allowed in the inventory
	if (DisallowedItems.Num() > 0 && DisallowedItems.Contains(ItemDef))
	{
		return 0;
	}

	// check the amount remaining in the item limit
	// Check if the item follows the specific item limit
	const int32 SpecificItemLimit = GetSpecificItemLimit(ItemDef);
	const int32 CurrentItemCount = GetTotalItemCountByDefinition(ItemDef);
	if(SpecificItemLimit > 0)
	{
		const int32 RemainingAmount = FMath::Max(0, SpecificItemLimit - CurrentItemCount);
		AllowedAmount = FMath::Min(AllowedAmount, RemainingAmount);
	}

	// if there is no inventory icon fragment then this does not interfere with the inventory
	if(IsValid(InventoryIconFragment))
	{
		// Check if adding the item would exceed the inventory item count limit
		const int32 TotalItems = GetItemCount() + AllowedAmount;
		if (ItemCountLimit > 0 && TotalItems > ItemCountLimit)
		{
			AllowedAmount = FMath::Max(0, ItemCountLimit - GetItemCount());
		}

		// Check if adding the item would exceed the inventory weight limit
		const float TotalWeight = GetWeight() + (InventoryIconFragment->Weight * AllowedAmount);
		if (MaxWeight > 0 && TotalWeight > MaxWeight)
		{
			AllowedAmount = FMath::FloorToInt((MaxWeight - GetWeight()) / InventoryIconFragment->Weight);
		}
	}
	
	return AllowedAmount;
}


ULyraInventoryItemInstance* ULyraInventoryManagerComponent::AddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount)
{
	ULyraInventoryItemInstance* Result = nullptr;
	if (ItemDef != nullptr)
	{
		Result = InventoryList.AddEntry(ItemDef, StackCount);
		UpdateItemCount(Result, StackCount, true);
		
		if (IsUsingRegisteredSubObjectList() && IsReadyForReplication() && Result)
		{
			AddReplicatedSubObject(Result);
		}
	}
	
	return Result;
}

void ULyraInventoryManagerComponent::AddItemInstance(ULyraInventoryItemInstance* ItemInstance)
{
	InventoryList.AddEntry(ItemInstance);
	UpdateItemCount(ItemInstance, ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count), true);
	if (IsUsingRegisteredSubObjectList() && IsReadyForReplication() && ItemInstance)
	{
		AddReplicatedSubObject(ItemInstance);
	}
}


void ULyraInventoryManagerComponent::RemoveItemInstance(ULyraInventoryItemInstance* ItemInstance)
{
	InventoryList.RemoveEntry(ItemInstance);
	UpdateItemCount(ItemInstance, ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count), false);

	if (ItemInstance && IsUsingRegisteredSubObjectList())
	{
		RemoveReplicatedSubObject(ItemInstance);
	}
	
}

TArray<ULyraInventoryItemInstance*> ULyraInventoryManagerComponent::GetAllItems() const
{
	return InventoryList.GetAllItems();
}

ULyraInventoryItemInstance* ULyraInventoryManagerComponent::FindFirstItemStackByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const
{
	for (const FInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (IsValid(Instance))
		{
			if (Instance->GetItemDef() == ItemDef)
			{
				return Instance;
			}
		}
	}

	return nullptr;
}

int32 ULyraInventoryManagerComponent::GetTotalItemCountByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const
{
	int32 TotalCount = 0;
	for (const FInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (IsValid(Instance))
		{
			if (Instance->GetItemDef() == ItemDef)
			{
				TotalCount += Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
			}
		}
	}

	return TotalCount;
}

bool ULyraInventoryManagerComponent::ConsumeItemsByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 NumToConsume)
{
	AActor* OwningActor = GetOwner();
	if (!OwningActor || !OwningActor->HasAuthority())
	{
		return false;
	}

	//@TODO: N squared right now as there's no acceleration structure
	int32 TotalConsumed = 0;
	while (TotalConsumed < NumToConsume)
	{
		if (ULyraInventoryItemInstance* Instance = ULyraInventoryManagerComponent::FindFirstItemStackByDefinition(ItemDef))
		{
			InventoryList.RemoveEntry(Instance);
			++TotalConsumed;
		}
		else
		{
			return false;
		}
	}

	return TotalConsumed == NumToConsume;
}

int32 ULyraInventoryManagerComponent::GetSpecificItemLimit(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const
{
	if (!IsValid(ItemDef))
	{
		return 0;
	}

	for (auto& ItemLimits : SpecificItemCountLimits)
	{
		if(ItemDef == ItemLimits.ItemDefinitions)
		{
			return FMath::Max(0, ItemLimits.Amount);
		}
	}

	// no item limits found
	return 0;
}


void ULyraInventoryManagerComponent::EmptyInventory()
{

	// stop replicating the item instance UObjects
	for (auto& Entry: InventoryList.Entries)
	{
		if(Entry.Instance)
		{
			if (Entry.Instance && IsUsingRegisteredSubObjectList())
			{
				RemoveReplicatedSubObject(Entry.Instance);
			}
		}
	}
	
	// reset the inventory list and remove child inventories
	InventoryList.ClearInventoryEntries();

	// reset the weight and item count back to 0
	SetWeight(0.0f);
	SetItemCount(0);
}

void ULyraInventoryManagerComponent::UpdateItemCount(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bAdd)
{
	if (!IsValid(ItemInstance) || Amount == 0) return;

	ULyraInventoryItemDefinition* ItemDefinition = ItemInstance->GetItemDef().GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();
	if (!IsValid(InventoryIconFragment)) return;

	// Adjust the stat tag stack based on whether we're adding or removing
	if (bAdd)
	{
		ItemInstance->AddStatTagStack(TAG_Lyra_Inventory_Item_Count, Amount);
	}
	else
	{
		ItemInstance->RemoveStatTagStack(TAG_Lyra_Inventory_Item_Count, Amount);
		Amount = -Amount; // Make amount negative for removals
	}

	float ItemWeight = Amount * InventoryIconFragment->Weight;

	// Update the current inventory's weight and item count
	SetWeight(GetWeight() + ItemWeight);
	SetItemCount(GetItemCount() + Amount);
}


void ULyraInventoryManagerComponent::ReadyForReplication()
{
	Super::ReadyForReplication();

	// Register existing ULyraInventoryItemInstance
	if (IsUsingRegisteredSubObjectList())
	{
		for (const FInventoryEntry& Entry : InventoryList.Entries)
		{
			ULyraInventoryItemInstance* Instance = Entry.Instance;

			if (IsValid(Instance))
			{
				AddReplicatedSubObject(Instance);
			}
		}
	}
}

bool ULyraInventoryManagerComponent::ReplicateSubobjects(UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (FInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (Instance && IsValid(Instance))
		{
			WroteSomething |= Channel->ReplicateSubobject(Instance, *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
}

//////////////////////////////////////////////////////////////////////
//

// UCLASS(Abstract)
// class UInventoryFilter : public UObject
// {
// public:
// 	virtual bool PassesFilter(ULyraInventoryItemInstance* Instance) const { return true; }
// };

// UCLASS()
// class UInventoryFilter_HasTag : public UInventoryFilter
// {
// public:
// 	virtual bool PassesFilter(ULyraInventoryItemInstance* Instance) const { return true; }
// };


