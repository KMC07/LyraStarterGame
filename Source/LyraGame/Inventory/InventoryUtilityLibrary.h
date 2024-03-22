#pragma once

#include "CoreMinimal.h"
#include "InventoryDataLibrary.h"

#include "InventoryUtilityLibrary.generated.h"


/**
 * library functions for inventory system
 */
UCLASS()
class LYRAGAME_API UInventoryUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Utilities|Clipboard")
	static void CopyShapeToClipboard(const TArray<F1DBooleanRow>& Shape);
};
