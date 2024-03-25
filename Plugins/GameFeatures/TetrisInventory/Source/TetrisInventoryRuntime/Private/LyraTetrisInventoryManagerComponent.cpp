// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraTetrisInventoryManagerComponent.h"

#include "GlobalInventoryManager.h"
#include "Engine/World.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Inventory/LyraInventoryItemDefinition.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "InventoryFragment_Container.h"
#include "InventoryFragment_Tetris.h"
#include "NativeGameplayTags.h"
#include "Inventory/InventoryFragment_InventoryIcon.h"
#include "Net/UnrealNetwork.h"
#include "WorldPartition/WorldPartitionBuilder.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraTetrisInventoryManagerComponent)

class FLifetimeProperty;
struct FReplicationFlags;

// broadcast message tags
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Message_GridCellChanged, "Lyra.Inventory.Message.GridCellChanged");

// inventory item tags
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_Count, "Lyra.Inventory.Item.Count");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_RootSlot, "Lyra.Inventory.Item.RootSlot");

//////////////////////////////////////////////////////////////////////
// FGridCellInfo

FString FGridCellInfo::GetDebugString() const
{
	const FString ItemInstanceName = ItemInstance != nullptr ? GetNameSafe(ItemInstance) : TEXT("None");
	FString ItemDefName;
	if (ItemInstance != nullptr && ItemInstance->GetItemDef() != nullptr)
	{
		ItemDefName = GetNameSafe(ItemInstance->GetItemDef());
	}
	else
	{
		ItemDefName = TEXT("None");
	}

	// Convert the rotation enum to a readable string. 
	// This assumes you have a method or means to convert EItemRotation values to strings.
	FString RotationStr;
	switch (Rotation)
	{
	case EItemRotation::Rotation_0:
		RotationStr = TEXT("0");
		break;
	case EItemRotation::Rotation_90:
		RotationStr = TEXT("90");
		break;
	case EItemRotation::Rotation_180:
		RotationStr = TEXT("180");
		break;
	case EItemRotation::Rotation_270:
		RotationStr = TEXT("270");
		break;
	default:
		RotationStr = TEXT("Unknown");
		break;
	}

	// Construct and return the debug string
	return FString::Printf(TEXT("Position: (%d, %d), Rotation: %s, Item: %s, Definition: %s"), 
		Position.X, Position.Y, *RotationStr, *ItemInstanceName, *ItemDefName);
}

////////////////////////////////////////////////////////////////////////
// FGridCellInfoList

void FGridCellInfoList::PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize)
{
	
}

void FGridCellInfoList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	
}

void FGridCellInfoList::PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize)
{
	for (int32 Index : ChangedIndices)
	{
		FGridCellInfo& GridCellInfo = GridCells[Index];
		BroadcastGridInventoryChangedMessage(GridCellInfo, /*OldRotation=*/ GridCellInfo.LastObservedRotation, /*NewRotation=*/ GridCellInfo.Rotation);
		GridCellInfo.LastObservedRotation = GridCellInfo.Rotation;
	}
}

void FGridCellInfoList::UpdateCellRotation(int32 SlotIndex, const EItemRotation& NewRotation)
{
	if(GridCells.IsValidIndex(SlotIndex))
	{
		GridCells[SlotIndex].Rotation = NewRotation;
		MarkItemDirty(GridCells[SlotIndex]);
	}
}

void FGridCellInfoList::UpdateCellItemInstance(int32 SlotIndex, ULyraInventoryItemInstance* NewItemInstance)
{
	if(GridCells.IsValidIndex(SlotIndex))
	{
		GridCells[SlotIndex].ItemInstance = NewItemInstance;
		MarkItemDirty(GridCells[SlotIndex]);
	}
}

