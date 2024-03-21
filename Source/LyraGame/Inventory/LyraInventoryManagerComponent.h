// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/ActorComponent.h"
#include "InventoryDataLibrary.h"
#include "Net/Serialization/FastArraySerializer.h"

#include "LyraInventoryManagerComponent.generated.h"

class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;
class ULyraInventoryManagerComponent;
class UObject;
struct FFrame;
struct FGridCellInfoList;
struct FInventoryList;
struct FNetDeltaSerializeInfo;
struct FReplicationFlags;

/** A message when an item is added to the inventory */
USTRUCT(BlueprintType)
struct FInventoryChangeMessage
{
	GENERATED_BODY()

	//@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TObjectPtr<UActorComponent> InventoryOwner = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = Inventory)
	TObjectPtr<ULyraInventoryItemInstance> Instance = nullptr;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 NewCount = 0;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 Delta = 0;
};

/** A single entry in an inventory */
USTRUCT(BlueprintType)
struct FInventoryEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FInventoryEntry()
	{}

	FString GetDebugString() const;

private:
	friend FInventoryList;
	friend ULyraInventoryManagerComponent;

	UPROPERTY()
	TObjectPtr<ULyraInventoryItemInstance> Instance = nullptr;

	UPROPERTY()
	int32 StackCount = 0;

	UPROPERTY(NotReplicated)
	int32 LastObservedCount = INDEX_NONE;
};

/** List of inventory items */
USTRUCT(BlueprintType)
struct FInventoryList : public FFastArraySerializer
{
	GENERATED_BODY()

	FInventoryList()
		: OwnerComponent(nullptr)
	{
	}

	FInventoryList(UActorComponent* InOwnerComponent)
		: OwnerComponent(InOwnerComponent)
	{
	}

	TArray<ULyraInventoryItemInstance*> GetAllItems() const;

public:
	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FInventoryEntry, FInventoryList>(Entries, DeltaParms, *this);
	}

	ULyraInventoryItemInstance* AddEntry(TSubclassOf<ULyraInventoryItemDefinition> ItemClass, int32 StackCount);
	void AddEntry(ULyraInventoryItemInstance* Instance);

	void RemoveEntry(ULyraInventoryItemInstance* Instance);

	void ClearInventoryEntries();

private:
	void BroadcastChangeMessage(FInventoryEntry& Entry, int32 OldCount, int32 NewCount);

private:
	friend ULyraInventoryManagerComponent;

private:
	// Replicated list of items
	UPROPERTY()
	TArray<FInventoryEntry> Entries;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;
};

template<>
struct TStructOpsTypeTraits<FInventoryList> : public TStructOpsTypeTraitsBase2<FInventoryList>
{
	enum { WithNetDeltaSerializer = true };
};



/** A message when an grid cell has changed */
USTRUCT(BlueprintType)
struct FGridInventoryChangedMessage
{
	GENERATED_BODY()

	//@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TObjectPtr<UActorComponent> InventoryOwner = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = Inventory)
	TObjectPtr<ULyraInventoryItemInstance> Instance = nullptr;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	EItemRotation NewRotation = EItemRotation::Rotation_0;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	EItemRotation OldRotation = EItemRotation::Rotation_0;
};


/** A single grid in an inventory */
USTRUCT(BlueprintType)
struct FGridCellInfo : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FGridCellInfo()
	{}

	FGridCellInfo(FIntPoint InPosition, ULyraInventoryItemInstance* InItemInstance) : Position(InPosition), ItemInstance(InItemInstance) {}
	
	FString GetDebugString() const;

private:
	friend FGridCellInfoList;
	friend ULyraInventoryManagerComponent;
	
	// The position of the cell in the inventory grid
	UPROPERTY()
	FIntPoint Position = FIntPoint(-1);

	UPROPERTY()
	EItemRotation Rotation = EItemRotation::Rotation_0;

	UPROPERTY(NotReplicated)
	EItemRotation LastObservedRotation = EItemRotation::Rotation_0;

	// The item that belongs in this cell
	UPROPERTY()
	TObjectPtr<ULyraInventoryItemInstance> ItemInstance = nullptr;
};

/** List of inventory grids in the inventory */
USTRUCT(BlueprintType)
struct FGridCellInfoList : public FFastArraySerializer
{
	GENERATED_BODY()

	FGridCellInfoList()
		: OwnerComponent(nullptr)
	{
	}

	FGridCellInfoList(UActorComponent* InOwnerComponent)
		: OwnerComponent(InOwnerComponent)
	{
	}
	
public:
	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FGridCellInfo, FGridCellInfoList>(GridCells, DeltaParms, *this);
	}

	void UpdateCellRotation(int32 SlotIndex, const EItemRotation& NewRotation);
	void UpdateCellItemInstance(int32 SlotIndex, ULyraInventoryItemInstance* NewItemInstance);

	void PopulateInventoryGrid(const TArray<F1DBooleanRow>& GridShape);
	void EmptyGridItems();
