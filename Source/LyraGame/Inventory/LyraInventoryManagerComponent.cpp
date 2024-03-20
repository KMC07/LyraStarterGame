// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryManagerComponent.h"

#include "GlobalInventoryManager.h"
#include "InventoryFragment_Container.h"
#include "InventoryFragment_InventoryIcon.h"
#include "Engine/ActorChannel.h"
#include "Engine/World.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "LyraInventoryItemDefinition.h"
#include "LyraInventoryItemInstance.h"
#include "NativeGameplayTags.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraInventoryManagerComponent)

class FLifetimeProperty;
struct FReplicationFlags;

// broadcast message tags
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Message_StackChanged, "Lyra.Inventory.Message.StackChanged");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Message_RotationChanged, "Lyra.Inventory.Message.RotationChanged");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Message_RootSlotChanged, "Lyra.Inventory.Message.RootSlotChanged");

// inventory item tags
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_Count, "Lyra.Inventory.Item.Count");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_Rotation, "Lyra.Inventory.Item.Rotation");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_RootSlotX, "Lyra.Inventory.Item.RootSlotX");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_RootSlotY, "Lyra.Inventory.Item.RootSlotY");

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
}

inline void ULyraInventoryManagerComponent::InitialiseInventoryComponent(const FText& InContainerName,
	const TArray<FInventory2DSlot>& InInventoryGrid, const TArray<FSpecificItemDefinition>& InStartingItems,
	float InMaxWeight, bool InIgnoreChildInventoryWeights, int32 InItemCountLimit,
	bool InIgnoreChildInventoryItemCounts, const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InAllowedItems,
	const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InDisallowedItems,
	const TArray<FSpecificItemDefinition>& InSpecificItemCountLimits, bool InIgnoreChildInventoryItemLimits)
{
	// initialise the inventory with the proper config
	ContainerName = InContainerName;
	InventoryGrid = InInventoryGrid;
	StartingItems = InStartingItems;
	MaxWeight = InMaxWeight;
	bIgnoreChildInventoryWeights = InIgnoreChildInventoryWeights;
	ItemCountLimit = InItemCountLimit;
	bIgnoreChildInventoryItemCounts = InIgnoreChildInventoryItemCounts;
	AllowedItems = InAllowedItems;
	DisallowedItems = InDisallowedItems;
	SpecificItemCountLimits = InSpecificItemCountLimits;
	bIgnoreChildInventoryItemLimits = InIgnoreChildInventoryItemLimits;
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

	ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
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

	// Check if the item follows the specific item limit
	int32 SpecificItemLimit = GetSpecificItemLimit(ItemDef);
	int32 CurrentItemCount = GetTotalItemCountByDefinition(ItemDef, true);
	if(SpecificItemLimit > 0)
	{
		if (SpecificItemLimit >= 0 && CurrentItemCount + StackCount > SpecificItemLimit)
		{
			AllowedAmount = FMath::Max(0, SpecificItemLimit - CurrentItemCount);
		}
	}

	// if there is no inventory icon fragment then this does not interfere with the inventory
	if(IsValid(InventoryIconFragment))
	{
		// Check if adding the item would exceed the inventory item count limit
		int32 TotalItems = GetItemCount() + AllowedAmount;
		if (ItemCountLimit > 0 && TotalItems > ItemCountLimit)
		{
			AllowedAmount = FMath::Max(0, ItemCountLimit - GetItemCount());
		}

		// Check if adding the item would exceed the inventory weight limit
		float TotalWeight = GetWeight() + (InventoryIconFragment->Weight * AllowedAmount);
		if (MaxWeight > 0 && TotalWeight > MaxWeight)
		{
			AllowedAmount = FMath::FloorToInt((MaxWeight - GetWeight()) / InventoryIconFragment->Weight);
		}
	}

	// if there is a parent inventory, make sure adding to this inventory doesn't affect the parent inventory
	if(ParentInventory)
	{
		ParentInventory->CanAddItemDefinitionInParent(ItemDef, AllowedAmount, IsValid(InventoryIconFragment), IsValid(InventoryIconFragment), CurrentItemCount);
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

ULyraInventoryItemInstance* ULyraInventoryManagerComponent::AddItemDefinitionToSlot(
	TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount, const FIntPoint& RootSlot, int32 Rotation)
{
	ULyraInventoryItemInstance* Result = nullptr;
	if (ItemDef != nullptr)
	{
		Result = InventoryList.AddEntry(ItemDef, StackCount);
		UpdateItemCount(Result, StackCount, true);

		// add the slot variables to the item instance
		Result->AddStatTagStack(TAG_Lyra_Inventory_Item_Rotation, Rotation);
		Result->AddStatTagStack(TAG_Lyra_Inventory_Item_RootSlotX, RootSlot.X);
		Result->AddStatTagStack(TAG_Lyra_Inventory_Item_RootSlotY, RootSlot.Y);
		
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

int32 ULyraInventoryManagerComponent::GetTotalItemCountByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, bool bCheckChildInventories) const
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

			// if this item has an inventory
			if(bCheckChildInventories && Instance->FindFragmentByClass<UInventoryFragment_Container>())
			{
				// get the total item count in the child inventory
				const UInventoryFragmentPayload_Container* ContainerTransient = Cast<UInventoryFragmentPayload_Container>(Instance->FindFragmentPayloadByClass(UInventoryFragment_Container::StaticClass()));
				if(IsValid(ContainerTransient) && IsValid(ContainerTransient->ChildInventory))
				{
					
					TotalCount += ContainerTransient->ChildInventory->GetTotalItemCountByDefinition(ItemDef, true);
				}
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

int32 ULyraInventoryManagerComponent::CanAddItemDefinitionInParent(TSubclassOf<ULyraInventoryItemDefinition> ItemDef,
	int32 StackCount, bool ItemWeightIncrease, bool ItemCountIncrease, int32 TotalSpecificItemCount)
{
	// this function will would be call from a child inventory (i.e this is a parent inventory)
	ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();

	// set the amount allowed from the child inventory
	int32 AllowedAmount = StackCount;
	
	// We don't want to propagate inventory weight calculations any higher if this inventories weight did not change
	const int32 CanItemWeightIncrease = bIgnoreChildInventoryWeights ? false : ItemWeightIncrease;
	// Check the increase in weight in allowed in this inventory
	if(CanItemWeightIncrease)
	{
		// check if adding this weight would exceed this inventory's weight limit
		float TotalWeight = GetWeight() + (InventoryIconFragment->Weight * AllowedAmount);
		if (MaxWeight > 0 && TotalWeight > MaxWeight)
		{
			// update the amount allowed to the parent inventory
			AllowedAmount = FMath::FloorToInt((MaxWeight - GetWeight()) / InventoryIconFragment->Weight);
		}
	}

	
	// We don't want to propagate inventory item count calculations any higher if this inventories item count did not change
	int32 CanItemCountIncrease = bIgnoreChildInventoryItemCounts ? false : ItemCountIncrease;
	// Check the increase in item count in allowed in this inventory
	if (CanItemCountIncrease)
	{
		// Check if adding the item would exceed the inventory item count limit
		int32 TotalItems = GetItemCount() + AllowedAmount;
		if (ItemCountLimit > 0 && TotalItems > ItemCountLimit)
		{
			// update the amount allowed to the parent inventory
			AllowedAmount = FMath::Max(0, ItemCountLimit - GetItemCount());
		}
	}

	int32 NewTotalItemSpecificCounts = TotalSpecificItemCount;
	if (!bIgnoreChildInventoryItemLimits && TotalSpecificItemCount > 0)
	{
		// Check if adding the item would exceed the parent inventory's specific item count limits
		// we do not want to check for child inventories as TotalSpecificItemCount already accounts for that
		const int32 CurrentSpecificItemCount = GetTotalItemCountByDefinition(ItemDef, false);

		// update the total item specific item counts for the parent inventory
		NewTotalItemSpecificCounts += CurrentSpecificItemCount;
		
		int32 ParentItemLimit = GetSpecificItemLimit(ItemDef);
		AllowedAmount = FMath::Min(AllowedAmount, ParentItemLimit - NewTotalItemSpecificCounts);
	}

	// stop traversing if there we cannot add an item, or there is no parent inventory
	if (AllowedAmount > 0 && IsValid(ParentInventory))
	{
		AllowedAmount = ParentInventory->CanAddItemDefinitionInParent(ItemDef, AllowedAmount, CanItemWeightIncrease, CanItemCountIncrease, TotalSpecificItemCount);
	}

	// don't return negative values
	AllowedAmount = AllowedAmount < 0 ? 0 : AllowedAmount;
    
	return AllowedAmount;
}

int32 ULyraInventoryManagerComponent::AddItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount,
                                              TArray<ULyraInventoryItemInstance*>& OutStackedItems, TArray<ULyraInventoryItemInstance*>& OutNewItems)
{
	if (!IsValid(ItemDef) || Amount <= 0)
		return Amount;

	ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();

	int32 AmountAllowed = CanAddItemDefinition(ItemDef, Amount);
	if(AmountAllowed == 0)
		// return the remaining amount which is `amount` since nothing was added to the inventory
		return Amount;
	
	int32 RemainingAmount = AmountAllowed;

	// Check if the item can be added to existing stacks
	for (FInventoryEntry& Entry : InventoryList.Entries)
	{
		if (Entry.Instance->GetItemDef() == ItemDef)
		{
			// This means the item does not interact with the inventory slots, so just add the item amount to this instance
			if(!InventoryIconFragment)
			{
				UpdateItemCount(Entry.Instance, Amount, true);
				OutStackedItems.Add(Entry.Instance);
				RemainingAmount = 0;
			}
			else
			{
				int32 AvailableSpace = InventoryIconFragment->MaxStackSize - Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
				int32 AmountToAdd = FMath::Min(RemainingAmount, AvailableSpace);
				RemainingAmount -= AmountToAdd;

				OutStackedItems.Add(Entry.Instance);
			}
			
			if (RemainingAmount == 0)
				return 0;
		}
	}

	// This item ignores the context (spatial, weight, itemcount) of the inventory so just make a new entry for it
	if(!InventoryIconFragment)
	{
		ULyraInventoryItemInstance* NewItemInstance = AddItemDefinition(ItemDef, RemainingAmount);
		OutNewItems.Add(NewItemInstance);
		// everything was added to this inventory so no remaining items left to add
		return 0;
	}
	
	// this means this inventory uses a grid based system
	if(InventoryGrid.Num() > 0)
	{
		// Find available empty slots for the remaining amount
		TArray<FInventorySlotFound> AvailableEmptySlots = FindAvailableSlotsForItem(ItemDef, RemainingAmount, false);
	
		// Add the item to available empty slots
		for (const FInventorySlotFound& EmptySlotFound : AvailableEmptySlots)
		{
			int32 AmountToAdd = FMath::Min(RemainingAmount, InventoryIconFragment->MaxStackSize);
			
			ULyraInventoryItemInstance* NewItemInstance = nullptr;
			AddItemToSlot(ItemDef, AmountToAdd, EmptySlotFound.RootIndex, EmptySlotFound.SupportedRotation, NewItemInstance);

			if (NewItemInstance)
			{
				OutNewItems.Add(NewItemInstance);
				RemainingAmount -= AmountToAdd;
				if (RemainingAmount == 0)
					break;
			}
		}
	}
	// this inventory is not spatially aware of items
	else
	{
		// This gets the number of unique items we need to add
		int32 NumberOfLoops = FMath::Floor(RemainingAmount / InventoryIconFragment->MaxStackSize);
		for (int32 i = 0; i < NumberOfLoops; i++)
		{
			int32 AmountToAdd = FMath::Min(RemainingAmount, InventoryIconFragment->MaxStackSize);
			ULyraInventoryItemInstance* NewItemInstance = AddItemDefinition(ItemDef, AmountToAdd);

			if (NewItemInstance)
			{
				OutNewItems.Add(NewItemInstance);
				RemainingAmount -= AmountToAdd;
				if (RemainingAmount == 0)
					break;
			}
		}
	}
	
	return Amount - RemainingAmount;
}

void ULyraInventoryManagerComponent::RemoveItem(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bRemoveEntireStack)
{
	if (!IsValid(ItemInstance) || Amount <= 0)
		return;
	
	for (FInventoryEntry& Entry : InventoryList.Entries)
	{
		if (Entry.Instance == ItemInstance)
		{
			int32 AmountToRemove = FMath::Min(Amount, Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count));

			ULyraInventoryItemDefinition* ItemDefinition = ItemInstance->GetItemDef().GetDefaultObject();
			const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();

			// if this item interacts with the inventory slots so remove the item from the slot
			if(InventoryIconFragment)
			{
				int32 RootSlotX = ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotX);
				int32 RootSlotY = ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotY);

				// we are going to remove this item from the slot
				RemoveItemFromSlot(FIntPoint(RootSlotX, RootSlotY), AmountToRemove, bRemoveEntireStack);
			}
			// this items doesn't interact with the inventory slots so just remove its amount
			else
			{
				// remove the instance from the inventory
				if(bRemoveEntireStack || Amount >= ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count))
				{
					RemoveItemInstance(ItemInstance);
				}
				else
				{
					// try subtract the amount contained in the inventory
					UpdateItemCount(ItemInstance, Amount, false);
				}
			}

			// end the function as we have found our inventory item from the inventory list
			return;
		}
	}

}