void FGridCellInfoList::PopulateInventoryGrid(const TArray<FInventoryLayoutCreator>& ClumpLayouts)
{
	// Clear existing grid cells and index maps
	GridCells.Empty();
	GridCellIndexMap.Empty();

	// Resize the GridCellIndexMap to hold the mappings for each clump
	GridCellIndexMap.SetNum(ClumpLayouts.Num());

	// Iterate through each clump to populate its grid cells and index mapping
	for (int32 ClumpIndex = 0; ClumpIndex < ClumpLayouts.Num(); ++ClumpIndex)
	{
		const FInventoryLayoutCreator& ClumpShape = ClumpLayouts[ClumpIndex];
		FInventoryClumpIndexMapping& ClumpMapping = GridCellIndexMap[ClumpIndex];

		// Initialize the index mapping for this clump
		ClumpMapping.Init(ClumpShape.ClumpGrid.Num(), F1DIntegerRow());

		for (int32 RowIndex = 0; RowIndex < ClumpShape.ClumpGrid.Num(); ++RowIndex)
		{
			const F1DBooleanRow& Row = ClumpShape.ClumpGrid[RowIndex];

			// Ensure the integer row for index mapping has the correct size
			ClumpMapping[RowIndex].Init(Row.Num(), -1);

			for (int32 ColIndex = 0; ColIndex < Row.Num(); ++ColIndex)
			{
				if (Row[ColIndex]) // If the cell is part of the clump
				{
					// Create and add a new FGridCellInfo for the accessible cell
					FGridCellInfo& NewCell = GridCells.AddDefaulted_GetRef();
					NewCell.Position = FIntPoint(ColIndex, RowIndex);
					NewCell.ClumpID = ClumpIndex; // Assign the cell to this clump
					MarkItemDirty(NewCell);
                    
					// Update the ClumpMapping with the index of the new cell
					ClumpMapping[RowIndex][ColIndex] = GridCells.Num() - 1;
				}
				else
				{
					// Mark the cell as invalid in the GridCellIndexMap
					ClumpMapping[RowIndex][ColIndex] = -1;
				}
			}
		}
	}
}

TArray<FGridCellInfo> FGridCellInfoList::GetAllCells() const
{
	return GridCells;
}

void FGridCellInfoList::EmptyGridItems()
{
	for(auto& GridCell : GridCells)
	{
		GridCell.ItemInstance = nullptr;
		GridCell.Rotation = EItemRotation::Rotation_0;
		MarkItemDirty(GridCell);
	}
}


void FGridCellInfoList::BroadcastGridInventoryChangedMessage(FGridCellInfo& Entry, const EItemRotation& OldRotation,
                                                                 const EItemRotation& NewRotation)
{
	FGridInventoryChangedMessage Message;
	Message.InventoryOwner = OwnerComponent;
	Message.Instance = Entry.ItemInstance;
	Message.NewRotation = NewRotation;
	Message.OldRotation = OldRotation;

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(OwnerComponent->GetWorld());
	MessageSystem.BroadcastMessage(TAG_Lyra_Inventory_Message_GridCellChanged, Message);
}

int32 FGridCellInfoList::FindGridCellFromCoords(int32 Clump, const FIntPoint& SlotCoords)
{
	if(IsSlotAccessible(Clump, SlotCoords))
	{
		return GridCellIndexMap[Clump][SlotCoords.Y][SlotCoords.X];
	}
	return -1;
}

bool FGridCellInfoList::IsSlotAccessible(int32 Clump, const FIntPoint& SlotCoords)
{
	const bool bIsClumpValid = Clump >= 0 && Clump < GridCellIndexMap.Num();
	const bool bIsRowValid = bIsClumpValid && SlotCoords.Y >= 0 && SlotCoords.Y < GridCellIndexMap[Clump].Num();
	const bool bIsColumnValid = bIsRowValid && SlotCoords.X >= 0 && SlotCoords.X < GridCellIndexMap[Clump][SlotCoords.Y].Num();
	if(bIsClumpValid && bIsRowValid && bIsColumnValid)
	{
		// inaccessible cells do not reference any grid cell index hence -1
		return GridCellIndexMap[Clump][SlotCoords.Y][SlotCoords.X] > -1; 
	}

	return false;
}


//////////////////////////////////////////////////////////////////////
// ULyraTetrisInventoryManagerComponent