private:
	//Index mapping functions
	bool IsSlotAccessible(const FIntPoint& SlotCoords);

	int32 FindGridCellFromCoords(const FIntPoint& SlotCoords);
	
private:
	void BroadcastGridCellInventoryChangedMessage(FGridCellInfo& Entry, const EItemRotation& OldRotation, const EItemRotation& NewRotation);

private:
	friend ULyraInventoryManagerComponent;

private:
	// Replicated list of grids
	UPROPERTY()
	TArray<FGridCellInfo> GridCells;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;

	// map to make finding the grid cells using X and Y coords O(1)
	UPROPERTY(NotReplicated)
	TArray<F1DIntegerRow> GridCellIndexMap;
};

template<>
struct TStructOpsTypeTraits<FGridCellInfoList> : public TStructOpsTypeTraitsBase2<FGridCellInfoList>
{
	enum { WithNetDeltaSerializer = true };
};



/**
 * Manages an inventory
 */

// TODO replace this. This struct is a duplicate of FPickupTemplate but don't want to cause circular dependancies
USTRUCT(BlueprintType)
struct FSpecificItemDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ULyraInventoryItemDefinition> ItemDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount = 0;
};

USTRUCT(BlueprintType)
struct FInventorySlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Inventory)
	bool bIsAccessible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Inventory)
	ULyraInventoryItemInstance* ItemInstance;

	FInventorySlot()
		: bIsAccessible(true), ItemInstance(nullptr)
	{}
};

USTRUCT(BlueprintType)
struct FInventory2DSlot
{
	GENERATED_BODY()

public:
	TArray<FInventorySlot> SlotRow;

	FInventorySlot operator[](int32 i) const
	{
		return SlotRow[i];
	}

	FInventorySlot& operator[](int32 i)
	{
		return SlotRow[i];
	}

	void Add(const FInventorySlot& InventorySlot)
	{
		SlotRow.Add(InventorySlot);
	}

	int32 Num() const
	{
		return SlotRow.Num();
	}

	void SetNum(int32 NewNum)
	{
		SlotRow.SetNum(NewNum);
	}

	void Init(int32 Size, FInventorySlot Slot)
	{
		SlotRow.Init(Slot, Size);
	}

	bool IsValidIndex(int32 Index) const
	{
		return SlotRow.IsValidIndex(Index);
	}
};

USTRUCT(BlueprintType)
struct FInventorySlotFound
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint RootIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRotation SupportedRotation;

	FInventorySlotFound()
		: RootIndex(FIntPoint(0, 0)), SupportedRotation(EItemRotation::Rotation_0)
	{}

	FInventorySlotFound(const FIntPoint& InRootIndex, const EItemRotation& InSupportedRotation)
	{
		RootIndex = InRootIndex;
		SupportedRotation = InSupportedRotation;
	}
};

UCLASS(BlueprintType)
class LYRAGAME_API ULyraInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	ULyraInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	int32 CanAddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	ULyraInventoryItemInstance* AddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(Category=Inventory)
	ULyraInventoryItemInstance* AddItemDefinitionToSlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount,
		const FIntPoint& RootSlot, const EItemRotation& Rotation);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void AddItemInstance(ULyraInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void RemoveItemInstance(ULyraInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure=false)
	TArray<ULyraInventoryItemInstance*> GetAllItems() const;

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure)
	ULyraInventoryItemInstance* FindFirstItemStackByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	
	int32 GetTotalItemCountByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, bool bCheckChildInventories) const;
	bool ConsumeItemsByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 NumToConsume);
	int32 GetSpecificItemLimit(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "RemainingAmount") int32 AddItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount,
		TArray<ULyraInventoryItemInstance*>& OutStackedItems, TArray<ULyraInventoryItemInstance*>& OutNewItems);
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	void RemoveItem(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bRemoveEntireStack);
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "RemainingItem") int32 AddItemToSlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount,
		const FIntPoint& RootSlot, const EItemRotation& Rotation, ULyraInventoryItemInstance*& OutNewItem);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	void RemoveItemFromSlot(int32 GridCellIndex, int32 Amount, bool bRemoveEntireStack);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	TArray<FInventorySlotFound> FindAvailableSlotsForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 AmountToFind, bool bSearchStacks);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	TArray<FIntPoint> FindSlotsFromShape(const FIntPoint& RootSlot, const TArray<F1DBooleanRow>& Shape, const EItemRotation& Rotation);
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	bool CanPlaceItemInEmptySlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, const FIntPoint& RootSlot, const EItemRotation& Rotation);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "SuccessfullySplit") bool SplitItemStack(ULyraInventoryItemInstance* ItemInstance, int32 AmountToSplit);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "SuccessfullyCombined") bool CombineItemStack(ULyraInventoryItemInstance* DestinationInstance, ULyraInventoryItemInstance* SourceInstance);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "FoundEnoughItems") bool SearchForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Count, TArray<ULyraInventoryItemInstance*>& OutItemInstances);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	void DestroyContainingInventories();
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	void EmptyInventory();


	// Initialiser
	void InitialiseInventoryComponent(const FText& InContainerName, const TArray<F1DBooleanRow>& InInventoryGrid,
		const TArray<FSpecificItemDefinition>& InStartingItems, float InMaxWeight, bool InIgnoreChildInventoryWeights,
		int32 InItemCountLimit, bool InIgnoreChildInventoryItemCounts, const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InAllowedItems,
		const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InDisallowedItems, const TArray<FSpecificItemDefinition>& InSpecificItemCountLimits,
		bool InIgnoreChildInventoryItemLimits);

	
	
	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void ReadyForReplication() override;
	//~End of UObject interface


	
	//-------------GETTER AND SETTER FUNCTIONS ------------//
	UFUNCTION(BlueprintGetter)
	float GetWeight() const { return Weight; }

	UFUNCTION(BlueprintGetter)
	float GetItemCount() const { return ItemCount; }

	UFUNCTION(BlueprintSetter)
	void SetWeight(float InWeight)
	{
		Weight = InWeight;
	}

	UFUNCTION(BlueprintSetter)
	void SetItemCount(float InItemCount)
	{
		ItemCount = InItemCount;
	}
	
