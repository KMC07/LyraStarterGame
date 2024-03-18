// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "LyraInventoryItemDefinition.h"

#include "InventoryFragment_Consumable.generated.h"

class ULyraGameplayAbility;
class ULyraInventoryManagerComponent;
class ULyraInventoryItemInstance;
class UObject;
struct FGameplayTag;
struct FSpecificItemDefinition;

UCLASS()
class UInventoryFragment_Consumable : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

protected:

	// These are the abilities to activate when this item is consumed from the inventory
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<ULyraGameplayAbility>> AbilitiesToActivate;

	
public:
	virtual void OnInstanceCreated(ULyraInventoryItemInstance* Instance) const override;
};
