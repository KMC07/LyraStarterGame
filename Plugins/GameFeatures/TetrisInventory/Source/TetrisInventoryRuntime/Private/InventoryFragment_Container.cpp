// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryFragment_Container.h"

#include "GlobalInventoryManager.h"
#include "LyraTetrisInventoryManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InventoryFragment_Container)

//////////////////////////////////////////////////////////////////////
// Transient Container Fragment

void UInventoryFragmentPayload_Container::DestroyTransientFragment()
{
	if(ChildInventory)
	{
		// tell the global manager to delete this inventory
		if (UGlobalInventoryManager* InventoryManager = UGlobalInventoryManager::Get(GetWorld()))
		{
			InventoryManager->DestroyItemInventory(ChildInventory);
		}

		// remove the reference to the child inventory
		ChildInventory = nullptr;
	}
}

//////////////////////////////////////////////////////////////////////
// Container Fragment 

ULyraInventoryItemFragmentPayload* UInventoryFragment_Container::CreateNewTransientFragment(UObject* NewOwner) const
{
	// tell the global inventory manager to create a new inventory for me
	if (UGlobalInventoryManager* InventoryManager = UGlobalInventoryManager::Get(GetWorld()))
	{
		if(ULyraTetrisInventoryManagerComponent* NewInventory = InventoryManager->CreateNewInventory(this))
		{
			if(UInventoryFragmentPayload_Container* ContainerPayload = NewObject<UInventoryFragmentPayload_Container>(NewOwner))
			{
				ContainerPayload->ChildInventory = NewInventory;
				return ContainerPayload;
			}
		}
	}
	return nullptr;
}
