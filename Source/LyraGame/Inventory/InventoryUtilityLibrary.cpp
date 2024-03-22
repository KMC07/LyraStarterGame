#pragma once

#include "InventoryUtilityLibrary.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Windows/WindowsPlatformApplicationMisc.h"


void UInventoryUtilityLibrary::CopyShapeToClipboard(const TArray<F1DBooleanRow>& Shape)
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

	FPlatformApplicationMisc::ClipboardCopy(*ShapeString);
}