ULyraTetrisInventoryManagerComponent::ULyraTetrisInventoryManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);
	bWantsInitializeComponent = true;
}

void ULyraTetrisInventoryManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// UWorld* World = GetWorld();
	// if (World && World->IsGameWorld() && World->GetNetMode() != NM_Client)
	// {
	// 	AGameStateBase* GameState = GetWorld()->GetGameState();
	// 	check(GameState);
	// 	ULyraExperienceManagerComponent* ExperienceComponent = GameState->FindComponentByClass<ULyraExperienceManagerComponent>();
	// 	check(ExperienceComponent);
	// 	ExperienceComponent->CallOrRegister_OnExperienceLoaded(FOnLyraExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
	// }

	// populate the inventory if there is a layout
	if(InventoryLayout.Num() > 0)
		InventoryGrid.PopulateInventoryGrid(InventoryLayout);
	
	// TODO cause an ERROR to occur if there is no inventory layout, this is required for the inventory to work
}


void ULyraTetrisInventoryManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}


void ULyraTetrisInventoryManagerComponent::InitialiseTetrisInventoryComponent(const FText& InContainerName,
                                                                         const TArray<FInventoryLayoutCreator>& InInventoryLayout, const TArray<FSpecificItemDefinition>& InStartingItems,
                                                                         float InMaxWeight, bool InIgnoreChildInventoryWeights, int32 InItemCountLimit,
                                                                         bool InIgnoreChildInventoryItemCounts, const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InAllowedItems,
                                                                         const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InDisallowedItems,
                                                                         const TArray<FSpecificItemDefinition>& InSpecificItemCountLimits, bool InIgnoreChildInventoryItemLimits)
{
	// initialise the inventory with the proper config
	ContainerName = InContainerName;
	InventoryLayout = InInventoryLayout;
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

void ULyraTetrisInventoryManagerComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, InventoryList);
	DOREPLIFETIME(ThisClass, InventoryGrid);
}

int32 ULyraTetrisInventoryManagerComponent::CanAddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount)
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
	const int32 CurrentItemCount = GetTotalItemCountByDefinitionInChild(ItemDef);
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
	
	// if there is a parent inventory, make sure adding to this inventory doesn't affect the parent inventory
	if(ParentInventory && AllowedAmount > 0)
	{
		AllowedAmount = ParentInventory->CanAddItemDefinitionInParent(ItemDef, AllowedAmount, IsValid(InventoryIconFragment), IsValid(InventoryIconFragment), CurrentItemCount);
	}
	
	return AllowedAmount;
}

int32 ULyraTetrisInventoryManagerComponent::CanAddItemDefinitionInParent(TSubclassOf<ULyraInventoryItemDefinition> ItemDef,
	int32 StackCount, bool ItemWeightIncrease, bool ItemCountIncrease, int32 TotalSpecificItemCount)
{
	// this function will would be call from a child inventory (i.e this is a parent inventory)
	const ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();

	// set the amount allowed from the child inventory
	int32 AllowedAmount = StackCount;
	
	// We don't want to propagate inventory weight calculations any higher if this inventories weight did not change
	const bool CanItemWeightIncrease = bIgnoreChildInventoryWeights ? false : ItemWeightIncrease;
	// Check the increase in weight in allowed in this inventory
	if(CanItemWeightIncrease)
	{
		// check if adding this weight would exceed this inventory's weight limit
		const float TotalWeight = GetWeight() + (InventoryIconFragment->Weight * AllowedAmount);
		if (MaxWeight > 0 && TotalWeight > MaxWeight)
		{
			// update the amount allowed to the parent inventory
			AllowedAmount = FMath::FloorToInt((MaxWeight - GetWeight()) / InventoryIconFragment->Weight);
		}
	}

	
	// We don't want to propagate inventory item count calculations any higher if this inventories item count did not change
	const bool CanItemCountIncrease = bIgnoreChildInventoryItemCounts ? false : ItemCountIncrease;
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
		const int32 CurrentSpecificItemCount = GetTotalItemCountByDefinition(ItemDef);

		// update the total item specific item counts for the parent inventory
		NewTotalItemSpecificCounts += CurrentSpecificItemCount;
		
		int32 ParentItemLimit = GetSpecificItemLimit(ItemDef);
		AllowedAmount = FMath::Min(AllowedAmount, ParentItemLimit - NewTotalItemSpecificCounts);
	}

	// stop traversing if there we cannot add an item, or there is no parent inventory
	if (AllowedAmount > 0 && IsValid(ParentInventory))
	{
		AllowedAmount = ParentInventory->CanAddItemDefinitionInParent(ItemDef, AllowedAmount,
			CanItemWeightIncrease, CanItemCountIncrease, TotalSpecificItemCount);
	}

	// don't return negative values
	AllowedAmount = AllowedAmount < 0 ? 0 : AllowedAmount;
    
	return AllowedAmount;
}


