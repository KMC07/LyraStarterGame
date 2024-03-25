// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "GameFramework/Actor.h"

#include "GlobalInventoryManager.generated.h"

class UInventoryFragment_Container;
class ULyraExperienceDefinition;
class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;
class ULyraTetrisInventoryManagerComponent;

USTRUCT(BlueprintType)
struct FGlobalInventoryLoadedMessage
{
    GENERATED_BODY()

public:
    // reference to the Global Inventory Component if needed.
	TObjectPtr<UGlobalInventoryManager> GlobalInventoryManager;
};


UCLASS(Blueprintable)
class TETRISINVENTORYRUNTIME_API UGlobalInventoryManager : public UGameStateComponent
{
	GENERATED_BODY()
	
public:
	
	//~UActorComponent interface
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of UActorComponent interface
	
	void OnExperienceLoaded(const ULyraExperienceDefinition* Experience);
	
	static UGlobalInventoryManager* Get(const UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable)
	ULyraTetrisInventoryManagerComponent* CreateNewInventory(const UInventoryFragment_Container* ContainerFragment);

	UFUNCTION(BlueprintCallable)
	void DestroyItemInventory(ULyraTetrisInventoryManagerComponent* InventoryManagerComponent);
	
private:
	UFUNCTION(BlueprintCallable)
	void InitializeGlobalInventory();
	
	UFUNCTION(BlueprintCallable)
	void ClearContainerInventories();
	
	

protected:
	
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category="GlobalInventoryManager|Components")
	USceneComponent* DefaultSceneRoot = nullptr;

	/** This will contain the list of inventories in the game  */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, BlueprintReadWrite, Category="GlobalInventoryManager|Grid")
	TArray<ULyraTetrisInventoryManagerComponent*> ContainerInventories;
};