int32 ULyraInventoryManagerComponent::AddItemToSlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount,
	const FIntPoint& RootSlot, int32 Rotation, ULyraInventoryItemInstance*& OutNewItem)
{
	// Get the amount of the item definition that can be added to this inventory
	int32 AmountAllowed = CanAddItemDefinition(ItemDef, Amount);
	if(AmountAllowed == 0)
		// return the remaining amount which is `amount` since nothing was added to the inventory
		return Amount;

	ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();	
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();

	// if there is no inventory icon fragment this means the function does interact with the inventory slots
	if (!InventoryIconFragment)
	{
		AddItemDefinition(ItemDef, AmountAllowed);
		// added everything so return 0 to indicate there is nothing left to add
		return 0;
	}

	// don't add more than allowed to this slot
	AmountAllowed = FMath::Min(AmountAllowed, InventoryIconFragment->MaxStackSize);
	
	// Check empty slots in the inventory grid
	ULyraInventoryItemInstance* ItemInstance = InventoryGrid[RootSlot.Y][RootSlot.X].ItemInstance;
	if (ItemInstance != nullptr)
	{
		// if the items are different don't add to the slot
		if(ItemInstance->GetItemDef() != ItemDef)
			// return the remaining amount which is `amount` since nothing was added to the inventory
			return Amount;

		// don't add more than the max stack to this item
		int32 CurrentItemStacks = ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
		AmountAllowed = FMath::Min(AmountAllowed, InventoryIconFragment->MaxStackSize - CurrentItemStacks);

		// increment the item count
		UpdateItemCount(ItemInstance, AmountAllowed, true);
	}
	else
	{
		// Add new entry to the inventory
		OutNewItem = AddItemDefinitionToSlot(ItemDef, AmountAllowed, RootSlot, Rotation);
	}

	// return the remaining amount
	return Amount - AmountAllowed;
}