ULyraInventoryItemInstance* ULyraTetrisInventoryManagerComponent::AddItemDefinitionToSlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount,
	int32 ClumpID, const FIntPoint& RootSlot, const EItemRotation& Rotation)
{
	ULyraInventoryItemInstance* Result = nullptr;
	if (ItemDef != nullptr)
	{
		Result = InventoryList.AddEntry(ItemDef, StackCount);
		UpdateItemCount(Result, StackCount, true);

		// update the grid cell with the appropriate information
		const int32 RootSlotIndex = InventoryGrid.FindGridCellFromCoords(ClumpID, RootSlot);
		InventoryGrid.UpdateCellRotation(RootSlotIndex, Rotation);
		Result->AddStatTagStack(TAG_Lyra_Inventory_Item_RootSlot, RootSlotIndex);

		// TODO update the inventory slots so they know there is an item there 
		
		if (IsUsingRegisteredSubObjectList() && IsReadyForReplication() && Result)
		{
			AddReplicatedSubObject(Result);
		}
	}
	
	return Result;
}

int32 ULyraTetrisInventoryManagerComponent::GetTotalItemCountByDefinitionInChild(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const
{
	int32 TotalCount = 0;
	for (const FInventoryEntry& Entry : InventoryList.GetEntries())
	{
		ULyraInventoryItemInstance* Instance = Entry.Instance;

		if (IsValid(Instance))
		{
			if (Instance->GetItemDef() == ItemDef)
			{
				TotalCount += Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
			}

			// if this item has an inventory
			if(Instance->FindFragmentByClass<UInventoryFragment_Container>())
			{
				// get the total item count in the child inventory
				const UInventoryFragmentPayload_Container* ContainerTransient = Cast<UInventoryFragmentPayload_Container>(Instance->FindFragmentPayloadByClass(UInventoryFragment_Container::StaticClass()));
				if(IsValid(ContainerTransient) && IsValid(ContainerTransient->ChildInventory))
				{
					
					TotalCount += ContainerTransient->ChildInventory->GetTotalItemCountByDefinition(ItemDef);
				}
			}
		}
	}

	return TotalCount;
}


TArray<FGridCellInfo> ULyraTetrisInventoryManagerComponent::GetAllGridCells() const
{
	return InventoryGrid.GetAllCells();
}


int32 ULyraTetrisInventoryManagerComponent::AddItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount,
                                              TArray<ULyraInventoryItemInstance*>& OutStackedItems, TArray<ULyraInventoryItemInstance*>& OutNewItems)
{
	if (!IsValid(ItemDef) || Amount <= 0)
		return Amount;

	const ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	const UInventoryFragment_Tetris* InventoryTetrisFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_Tetris>();

	const int32 AmountAllowed = CanAddItemDefinition(ItemDef, Amount);
	if(AmountAllowed == 0)
		// return the remaining amount which is `amount` since nothing was added to the inventory
		return Amount;
	
	int32 RemainingAmount = AmountAllowed;

	// Check if the item can be added to existing stacks
	for (FInventoryEntry& Entry : InventoryList.GetEntries())
	{
		if (Entry.Instance->GetItemDef() == ItemDef)
		{
			// This means the item does not interact with the inventory slots, so just add the item amount to this instance
			if(!IsValid(InventoryTetrisFragment))
			{
				UpdateItemCount(Entry.Instance, Amount, true);
				OutStackedItems.Add(Entry.Instance);
				RemainingAmount = 0;
			}
			else
			{
				const int32 AvailableSpace = InventoryTetrisFragment->MaxStackSize - Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
				const int32 AmountToAdd = FMath::Min(RemainingAmount, AvailableSpace);
				RemainingAmount -= AmountToAdd;

				OutStackedItems.Add(Entry.Instance);
			}
			
			if (RemainingAmount == 0)
				return 0;
		}
	}

	// This item ignores the context (weight, itemcount) of the inventory so just make a new entry for it
	if(!IsValid(InventoryTetrisFragment))
	{
		ULyraInventoryItemInstance* NewItemInstance = AddItemDefinition(ItemDef, RemainingAmount);
		OutNewItems.Add(NewItemInstance);
		// everything was added to this inventory so no remaining items left to add
		return 0;
	}
	
	// this inventory uses a tetris based system
	// Find available empty slots for the remaining amount
	TArray<FInventorySlotFound> AvailableEmptySlots = FindAvailableSlotsForItem(ItemDef, RemainingAmount, false);
	
	// Add the item to available empty slots
	for (const FInventorySlotFound& EmptySlotFound : AvailableEmptySlots)
	{
		const int32 AmountToAdd = FMath::Min(RemainingAmount,
			InventoryTetrisFragment->MaxStackSize);
			
		ULyraInventoryItemInstance* NewItemInstance = nullptr;
		AddItemToSlot(ItemDef, AmountToAdd, EmptySlotFound.ClumpID, EmptySlotFound.RootIndex,
			EmptySlotFound.SupportedRotation, NewItemInstance);

		if (NewItemInstance)
		{
			OutNewItems.Add(NewItemInstance);
			RemainingAmount -= AmountToAdd;
			if (RemainingAmount == 0)
				break;
		}
	}
	
	return Amount - RemainingAmount;
}


