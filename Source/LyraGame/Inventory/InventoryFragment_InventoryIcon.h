// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "LyraInventoryItemDefinition.h"
#include "UObject/ObjectPtr.h"

#include "InventoryFragment_InventoryIcon.generated.h"

class UObject;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FItem2DShape
{
	GENERATED_BODY()

public:
	TArray<bool> ShapeRow;

	bool operator[](int32 i) const
	{
		return ShapeRow[i];
	}

	bool& operator[](int32 i)
	{
		return ShapeRow[i];
	}

	void Add(bool Cell)
	{
		ShapeRow.Add(Cell);
	}

	int32 Num() const
	{
		return ShapeRow.Num();
	}

	void SetNum(int32 NewNum)
	{
		ShapeRow.SetNum(NewNum);
	}

	void Init(int32 Size, bool Value)
	{
		ShapeRow.Init(Value, Size);
	}
	
	bool IsValidIndex(int32 Index) const
	{
		return ShapeRow.IsValidIndex(Index);
	}
};

UENUM(BlueprintType)
enum class EItemRotation : uint8
{
	Rotation_0 UMETA(DisplayName = "0 Degrees"),
	Rotation_90 UMETA(DisplayName = "90 Degrees"),
	Rotation_180 UMETA(DisplayName = "180 Degrees"),
	Rotation_270 UMETA(DisplayName = "270 Degrees")
};

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
	TArray<FItem2DShape> Shape;

	UPROPERTY(EditAnywhere, Category=Item)
	bool bCanBeDropped = true;

public:
	
	TArray<EItemRotation> AllowedRotations;

private:

	void InitialiseAllowedRotations();
	
	// Function to calculate allowed rotations based on the item's shape
	TArray<EItemRotation> CalculateAllowedRotations();

	
	
};