void ULyraInventoryManagerComponent::RemoveItemFromSlot(const FIntPoint& InventorySlot, int32 Amount, bool bRemoveEntireStack)
{

	// do nothing if there is no item in that slot
	ULyraInventoryItemInstance* ItemInstance = InventoryGrid[InventorySlot.Y][InventorySlot.X].ItemInstance;
	if(!IsValid(ItemInstance))
		return;

	// if the item does not interact with slots then ignore it
	ULyraInventoryItemDefinition* ItemDefinition = ItemInstance->GetItemDef().GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();
	if(!IsValid(InventoryIconFragment))
		return;
	
	// Get the root slot location of the item in the inventory
	FIntPoint RootSlot(ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotX), ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotY));

	// are we completely removing the item instance from the inventory
	if(bRemoveEntireStack || Amount >= ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count))
	{
		TArray<FIntPoint> OccupiedSlots = FindSlotsFromShape(RootSlot, InventoryIconFragment->Shape, ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Rotation));
		// set the slots to empty
		for (const FIntPoint& Slot : OccupiedSlots)
		{
			InventoryGrid[Slot.Y][Slot.X].ItemInstance = nullptr;
		}
		
		// remove the inventory instance from the inventory list
		RemoveItemInstance(ItemInstance);
	}
	// only remove part of the item instance based on the number of stacks selected
	else
	{
		UpdateItemCount(ItemInstance, Amount, false);
	}
}

