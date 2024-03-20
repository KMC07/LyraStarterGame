// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "InventoryDataLibrary.h"
#include "LyraInventoryItemDefinition.h"

#include "InventoryFragment_Container.generated.h"

class ULyraInventoryManagerComponent;
class ULyraInventoryItemInstance;
class UObject;
struct FGameplayTag;
struct FSpecificItemDefinition;

// this payload is used to give items with this fragment their own internal inventory
UCLASS()
class UInventoryFragmentPayload_Container : public ULyraInventoryItemFragmentPayload
{
	GENERATED_BODY()

public:

	virtual void DestroyTransientFragment() override;
	
	TObjectPtr<ULyraInventoryManagerComponent> ChildInventory;
};

UCLASS()
class UInventoryFragment_Container : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:
	virtual ULyraInventoryItemFragmentPayload* CreateNewTransientFragment(UObject* NewOwner) const override;

public:
	UPROPERTY(EditAnywhere)
	FText ContainerName = FText::FromString("Container");

	// Do not allow this to be empty (as this doesn't make sense in the context of items. Must have a value
	UPROPERTY(EditAnywhere)
	TArray<F1DBooleanRow> InventoryGrid;
	
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
	
};
