// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "GameFramework/Actor.h"

#include "GlobalInventoryManager.generated.h"

class UInventoryFragment_Container;
class ULyraExperienceDefinition;
class ULyraInventoryManagerComponent;
class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;

USTRUCT(BlueprintType)
struct FGlobalInventoryLoadedMessage
{
    GENERATED_BODY()

public:
    // reference to the Global Inventory Component if needed.
	TObjectPtr<UGlobalInventoryManager> GlobalInventoryManager;
};


UCLASS(Blueprintable)
class LYRAGAME_API UGlobalInventoryManager : public UGameStateComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UGlobalInventoryManager();

	//~UActorComponent interface
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of UActorComponent interface
	
	void OnExperienceLoaded(const ULyraExperienceDefinition* Experience);
	
	static UGlobalInventoryManager* UGlobalInventoryManager::Get(const UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable)
	ULyraInventoryManagerComponent* CreateNewInventory(const UInventoryFragment_Container* ContainerFragment);

	UFUNCTION(BlueprintCallable)
	void DestroyItemInventory(ULyraInventoryManagerComponent* InventoryManagerComponent);
	
private:
	UFUNCTION(BlueprintCallable)
	void InitializeGlobalInventory();
	
	UFUNCTION(BlueprintCallable)
	void ClearContainerInventories();
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category="GlobalInventoryManager|Components")
	USceneComponent* DefaultSceneRoot = nullptr;

	/** This will contain the list of inventories in the game  */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, BlueprintReadWrite, Category="GlobalInventoryManager|Grid")
	TArray<ULyraInventoryManagerComponent*> ContainerInventories;
};