TArray<FInventorySlotFound> ULyraInventoryManagerComponent::FindAvailableSlotsForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 AmountToFind, bool bSearchStacks)
{
	TArray<FInventorySlotFound> AvailableSlots;
	int32 RemainingAmount = AmountToFind;

	ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();

	// this item does not interact with the inventory slots
	if(!IsValid(InventoryIconFragment))
		return AvailableSlots;
	
	
	// Check item stacks first
	if(bSearchStacks)
	{
		for (const FInventoryEntry& Entry : InventoryList.Entries)
		{
			if (Entry.Instance->GetItemDef() == ItemDef)
			{
				// get the root slot of the item instance
				FIntPoint RootSlot(Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotX), Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotY));

				// check if there is avaiable stack space
				int32 AvailableStackSpace = InventoryIconFragment->MaxStackSize - Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
				int32 AmountToAdd = FMath::Min(RemainingAmount, AvailableStackSpace);

				if(AmountToAdd > 0)
				{
					// add this slot to the available slots we can add
					AvailableSlots.Add(FInventorySlotFound(RootSlot, Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Rotation)));
				}
				
				RemainingAmount -= AmountToAdd;
				if (RemainingAmount <= 0)
				{
					return AvailableSlots;
				}
			}
		}
	}
	

	// Check empty slots in the inventory grid
    for (int32 RowIndex = 0; RowIndex < InventoryGrid.Num() && RemainingAmount > 0; ++RowIndex)
    {
        for (int32 ColumnIndex = 0; ColumnIndex < InventoryGrid[RowIndex].Num() && RemainingAmount > 0; ++ColumnIndex)
        {
            FIntPoint RootSlot(ColumnIndex, RowIndex);

            // Check if the slot is empty
            if (InventoryGrid[RowIndex][ColumnIndex].ItemInstance == nullptr)
            {
                // Try placing the item with each rotation
                for (int32 Rotation = 0; Rotation < InventoryIconFragment->AllowedRotations.Num(); Rotation += 90)
                {
                    if (CanPlaceItemInEmptySlot(ItemDef, RootSlot, Rotation))
                    {
                        AvailableSlots.Add(FInventorySlotFound(RootSlot, Rotation));
                        RemainingAmount--;
                        break;
                    }
                }
            }
        }
    }

    return AvailableSlots;
}


