// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "LyraInventoryItemDefinition.h"
#include "UObject/ObjectPtr.h"

#include "InventoryFragment_InventoryIcon.generated.h"

class UObject;
class USkeletalMesh;

UCLASS()
class LYRAGAME_API UInventoryFragment_InventoryIcon : public ULyraInventoryItemFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Appearance)
	TObjectPtr<UTexture2D> InventoryIcon;
	
	// the weight of an single item (not a stack)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Item)
	float Weight = 1.0f;
};