void ULyraTetrisInventoryManagerComponent::RemoveItem(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bRemoveEntireStack)
{
	if (!IsValid(ItemInstance) || Amount <= 0)
		return;

	const ULyraInventoryItemDefinition* ItemDefinition = ItemInstance->GetItemDef().GetDefaultObject();
	const UInventoryFragment_InventoryIcon* InventoryIconFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_InventoryIcon>();
	
	for (FInventoryEntry& Entry : InventoryList.GetEntries())
	{
		if (Entry.Instance == ItemInstance)
		{
			const int32 AmountToRemove = FMath::Min(Amount, Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count));
			
			// if this item interacts with the inventory slots so remove the item from the slot
			if(InventoryIconFragment)
			{
				const int32 RootSlot = ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlot);

				// we are going to remove this item from the slot
				RemoveItemFromSlot(RootSlot, AmountToRemove, bRemoveEntireStack);
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


int32 ULyraTetrisInventoryManagerComponent::AddItemToSlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount, int32 ClumpID,
	const FIntPoint& RootSlot, const EItemRotation& Rotation, ULyraInventoryItemInstance*& OutNewItem)
{
	// Get the amount of the item definition that can be added to this inventory
	int32 AmountAllowed = CanAddItemDefinition(ItemDef, Amount);
	if(AmountAllowed == 0)
		// return the remaining amount which is `amount` since nothing was added to the inventory
		return Amount;

	const ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();	
	const UInventoryFragment_Tetris* InventoryTetrisFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_Tetris>();
	

	// if there is no inventory icon fragment this means the function does interact with the inventory
	if (!IsValid(InventoryTetrisFragment))
	{
		AddItemDefinition(ItemDef, AmountAllowed);
		// added everything so return 0 to indicate there is nothing left to add
		return 0;
	}

	// don't add more than allowed to this slot
	AmountAllowed = FMath::Min(AmountAllowed, InventoryTetrisFragment->MaxStackSize);
	
	// Check empty slots in the inventory grid
	const int32 GridCellIndex = InventoryGrid.FindGridCellFromCoords(ClumpID, RootSlot);
	if(GridCellIndex == -1)
		return 0;
	
	ULyraInventoryItemInstance* ItemInstance = InventoryGrid.GridCells[GridCellIndex].ItemInstance;
	if (ItemInstance != nullptr)
	{
		// if the items are different don't add to the slot
		if(ItemInstance->GetItemDef() != ItemDef)
			// return the remaining amount which is `amount` since nothing was added to the inventory
			return Amount;

		// don't add more than the max stack to this item
		const int32 CurrentItemStacks = ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
		AmountAllowed = FMath::Min(AmountAllowed, InventoryTetrisFragment->MaxStackSize - CurrentItemStacks);

		// increment the item count
		UpdateItemCount(ItemInstance, AmountAllowed, true);
	}
	else
	{
		// Add new entry to the inventory
		OutNewItem = AddItemDefinitionToSlot(ItemDef, AmountAllowed, ClumpID, RootSlot, Rotation);
	}

	// return the remaining amount
	return Amount - AmountAllowed;
}


void ULyraTetrisInventoryManagerComponent::RemoveItemFromSlot(int32 GridCellIndex, int32 Amount, bool bRemoveEntireStack)
{

	// do nothing if there is no item in that slot
	ULyraInventoryItemInstance* ItemInstance = InventoryGrid.GridCells[GridCellIndex].ItemInstance;
	if(!IsValid(ItemInstance))
		return;

	// if the item does not interact with slots then ignore it
	ULyraInventoryItemDefinition* ItemDefinition = ItemInstance->GetItemDef().GetDefaultObject();
	const UInventoryFragment_Tetris* InventoryTetrisFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_Tetris>();
	if(!IsValid(InventoryTetrisFragment))
		return;
	
	// Get the root slot location of the item in the inventory
	const FIntPoint RootSlot(InventoryGrid.GridCells[GridCellIndex].Position);

	// get the clump ID for the item
	const int32 ClumpID = InventoryGrid.GridCells[GridCellIndex].ClumpID;
	
	// are we completely removing the item instance from the inventory
	if(bRemoveEntireStack || Amount >= ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count))
	{
		TArray<FIntPoint> OccupiedSlots = FindSlotsFromShape(RootSlot, InventoryTetrisFragment->Shape, InventoryGrid.GridCells[GridCellIndex].Rotation);
		// set the slots to empty
		for (const FIntPoint& Slot : OccupiedSlots)
		{
			
			const int32 SlotIndex = InventoryGrid.FindGridCellFromCoords(ClumpID, Slot);
			InventoryGrid.UpdateCellItemInstance(SlotIndex, nullptr);
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


TArray<FInventorySlotFound> ULyraTetrisInventoryManagerComponent::FindAvailableSlotsForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 AmountToFind, bool bSearchStacks)
{
	TArray<FInventorySlotFound> AvailableSlots;
	int32 RemainingAmount = AmountToFind;

	const ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	const UInventoryFragment_Tetris* InventoryTetrisFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_Tetris>();
	
	// this item does not interact with the inventory slots
	if(!IsValid(InventoryTetrisFragment))
		return AvailableSlots;
	
	
	// Check item stacks first
	if(bSearchStacks)
	{
		for (const FInventoryEntry& Entry : InventoryList.GetEntries())
		{
			if (Entry.Instance->GetItemDef() == ItemDef)
			{
				// get the root slot of the item instance
				const int32 RootSlotIndex = Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlot);
				
				// check if there is avaiable stack space
				const int32 AvailableStackSpace = InventoryTetrisFragment->MaxStackSize - Entry.Instance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
				const int32 AmountToAdd = FMath::Min(RemainingAmount, AvailableStackSpace);

				if(AmountToAdd > 0)
				{
					// add this slot to the available slots we can add
					AvailableSlots.Add(FInventorySlotFound(InventoryGrid.GridCells[RootSlotIndex].Position,
						InventoryGrid.GridCells[RootSlotIndex].Rotation, -1));
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
	for (const auto& GridCell : InventoryGrid.GridCells)
	{
		// Check if the slot is empty
		if (GridCell.ItemInstance == nullptr)
		{
			// get the clump of the grid cell we are checking
			const int32 ClumpID = GridCell.ClumpID;
			// get the position of the slot
			const FIntPoint RootSlot(GridCell.Position);
			
			// Try placing the item with each rotation
			for (auto& AllowedRotation : InventoryTetrisFragment->GetAllowedRotations())
			{
				if (CanPlaceItemInEmptySlot(ItemDef, ClumpID, RootSlot, AllowedRotation))
				{
					AvailableSlots.Add(FInventorySlotFound(RootSlot, AllowedRotation, ClumpID));
					RemainingAmount--;
					break;
				}
			}
		}
	}

    return AvailableSlots;
}


TArray<FIntPoint> ULyraTetrisInventoryManagerComponent::FindSlotsFromShape(const FIntPoint& RootSlot, const TArray<F1DBooleanRow>& Shape,
	const EItemRotation& Rotation)
{
	TArray<FIntPoint> OccupiedSlots;

	// Rotate the shape based on the specified rotation
	TArray<F1DBooleanRow> RotatedShape = RotateShape(Shape, Rotation);

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


bool ULyraTetrisInventoryManagerComponent::CanPlaceItemInEmptySlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Clump, const FIntPoint& RootSlot, const EItemRotation& Rotation)
{
	if (!IsValid(ItemDef))
		return false;

	const ULyraInventoryItemDefinition* ItemDefinition = ItemDef.GetDefaultObject();
	if(const UInventoryFragment_Tetris* InventoryTetrisFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_Tetris>())
	{
		const TArray<F1DBooleanRow> ItemShape = InventoryTetrisFragment->Shape;

		// TODO make the root slot a valid slot if that makes, the root slot should be the upmost left valid slot
		// TODO so if I have an inverse L shape ( __| ), then the root cell would be the single cell at the top right
		TArray<FIntPoint> OccupiedSlots = FindSlotsFromShape(RootSlot, ItemShape, Rotation);

		for (const FIntPoint& Slot : OccupiedSlots)
		{
			// if the slots is not accessible
			if (!InventoryGrid.IsSlotAccessible(Clump, Slot))
				return false;

			// check if the slot is occupied
			const int32 GridCellIndex = InventoryGrid.FindGridCellFromCoords(Clump, Slot);
			if(GridCellIndex == -1)
				return false;

			// check if there is an item in the slot
			if(InventoryGrid.GridCells[GridCellIndex].ItemInstance != nullptr)
			{
				return false;
			}
		}
	}

	return false;
}


bool ULyraTetrisInventoryManagerComponent::SplitItemStack(ULyraInventoryItemInstance* ItemInstance, int32 AmountToSplit)
{
	if (!IsValid(ItemInstance) || AmountToSplit <= 0)
		return false;

	const int32 CurrentStackCount = ItemInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
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
	AddItemToSlot(ItemInstance->GetItemDef(), AmountToSplit, AvailableSlot[0].ClumpID,
		AvailableSlot[0].RootIndex, AvailableSlot[0].SupportedRotation, NewItemAdded);

	return true;
}


bool ULyraTetrisInventoryManagerComponent::CombineItemStack(ULyraInventoryItemInstance* DestinationInstance,
	ULyraInventoryItemInstance* SourceInstance)
{
	if (!IsValid(DestinationInstance) || !IsValid(SourceInstance))
		return false;

	// do not combine stacks if the items are not the same
	if (DestinationInstance->GetItemDef() != SourceInstance->GetItemDef())
		return false;

	// Get the current stack counts
	const ULyraInventoryItemDefinition* ItemDefinition = SourceInstance->GetItemDef().GetDefaultObject();
	const UInventoryFragment_Tetris* InventoryTetrisFragment = ItemDefinition->FindFragmentByClass<UInventoryFragment_Tetris>();
	if(!IsValid(InventoryTetrisFragment))
		return false;
		
	
	const int32 DestinationStackCount = DestinationInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);
	const int32 SourceStackCount = SourceInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_Count);

	// Calculate the new stack count
	const int32 NewStackCount = DestinationStackCount + SourceStackCount;
	const int32 MaxStackSize = InventoryTetrisFragment->MaxStackSize;

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
		const int32 RootSlot = SourceInstance->GetStatTagStackCount(TAG_Lyra_Inventory_Item_RootSlot);
		RemoveItemFromSlot(RootSlot, 0, true);
	}

	return true;
}


bool ULyraTetrisInventoryManagerComponent::SearchForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Count,
	TArray<ULyraInventoryItemInstance*>& OutItemInstances)
{

	int32 RemainingAmount = Count;
	for (const FInventoryEntry& Entry : InventoryList.GetEntries())
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

void ULyraTetrisInventoryManagerComponent::DestroyContainingInventories()
{
	for (const FInventoryEntry& Entry : InventoryList.GetEntries())
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
					if (UGlobalInventoryManager* InventoryManager = UGlobalInventoryManager::Get(GetWorld()))
					{
						InventoryManager->DestroyItemInventory(ContainerTransient->ChildInventory);
					}
				}
			}
		}
	}
}