TArray<FIntPoint> ULyraInventoryManagerComponent::FindSlotsFromShape(const FIntPoint& RootSlot, const TArray<FItem2DShape>& Shape,
	int32 Rotation)
{
	TArray<FIntPoint> OccupiedSlots;

	// Rotate the shape based on the specified rotation
	TArray<FItem2DShape> RotatedShape = RotateShape(Shape, Rotation);

	for (int32 i = 0; i < RotatedShape.Num(); ++i)
	{
		for (int32 j = 0; j < RotatedShape[i].Num(); ++j)
		{
			if (RotatedShape[i][j])
			{
				FIntPoint OccupiedSlot(RootSlot.X + j, RootSlot.Y + i);
				OccupiedSlots.Add(OccupiedSlot);
			}
		}
	}

	return OccupiedSlots;
}


bool ULyraInventoryManagerComponent::CanPlaceItemInEmptySlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, const FIntPoint& RootSlot, int32 Rotation)
{
	if (!IsValid(ItemDef))
		return false;

	// there are no inventory grids in this inventory, meaning no spatial awareness is used 
	if(InventoryGrid.Num() == 0)
		return true;
	
	ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	if(const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>())
	{
		TArray<FItem2DShape> ItemShape = InventoryIconFragment->Shape;
	
		TArray<FIntPoint> OccupiedSlots = FindSlotsFromShape(RootSlot, ItemShape, Rotation);

		for (const FIntPoint& Slot : OccupiedSlots)
		{
			// if the slots is not accessible
			if (!IsValidSlot(Slot) || !InventoryGrid[Slot.Y][Slot.X].bIsAccessible)
			{
				return false;
			}

			// check if the slot is occupied
			if(InventoryGrid[Slot.Y][Slot.X].ItemInstance != nullptr)
			{
				return false;
			}
		}
	}

	return true;
}

