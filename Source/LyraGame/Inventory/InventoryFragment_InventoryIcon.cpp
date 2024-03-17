// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryFragment_InventoryIcon.h"

#include "NativeGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InventoryFragment_InventoryIcon)

void UInventoryFragment_InventoryIcon::PostLoad()
{
	Super::PostLoad();

	InitialiseAllowedRotations();
}

void UInventoryFragment_InventoryIcon::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// Check if the property changed is the shape
	if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UInventoryFragment_InventoryIcon, Shape))
	{
		// Recalculate allowed rotations based on the new shape
		AllowedRotations = CalculateAllowedRotations();
	}
}

void UInventoryFragment_InventoryIcon::InitialiseAllowedRotations()
{
	// if the shape hasn't been set create a 1 x 1 shape
	if(Shape.Num() == 0)
	{
		Shape.SetNum(1);
		Shape[0].Init(true, 1);
		// Square shapes don't need rotation to fit in different orientations
		AllowedRotations.Add(EItemRotation::Rotation_0);
	}
	else
	{
		// calculate the allowed rotations based on the shape of the actor
		AllowedRotations = CalculateAllowedRotations();
	}
}

// Function to calculate allowed rotations based on the shape
TArray<EItemRotation> UInventoryFragment_InventoryIcon::CalculateAllowedRotations()
{
	AllowedRotations.Empty();
    
	if (Shape.Num() == 0) return AllowedRotations; // Return empty if shape is not defined

	int32 Width = Shape.Num(); // Assuming each 'FItem2DShape' is a row, so 'Width' is the number of rows
	int32 Height = Shape[0].ShapeRow.Num(); // Assuming uniform height for simplicity, based on the first row

	// Checking if all rows have the same length and determining if the shape is square or rectangular
	bool bIsUniformHeight = true;
	for (const FItem2DShape& Row : Shape)
	{
		if (Row.ShapeRow.Num() != Height)
		{
			bIsUniformHeight = false;
			break;
		}
	}

	bool bIsSquare = bIsUniformHeight && (Width == Height);
	bool bIsRectangular = bIsUniformHeight && (Width != Height);

	if (bIsSquare)
	{
		// Square shapes logically need only one orientation since they fit the same in all rotations
		AllowedRotations.Add(EItemRotation::Rotation_0);
	}
	else if (bIsRectangular)
	{
		// Rectangular shapes benefit from two orientations, 0 and 90 degrees
		AllowedRotations.Add(EItemRotation::Rotation_0);
		AllowedRotations.Add(EItemRotation::Rotation_90);
	}
	else
	{
		// For irregular shapes or when not all rows are the same length, consider all rotations
		AllowedRotations.Add(EItemRotation::Rotation_0);
		AllowedRotations.Add(EItemRotation::Rotation_90);
		AllowedRotations.Add(EItemRotation::Rotation_180);
		AllowedRotations.Add(EItemRotation::Rotation_270);
	}

	return AllowedRotations;
}