void ULyraTetrisInventoryManagerComponent::EmptyInventory()
{
	// Deference the values in the grid
	InventoryGrid.EmptyGridItems();

	// reduce the weight and item count in parent inventory
	float CurrentItemWeight = GetWeight();
	float CurrentItemCount = GetItemCount();
	for (ULyraTetrisInventoryManagerComponent* Current = ParentInventory; Current; Current = Current->ParentInventory)
	{
		if (!Current->bIgnoreChildInventoryWeights)
		{
			Current->SetWeight(Current->GetWeight() - CurrentItemWeight);
		}
		else
		{
			CurrentItemWeight = 0; // Stop weight propagation
		}

		if (!Current->bIgnoreChildInventoryItemCounts)
		{
			Current->SetItemCount(Current->GetItemCount() + CurrentItemCount);
		}
		else
		{
			CurrentItemCount = 0; // Stop item count propagation
		}

		// Break if both propagation have been stopped
		if (CurrentItemWeight == 0 && CurrentItemCount == 0) break;
	}
	
	// stop replicating the item instance UObjects
	// reset the inventory list and remove child inventories
	// reset the weight and item count back the current inventory
	Super::EmptyInventory();
}

void ULyraTetrisInventoryManagerComponent::UpdateItemCount(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bAdd)
{
	if (!IsValid(ItemInstance) || Amount == 0) return;

	const ULyraInventoryItemDefinition* ItemDefinition = ItemInstance->GetItemDef().GetDefaultObject();
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
	for (ULyraTetrisInventoryManagerComponent* Current = ParentInventory; Current; Current = Current->ParentInventory)
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


TArray<F1DBooleanRow> ULyraTetrisInventoryManagerComponent::RotateShape(const TArray<F1DBooleanRow>& Shape, const EItemRotation& Rotation)
{
	TArray<F1DBooleanRow> RotatedShape = Shape;

	int32 RotationLoops;
	switch (Rotation)
	{
	case EItemRotation::Rotation_0:
		RotationLoops = 0;
		break;
	case EItemRotation::Rotation_90:
		RotationLoops = 1;
		break;
	case EItemRotation::Rotation_180:
		RotationLoops = 2;
		break;
	case EItemRotation::Rotation_270:
		RotationLoops = 3;
		break;
	default:
		RotationLoops = 0;
		break;
	}

	for (int32 i = 0; i < RotationLoops; ++i)
	{
		RotatedShape = RotateShape90Degrees(RotatedShape);
	}

	return RotatedShape;
}

TArray<F1DBooleanRow> ULyraTetrisInventoryManagerComponent::RotateShape90Degrees(const TArray<F1DBooleanRow>& Shape)
{
	const int32 Rows = Shape.Num();
	const int32 Columns = Shape[0].Num();

	TArray<F1DBooleanRow> RotatedShape;
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