bool ULyraInventoryManagerComponent::SplitItemStack(ULyraInventoryItemInstance* ItemInstance, int32 AmountToSplit)
{
	if (!IsValid(ItemInstance) || AmountToSplit <= 0)
		return false;

	int32 CurrentStackCount = ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
	if (AmountToSplit >= CurrentStackCount)
		return false;

	// Check if there are any empty slots available
	const TArray<FInventorySlotFound> AvailableSlot = FindAvailableSlotsForItem(ItemInstance->GetItemDef(), 1, false);
	if(AvailableSlot.Num() == 0)
		return false;

	// Update the original item instance's stack count
	UpdateItemCount(ItemInstance, AmountToSplit, false);
	
	// Create a new item and add that to the inventory
	ULyraInventoryItemInstance* NewItemAdded = nullptr;
	AddItemToSlot(ItemInstance->GetItemDef(), AmountToSplit, AvailableSlot[0].RootIndex, AvailableSlot[0].SupportedRotation, NewItemAdded);

	return true;
}

bool ULyraInventoryManagerComponent::CombineItemStack(ULyraInventoryItemInstance* DestinationInstance,
	ULyraInventoryItemInstance* SourceInstance)
{
	if (!IsValid(DestinationInstance) || !IsValid(SourceInstance))
		return false;

	// do not combine stacks if the items are not the same
	if (DestinationInstance->GetItemDef() != SourceInstance->GetItemDef())
		return false;

	// Get the current stack counts
	ULyraInventoryItemDefinition* ItemDefinition = SourceInstance->GetItemDef().GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();
	if(!IsValid(InventoryIconFragment))
		return false;
		
	
	int32 DestinationStackCount = DestinationInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
	int32 SourceStackCount = SourceInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);

	// Calculate the new stack count
	int32 NewStackCount = DestinationStackCount + SourceStackCount;
	int32 MaxStackSize = InventoryIconFragment->MaxStackSize;

	if (NewStackCount > MaxStackSize)
	{
		// If the combined stack exceeds the max stack size, update the destination stack count to max
		UpdateItemCount(DestinationInstance, MaxStackSize - DestinationStackCount, true);

		// Update the source stack count with the remaining amount
		UpdateItemCount(SourceInstance, MaxStackSize - DestinationStackCount, false);
	}
	else
	{
		// If the combined stack fits within the max stack size, update the destination stack count
		UpdateItemCount(DestinationInstance, SourceStackCount, true);

		// Remove the source item instance from the inventory
		FIntPoint RootSlot(SourceInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotX), SourceInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlotY));
		RemoveItemFromSlot(RootSlot, 0, true);
	}

	return true;
}


