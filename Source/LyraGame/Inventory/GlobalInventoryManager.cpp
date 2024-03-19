// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/GlobalInventoryManager.h"

#include "InventoryFragment_Container.h"
#include "LyraInventoryItemInstance.h"
#include "LyraInventoryManagerComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/GameModeBase.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GlobalInventoryManager)

// Sets default values
AGlobalInventoryManager::AGlobalInventoryManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	bAlwaysRelevant = true;
	bReplicates = true;
	NetPriority = 3.0f;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    RootComponent = DefaultSceneRoot;

}

void AGlobalInventoryManager::BeginPlay()
{
	Super::BeginPlay();
}

void AGlobalInventoryManager::InitializeGlobalInventory()
{
	// TODO add saving and loading functionality here
}

ULyraInventoryManagerComponent* AGlobalInventoryManager::CreateNewInventory(
	UInventoryFragment_Container* ContainerFragment)
{
	if(!ContainerFragment)
		return nullptr;

	
	// Create the new inventory component
	ULyraInventoryManagerComponent* NewInventoryManager = NewObject<ULyraInventoryManagerComponent>(this);
	check(NewInventoryManager);
	
	// Initialize the new inventory manager component based on the container's static data.
	NewInventoryManager->InitialiseInventoryComponent(
		ContainerFragment->ContainerName,
		ContainerFragment->InventoryGrid,
		ContainerFragment->StartingItems,
		ContainerFragment->MaxWeight,
		ContainerFragment->bIgnoreChildInventoryWeights,
		ContainerFragment->ItemCountLimit,
		ContainerFragment->bIgnoreChildInventoryItemCounts,
		ContainerFragment->AllowedItems,
		ContainerFragment->DisallowedItems,
		ContainerFragment->SpecificItemCountLimits,
		ContainerFragment->bIgnoreChildInventoryItemLimits
	);

	ContainerInventories.Add(NewInventoryManager);
	return NewInventoryManager;
}

void AGlobalInventoryManager::DestroyItemInventory(ULyraInventoryManagerComponent* InventoryManagerComponent)
{
	if(InventoryManagerComponent)
	{
		ContainerInventories.Remove(InventoryManagerComponent);
		InventoryManagerComponent->DestroyContainingInventories();
		
		// TODO broadcast to other players UI that this inventory has been destroyed so they close the inventory window
		
		InventoryManagerComponent->DestroyComponent();
	}
}

void AGlobalInventoryManager::ClearContainerInventories()
{
	for(auto& ContainerInventory : ContainerInventories)
	{
		if(ContainerInventory)
		{
			// UObjects would get deleted by the engine automatically because they would have no references anymore
			// referring to item instances and itemfragment payloads
			ContainerInventory->DestroyComponent();
		}
	}
	ContainerInventories.Empty();
}
