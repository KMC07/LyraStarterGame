// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameplayTagContainer.h"
#include "LyraInventoryItemDefinition.h"

#include "InventoryFragment_Container.generated.h"

class ULyraInventoryManagerComponent;
class ULyraInventoryItemInstance;
class UObject;
struct FGameplayTag;
struct FSpecificItemDefinition;

UCLASS()
class UInventoryFragment_Container : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ContainerName = FText::FromString("Container");
	
	UPROPERTY(EditAnywhere, Category = "Inventory")
	TArray<ULyraInventoryItemDefinition*> AllowedItems;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	TArray<ULyraInventoryItemDefinition*> DisallowedItems;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecificItemDefinition> SpecificItemCountLimits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowContainerWindow = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseItemCountLimit = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxWeight = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemCountLimit = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecificItemDefinition> StartingItems;

public:
	virtual void OnInstanceCreated(ULyraInventoryItemInstance* Instance) const override;
};
