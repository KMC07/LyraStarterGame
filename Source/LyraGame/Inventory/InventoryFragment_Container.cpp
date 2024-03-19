// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryFragment_Container.h"

#include "LyraInventoryItemInstance.h"
#include "LyraInventoryManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InventoryFragment_Container)

//////////////////////////////////////////////////////////////////////
// Transient Container Fragment

void UInventoryFragmentPayload_Container::DestroyTransientFragment()
{
	if(ChildInventory)
	{
		// TODO tell the global manager to delete this inventory

		// TODO remove the reference to the child inventory
		ChildInventory = nullptr;
	}
}

//////////////////////////////////////////////////////////////////////
// Container Fragment 

ULyraInventoryItemFragmentPayload* UInventoryFragment_Container::CreateNewTransientFragment() const
{
	// TODO tell the global inventory manager to create a new inventory for me

	// TODO return the inventory pointer
	
	return nullptr;
}
