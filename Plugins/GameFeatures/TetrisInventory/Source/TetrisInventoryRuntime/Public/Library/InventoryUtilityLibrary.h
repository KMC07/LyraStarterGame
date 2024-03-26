#pragma once

#include "InventoryDataLibrary.h"

#include "InventoryUtilityLibrary.generated.h"


/**
 * library functions for inventory system
 */
UCLASS()
class TETRISINVENTORYRUNTIME_API UInventoryUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Utilities|Clipboard")
	static void CopyShapeToClipboard(const TArray<F1DBooleanRow>& Shape);

	UFUNCTION(BlueprintCallable, Category = "Utilities|Clipboard")
	static void CopyInventoryLayoutToClipboard(const TArray<FInventoryLayoutCreator>& Clumps);

private:
	static FString ConvertShapeToString(const TArray<F1DBooleanRow>& Shape);
	
};
