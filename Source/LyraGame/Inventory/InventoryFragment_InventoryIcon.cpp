// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryFragment_InventoryIcon.h"

#include "LyraInventoryItemInstance.h"
#include "NativeGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InventoryFragment_InventoryIcon)

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_Rotation, "Lyra.Inventory.Item.Rotation");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_RootSlotX, "Lyra.Inventory.Item.RootSlotX");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Inventory_Item_RootSlotY, "Lyra.Inventory.Item.RootSlotY");

UInventoryFragment_InventoryIcon::UInventoryFragment_InventoryIcon()
{
	// if the shape hasn't been set create a 1 x 1 shape
	if(Shape.Num() == 0)
	{
		Shape.SetNum(1);
		Shape[0].Init(true, 1);
	}
}

void UInventoryFragment_InventoryIcon::OnInstanceCreated(ULyraInventoryItemInstance* Instance) const
{
	// Set the default item rotation for this item
	Instance->AddStatTagStack(TAG_Lyra_Inventory_Item_Rotation, 0);
	// Set the root slot (most up left slot at 0 degrees) for its current inventory
	Instance->AddStatTagStack(TAG_Lyra_Inventory_Item_RootSlotX, -1);
	Instance->AddStatTagStack(TAG_Lyra_Inventory_Item_RootSlotY, -1);
}
