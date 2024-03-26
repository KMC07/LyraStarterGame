#pragma once

#include "Library/InventoryUtilityLibrary.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Windows/WindowsPlatformApplicationMisc.h"


void UInventoryUtilityLibrary::CopyShapeToClipboard(const TArray<F1DBooleanRow>& Shape)
{
	const FString ShapeString = ConvertShapeToString(Shape);
	FPlatformApplicationMisc::ClipboardCopy(*ShapeString);
}

void UInventoryUtilityLibrary::CopyInventoryLayoutToClipboard(const TArray<FInventoryLayoutCreator>& Clumps)
{
	FString LayoutString = TEXT("(");
	for (int32 i = 0; i < Clumps.Num(); ++i)
	{
		const FInventoryLayoutCreator Clump = Clumps[i];
		// Calculate clump's position relative to the bounding rectangle's top-left corner
		const int32 RelativeX = Clump.ClumpX;
		const int32 RelativeY = Clump.ClumpY;

		FString ClumpString = FString::Printf(TEXT("(ClumpX=%d,ClumpY=%d,ClumpGrid="), RelativeX, RelativeY);

		// get the shape string and add it to the clump grid
		FString ClumpShape = ConvertShapeToString(Clump.ClumpGrid);
		ClumpString += ClumpShape;
		// close the clump layout (single element in the array)
		ClumpString += TEXT(")");

		// Add this clump's string to the overall layout string
		LayoutString += ClumpString;

		// add a comma if not the last element in the array
		if (i < Clumps.Num() - 1)
		{
			LayoutString += TEXT(",");
		}
	}

	// Optionally, remove the last comma from the LayoutString
	LayoutString += TEXT(")");

	FPlatformApplicationMisc::ClipboardCopy(*LayoutString);
}

FString UInventoryUtilityLibrary::ConvertShapeToString(const TArray<F1DBooleanRow>& Shape)
{
	FString ShapeString = TEXT("(");
	for (int32 i = 0; i < Shape.Num(); ++i)
	{
		ShapeString += TEXT("(");
		ShapeString += TEXT("BooleanRow=(");
		for (int32 j = 0; j < Shape[i].BooleanRow.Num(); ++j)
		{
			ShapeString += Shape[i].BooleanRow[j] ? TEXT("True") : TEXT("False");
			if (j < Shape[i].BooleanRow.Num() - 1)
			{
				ShapeString += TEXT(",");
			}
		}
		ShapeString += TEXT("))");
		if (i < Shape.Num() - 1)
		{
			ShapeString += TEXT(",");
		}
	}
	ShapeString += TEXT(")");

	return ShapeString;
}
