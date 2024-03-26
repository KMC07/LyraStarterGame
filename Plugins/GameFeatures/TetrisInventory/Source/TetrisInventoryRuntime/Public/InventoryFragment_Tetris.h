// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Inventory/LyraInventoryItemDefinition.h"
#include "Library/InventoryDataLibrary.h"
#include "UObject/ObjectPtr.h"

#include "InventoryFragment_Tetris.generated.h"

class UObject;
class USkeletalMesh;

UCLASS()
class UInventoryFragment_Tetris : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:
	virtual void PostLoad() override;
	
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);
	
	// the shape of the item where each each element is valid slot
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Item)
	TArray<F1DBooleanRow> Shape;

	// the shape of the item where each each element is valid slot
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Item)
	int32 MaxStackSize = 1;

	UFUNCTION(BlueprintGetter)
	TArray<EItemRotation> GetAllowedRotations() const { return AllowedRotations; }
	
private:
	
	TArray<EItemRotation> AllowedRotations;

private:

	void InitialiseAllowedRotations();
	
	// Function to calculate allowed rotations based on the item's shape
	TArray<EItemRotation> CalculateAllowedRotations();
	
};