bool ULyraInventoryManagerComponent::SearchForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Count,
	TArray<ULyraInventoryItemInstance*>& OutItemInstances)
{

	int32 RemainingAmount = Count;
	for (const FInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (IsValid(Instance))
		{
			if (Instance->GetItemDef() == ItemDef)
			{
				// add the item to the found items list
				OutItemInstances.Add(Instance);

				// reduce the remaining number of items left to find
				RemainingAmount -= Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);

				// if we found enough items then return true (we found everything we need)
				if(RemainingAmount <= 0)
				{
					return true;
				}
			}
		}
	}

	// there was not enough items in the inventory
	return false;
}

void ULyraInventoryManagerComponent::DestroyContainingInventories()
{
	for (const FInventoryEntry& Entry : InventoryList.Entries)
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;
		
		if (IsValid(Instance))
		{
			// if this item has an inventory
			if(Instance->FindFragmentByClass<UInventoryFragment_Container>())
			{
				// get the total item count in the child inventory
				const UInventoryFragmentPayload_Container* ContainerTransient = Cast<UInventoryFragmentPayload_Container>(Instance->FindFragmentPayloadByClass(UInventoryFragment_Container::StaticClass()));
				if(IsValid(ContainerTransient) && IsValid(ContainerTransient->ChildInventory))
				{
					// Call the global manager and tell it to delete this item inventory.
					UGlobalInventoryManager* InventoryManager = UGlobalInventoryManager::Get(GetWorld());
					if (InventoryManager)
					{
						InventoryManager->DestroyItemInventory(ContainerTransient->ChildInventory);
					}
				}
			}
		}
	}
}


void ULyraInventoryManagerComponent::EmptyInventory()
{
	// loop through the inventory slots and reset all the instances

	// destroy transient fragment data
	
	// reset the inventory list and remove child inventories

	// reset the weight and item count back to 0
}


bool ULyraInventoryManagerComponent::IsValidSlot(const FIntPoint& Slot)
{
	return Slot.Y >= 0 && Slot.Y < InventoryGrid.Num() && Slot.X >= 0 && Slot.X < InventoryGrid[Slot.Y].Num(); 
}


bool ULyraInventoryManagerComponent::IsSlotOverlapping(const FIntPoint& Slot1, const FIntPoint& Slot2)
{
	return Slot1.X == Slot2.X && Slot1.Y == Slot2.Y;
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

	// Propagate changes to parent inventories
	for (ULyraInventoryManagerComponent* Current = ParentInventory; Current; Current = Current->ParentInventory)
	{
		if (!Current->bIgnoreChildInventoryWeights)
		{
			Current->SetWeight(Current->GetWeight() + ItemWeight);
		}
		else
		{
			ItemWeight = 0; // Stop weight propagation
		}

		if (!Current->bIgnoreChildInventoryItemCounts)
		{
			Current->SetItemCount(Current->GetItemCount() + Amount);
		}
		else
		{
			Amount = 0; // Stop item count propagation
		}

		// Break if both propagation have been stopped
		if (ItemWeight == 0 && Amount == 0) break;
	}
}


TArray<FItem2DShape> ULyraInventoryManagerComponent::RotateShape(const TArray<FItem2DShape>& Shape, uint16 Rotation)
{
	TArray<FItem2DShape> RotatedShape = Shape;

	for (int32 i = 0; i < Rotation / 90; ++i)
	{
		RotatedShape = RotateShape90Degrees(RotatedShape);
	}

	return RotatedShape;
}

TArray<FItem2DShape> ULyraInventoryManagerComponent::RotateShape90Degrees(const TArray<FItem2DShape>& Shape)
{
	int32 Rows = Shape.Num();
	int32 Columns = Shape[0].Num();

	TArray<FItem2DShape> RotatedShape;
	RotatedShape.SetNum(Columns);

	for (int32 i = 0; i < Columns; ++i)
	{
		RotatedShape[i].SetNum(Rows);
	}

	for (int32 i = 0; i < Rows; ++i)
	{
		for (int32 j = 0; j < Columns; ++j)
		{
			RotatedShape[j][Rows - 1 - i] = Shape[i][j];
		}
	}

	return RotatedShape;
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


