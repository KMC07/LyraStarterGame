// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/ActorComponent.h"
#include "Net/Serialization/FastArraySerializer.h"

#include "LyraInventoryManagerComponent.generated.h"

class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;
class ULyraInventoryManagerComponent;
class UObject;
struct FFrame;
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
struct LYRAGAME_API FInventoryEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FInventoryEntry()
	{}

	FString GetDebugString() const;

	UPROPERTY()
	TObjectPtr<ULyraInventoryItemInstance> Instance = nullptr;

	UPROPERTY()
	int32 StackCount = 0;
	
private:
	friend FInventoryList;
	friend ULyraInventoryManagerComponent;
	
	UPROPERTY(NotReplicated)
	int32 LastObservedCount = INDEX_NONE;
};

/** List of inventory items */
USTRUCT(BlueprintType)
struct LYRAGAME_API FInventoryList : public FFastArraySerializer
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
	TArray<FInventoryEntry> GetEntries() const { return Entries; } 

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

UCLASS(Blueprintable, BlueprintType)
class LYRAGAME_API ULyraInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	ULyraInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~UActorComponent interface
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of UActorComponent interface
	
public:

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	virtual int32 CanAddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	ULyraInventoryItemInstance* AddItemDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 StackCount = 1);
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void AddItemInstance(ULyraInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void RemoveItemInstance(ULyraInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure=false)
	TArray<ULyraInventoryItemInstance*> GetAllItems() const;

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure)
	ULyraInventoryItemInstance* FindFirstItemStackByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	
	virtual int32 GetTotalItemCountByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	bool ConsumeItemsByDefinition(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, int32 NumToConsume);
	int32 GetSpecificItemLimit(TSubclassOf<ULyraInventoryItemDefinition> ItemDef) const;
	
	UFUNCTION(BlueprintCallable, Category=Inventory)
	virtual void EmptyInventory();
	
	
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
	virtual void UpdateItemCount(ULyraInventoryItemInstance* ItemInstance, int32 Amount, bool bAdd);
	
// these are the variables that determine the inventories function
protected:
	UPROPERTY(EditAnywhere, Category=Inventory)
	FText ContainerName = FText::FromString("Container");
	
	// these are the itemn the inventory starts with
	UPROPERTY(EditAnywhere, Category=Inventory)
	TArray<FSpecificItemDefinition> StartingItems;
	
	// If set to 0 then this inventory will not take weight into account
	UPROPERTY(EditAnywhere, Category=Inventory)
	float MaxWeight = 10.0f;
	
	// if set to 0 then this inventory will not take item counts into account
	UPROPERTY(EditAnywhere, Category=Inventory)
	int32 ItemCountLimit = 10;

	// if this is not empty, then only items in this array allowed in this inventory
	UPROPERTY(EditAnywhere, Category=Inventory)
	TSet<TSubclassOf<ULyraInventoryItemDefinition>> AllowedItems;

	// if this is not empty, then items in this array are not allowed in this list
	UPROPERTY(EditAnywhere, Category=Inventory)
	TSet<TSubclassOf<ULyraInventoryItemDefinition>> DisallowedItems;

	// this is the list of items and the max amount that can be in your inventory (NOTE DO NOT set an item to 0, instead add item to DisallowedItems)
	UPROPERTY(EditAnywhere, Category=Inventory)
	TArray<FSpecificItemDefinition> SpecificItemCountLimits;

	UPROPERTY(Replicated)
	FInventoryList InventoryList;
	
private:
	UPROPERTY(Replicated)
	float ItemCount;
	
	UPROPERTY(Replicated)
	float Weight;
};
