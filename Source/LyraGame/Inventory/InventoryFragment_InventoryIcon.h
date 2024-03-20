// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "InventoryDataLibrary.h"
#include "LyraInventoryItemDefinition.h"
#include "UObject/ObjectPtr.h"

#include "InventoryFragment_InventoryIcon.generated.h"

class UObject;
class USkeletalMesh;

UCLASS()
class UInventoryFragment_InventoryIcon : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:
	virtual void PostLoad() override;
	
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	TObjectPtr<UTexture2D> InventoryIcon;

	// max number of stacks this item can have
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Item)
	int32 MaxStackSize = 1;

	// the weight of an single item (not a stack)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Item)
	float Weight = 1.0f;

	// the shape of the item where each each element is valid slot
	UPROPERTY(EditAnywhere, Category=Item)
	TArray<F1DBooleanRow> Shape;

	UPROPERTY(EditAnywhere, Category=Item)
	bool bCanBeDropped = true;

public:
	
	TArray<EItemRotation> AllowedRotations;

private:

	void InitialiseAllowedRotations();
	
	// Function to calculate allowed rotations based on the item's shape
	TArray<EItemRotation> CalculateAllowedRotations();

	
	
};