private:

	bool IsSlotOverlapping(const FIntPoint& Slot1, const FIntPoint& Slot2);

	void UpdateItemCount(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bAdd);
	
	// This rotates a shape to the desired degree out of select choices (0, 90, 180, 270)
	TArray<F1DBooleanRow> RotateShape (const TArray<F1DBooleanRow>& Shape, const EItemRotation& Rotation);

	// this rotates a shape by 90 degrees
	TArray<F1DBooleanRow> RotateShape90Degrees(const TArray<F1DBooleanRow>& Shape);

	// this function would almost always be called by a base inventory (no need to expose it)
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	int32 CanAddItemDefinitionInParent(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount,
		bool ItemWeightIncrease, bool ItemCountIncrease, int32 TotalSpecificItemCount);


// these are the variables that determine the inventories function
protected:
	UPROPERTY(EditAnywhere)
	FText ContainerName = FText::FromString("Container");
	
	// Keep this as empty if there is no spatial awareness in the inventory (think of COD or Fortnite where inventory slot position doesn't matter)
	UPROPERTY(EditAnywhere, Category=Item)
	TArray<F1DBooleanRow> InventoryGridShape;
	
	// these are the itemn the inventory starts with
	UPROPERTY(EditAnywhere)
	TArray<FSpecificItemDefinition> StartingItems;
	
	// If set to 0 then this inventory will not take weight into account
	UPROPERTY(EditAnywhere)
	float MaxWeight = 10.0f;

	// should this inventory ignore weights from child inventory and only take into account the child item's weight
	UPROPERTY(EditAnywhere)
	bool bIgnoreChildInventoryWeights = true;
	
	// if set to 0 then this inventory will not take item counts into account
	UPROPERTY(EditAnywhere)
	int32 ItemCountLimit = 10;

	// should inventory ignore the number of item a child inventory has and treat the child as a single item
	UPROPERTY(EditAnywhere)
	bool bIgnoreChildInventoryItemCounts = true;

	// if this is not empty, then only items in this array allowed in this inventory
	UPROPERTY(EditAnywhere, Category=Inventory)
	TSet<TSubclassOf<ULyraInventoryItemDefinition>> AllowedItems;

	// if this is not empty, then items in this array are not allowed in this list
	UPROPERTY(EditAnywhere, Category=Inventory)
	TSet<TSubclassOf<ULyraInventoryItemDefinition>> DisallowedItems;

	// this is the list of items and the max amount that can be in your inventory (NOTE DO NOT set an item to 0, instead add item to DisallowedItems)
	UPROPERTY(EditAnywhere)
	TArray<FSpecificItemDefinition> SpecificItemCountLimits;

	// should inventory ignore the number of item a child inventory has when checking its specific item's limit count
	UPROPERTY(EditAnywhere)
	bool bIgnoreChildInventoryItemLimits = true;
	
private:
	UPROPERTY(Replicated)
	FInventoryList InventoryList;

	UPROPERTY(Replicated)
	FGridCellInfoList InventoryGrid;
	
	UPROPERTY(Replicated)
	float ItemCount;
	
	UPROPERTY(Replicated)
	float Weight;

	UPROPERTY(Replicated)
	TObjectPtr<ULyraInventoryManagerComponent> ParentInventory;
};
