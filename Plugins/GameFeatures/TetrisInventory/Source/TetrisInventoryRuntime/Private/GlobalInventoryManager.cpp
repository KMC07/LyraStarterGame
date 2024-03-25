// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalInventoryManager.h"

#include "Components/SceneComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameFramework/GameStateBase.h"
#include "GameModes/LyraExperienceManagerComponent.h"
#include "InventoryFragment_Container.h"
#include "LyraTetrisInventoryManagerComponent.h"
#include "NativeGameplayTags.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GlobalInventoryManager)

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Global_Inventory_Message_Loaded, "Lyra.GlobalInventory.Message.Loaded");

void UGlobalInventoryManager::BeginPlay()
{
	Super::BeginPlay();

	// Listen for the experience load to complete
	const AGameStateBase* GameState = GetGameStateChecked<AGameStateBase>();
	ULyraExperienceManagerComponent* ExperienceComponent = GameState->FindComponentByClass<ULyraExperienceManagerComponent>();
	check(ExperienceComponent);
	ExperienceComponent->CallOrRegister_OnExperienceLoaded_LowPriority(FOnLyraExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
}

void UGlobalInventoryManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// remove all inventories from the server
	ClearContainerInventories();
	
	Super::EndPlay(EndPlayReason);
}

void UGlobalInventoryManager::OnExperienceLoaded(const ULyraExperienceDefinition* Experience)
{
	InitializeGlobalInventory();
}

UGlobalInventoryManager* UGlobalInventoryManager::Get(const UObject* WorldContextObject)
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::Assert);
	check(World);
	
	const AGameStateBase* GameState = World->GetGameState<AGameStateBase>();
	if (!GameState) return nullptr; // Ensure GameState exists

	// Attempt to find the Global Inventory Manager component on the GameState
	UGlobalInventoryManager* InventoryManager = GameState->FindComponentByClass<UGlobalInventoryManager>();
	return InventoryManager; // This could be nullptr if the component is not found
}

void UGlobalInventoryManager::InitializeGlobalInventory()
{
	// TODO add saving and loading functionality here


	// send a broadcast message that the global inventory has loaded
	FGlobalInventoryLoadedMessage LoadedMessage;
	LoadedMessage.GlobalInventoryManager = this;

	UGameplayMessageSubsystem& MessageSystem = UGameplayMessageSubsystem::Get(GetWorld());
	MessageSystem.BroadcastMessage(TAG_Lyra_Global_Inventory_Message_Loaded, LoadedMessage);
}

ULyraTetrisInventoryManagerComponent* UGlobalInventoryManager::CreateNewInventory(
	const UInventoryFragment_Container* ContainerFragment)
{
	if(!ContainerFragment)
		return nullptr;

	
	// Create the new inventory component
	ULyraTetrisInventoryManagerComponent* NewInventoryManager = NewObject<ULyraTetrisInventoryManagerComponent>(GetOwner());
	check(NewInventoryManager);
	
	// Initialize the new inventory manager component based on the container's static data.
	NewInventoryManager->InitialiseTetrisInventoryComponent(
		ContainerFragment->ContainerName,
		ContainerFragment->InventoryLayout,
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
	NewInventoryManager->RegisterComponent();
	
	ContainerInventories.Add(NewInventoryManager);
	return NewInventoryManager;
}

void UGlobalInventoryManager::DestroyItemInventory(ULyraTetrisInventoryManagerComponent* InventoryManagerComponent)
{
	if(InventoryManagerComponent)
	{
		ContainerInventories.Remove(InventoryManagerComponent);
		InventoryManagerComponent->DestroyContainingInventories();
		
		// TODO broadcast to other players UI that this inventory has been destroyed so they close the inventory window
		
		InventoryManagerComponent->DestroyComponent();
	}
}

void UGlobalInventoryManager::ClearContainerInventories()
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
