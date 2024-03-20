// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventoryFragment_Container.h"

#include "GlobalInventoryManager.h"
#include "LyraInventoryItemInstance.h"
#include "LyraInventoryManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(InventoryFragment_Container)

//////////////////////////////////////////////////////////////////////
// Transient Container Fragment

void UInventoryFragmentPayload_Container::DestroyTransientFragment()
{
	if(ChildInventory)
	{
		// tell the global manager to delete this inventory
		UGlobalInventoryManager* InventoryManager = UGlobalInventoryManager::Get(GetWorld());
		if (InventoryManager)
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
	UGlobalInventoryManager* InventoryManager = UGlobalInventoryManager::Get(GetWorld());
	if (InventoryManager)
	{
		ULyraInventoryManagerComponent* NewInventory = InventoryManager->CreateNewInventory(this);
		if(NewInventory)
		{
			UInventoryFragmentPayload_Container* ContainerPayload = NewObject<UInventoryFragmentPayload_Container>(NewOwner); 
			if(ContainerPayload)
			{
				ContainerPayload->ChildInventory = NewInventory;
				return ContainerPayload;
			}
		}
	}
	return nullptr;
}
