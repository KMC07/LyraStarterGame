// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/ActorComponent.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "Library/InventoryDataLibrary.h"
#include "Net/Serialization/FastArraySerializer.h"

#include "LyraTetrisInventoryManagerComponent.generated.h"

class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;
class ULyraInventoryManagerComponent;
class UObject;
struct FFrame;
struct FGridCellInfoList;
struct FNetDeltaSerializeInfo;
struct FReplicationFlags;

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

	// The position of the cell in the inventory grid
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	FIntPoint Position = FIntPoint(-1);

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	EItemRotation Rotation = EItemRotation::Rotation_0;
	
	// The item that belongs in this cell
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TObjectPtr<ULyraInventoryItemInstance> ItemInstance = nullptr;

	// The clump this cell belongs to
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 ClumpID = -1;
	
private:
	friend FGridCellInfoList;
	friend ULyraTetrisInventoryManagerComponent;

	UPROPERTY(NotReplicated)
	EItemRotation LastObservedRotation = EItemRotation::Rotation_0;
	
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

	void PopulateInventoryGrid(const TArray<FInventoryLayoutCreator>& ClumpLayouts);
	TArray<FGridCellInfo> GetAllCells() const;
	void EmptyGridItems();
private:
	//Index mapping functions
	bool IsSlotAccessible(int32 Clump, const FIntPoint& SlotCoords);

	int32 FindGridCellFromCoords(int32 Clump, const FIntPoint& SlotCoords);
	
private:
	void BroadcastGridInventoryChangedMessage(FGridCellInfo& Entry, const EItemRotation& OldRotation, const EItemRotation& NewRotation);

private:
	friend ULyraTetrisInventoryManagerComponent;

private:
	// Replicated list of grids
	UPROPERTY()
	TArray<FGridCellInfo> GridCells;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;

	// array of clump grid that map to the grid cells index. It allows using X and Y coords efficiently
	UPROPERTY(NotReplicated)
	TArray<FInventoryClumpIndexMapping> GridCellIndexMap;
};

template<>
struct TStructOpsTypeTraits<FGridCellInfoList> : public TStructOpsTypeTraitsBase2<FGridCellInfoList>
{
	enum { WithNetDeltaSerializer = true };
};



/**
 * Manages an inventory
 */

USTRUCT(BlueprintType)
struct FInventorySlotFound
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint RootIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRotation SupportedRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ClumpID;

	FInventorySlotFound()
		: RootIndex(FIntPoint(0, 0)),
	SupportedRotation(EItemRotation::Rotation_0),
	ClumpID(0)
	{}

	FInventorySlotFound(const FIntPoint& InRootIndex, const EItemRotation& InSupportedRotation, int32 InClumpID)
	{
		RootIndex = InRootIndex;
		SupportedRotation = InSupportedRotation;
		ClumpID = InClumpID;
	}
};

UCLASS(Blueprintable, BlueprintType)
class TETRISINVENTORYRUNTIME_API ULyraTetrisInventoryManagerComponent : public ULyraInventoryManagerComponent
{
	GENERATED_BODY()

public:
	ULyraTetrisInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~UActorComponent interface
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of UActorComponent interface
	
public:
	virtual int32 CanAddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount = 1) override;

	// this gets the total item count including in child inventories
	int32 GetTotalItemCountByDefinitionInChild(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	
	UFUNCTION(Category=Inventory)
	ULyraInventoryItemInstance* AddItemDefinitionToSlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount,
		int32 ClumpID, const FIntPoint& RootSlot, const EItemRotation& Rotation);
	
	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure=false)
	TArray<FGridCellInfo> GetAllGridCells() const;
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "RemainingAmount") int32 AddItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount,
		TArray<ULyraInventoryItemInstance*>& OutStackedItems, TArray<ULyraInventoryItemInstance*>& OutNewItems);
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	void RemoveItem(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bRemoveEntireStack);
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "RemainingItem") int32 AddItemToSlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Amount, int32 ClumpID,
		const FIntPoint& RootSlot, const EItemRotation& Rotation, ULyraInventoryItemInstance*& OutNewItem);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	void RemoveItemFromSlot(int32 GridCellIndex, int32 Amount, bool bRemoveEntireStack);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	TArray<FInventorySlotFound> FindAvailableSlotsForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 AmountToFind, bool bSearchStacks);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	TArray<FIntPoint> FindSlotsFromShape(const FIntPoint& RootSlot, const TArray<F1DBooleanRow>& Shape, const EItemRotation& Rotation);
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	bool CanPlaceItemInEmptySlot(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Clump, const FIntPoint& RootSlot, const EItemRotation& Rotation);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "SuccessfullySplit") bool SplitItemStack(ULyraInventoryItemInstance* ItemInstance, int32 AmountToSplit);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "SuccessfullyCombined") bool CombineItemStack(ULyraInventoryItemInstance* DestinationInstance, ULyraInventoryItemInstance* SourceInstance);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	UPARAM(DisplayName = "FoundEnoughItems") bool SearchForItem(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 Count, TArray<ULyraInventoryItemInstance*>& OutItemInstances);

	UFUNCTION(BlueprintCallable, Category=Inventory)
	void DestroyContainingInventories();
	
	virtual void EmptyInventory() override;


	// Initialiser
	void InitialiseTetrisInventoryComponent(const FText& InContainerName, const TArray<FInventoryLayoutCreator>& InInventoryLayout,
		const TArray<FSpecificItemDefinition>& InStartingItems, float InMaxWeight, bool InIgnoreChildInventoryWeights,
		int32 InItemCountLimit, bool InIgnoreChildInventoryItemCounts, const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InAllowedItems,
		const TSet<TSubclassOf<ULyraInventoryItemDefinition>>& InDisallowedItems, const TArray<FSpecificItemDefinition>& InSpecificItemCountLimits,
		bool InIgnoreChildInventoryItemLimits);
	
private:
	virtual void UpdateItemCount(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bAdd) override;
	
	// This rotates a shape to the desired degree out of select choices (0, 90, 180, 270)
	TArray<F1DBooleanRow> RotateShape (const TArray<F1DBooleanRow>& Shape, const EItemRotation& Rotation);

	// this rotates a shape by 90 degrees
	TArray<F1DBooleanRow> RotateShape90Degrees(const TArray<F1DBooleanRow>& Shape);

	// this function would almost always be called by a base inventory (no need to expose it)
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	int32 CanAddItemDefinitionInParent(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount,
		bool ItemWeightIncrease, bool ItemCountIncrease, int32 TotalSpecificItemCount);

	
	
public:
	// this is only used for UI purposes and to initialise the grid, cannot be empty as this determines where items can enter
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Inventory)
	TArray<FInventoryLayoutCreator> InventoryLayout;

protected:
	// should this inventory ignore weights from child inventory and only take into account the child item's weight
	UPROPERTY(EditAnywhere, Category=Inventory)
	bool bIgnoreChildInventoryWeights = true;
	
	// should inventory ignore the number of item a child inventory has and treat the child as a single item
	UPROPERTY(EditAnywhere, Category=Inventory)
	bool bIgnoreChildInventoryItemCounts = true;
	
	// should inventory ignore the number of item a child inventory has when checking its specific item's limit count
	UPROPERTY(EditAnywhere, Category=Inventory)
	bool bIgnoreChildInventoryItemLimits = true;
	
private:
	UPROPERTY(Replicated)
	FGridCellInfoList InventoryGrid;

	UPROPERTY(Replicated)
	TObjectPtr<ULyraTetrisInventoryManagerComponent> ParentInventory;
};
