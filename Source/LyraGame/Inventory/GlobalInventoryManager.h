// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "GlobalInventoryManager.generated.h"

class UInventoryFragment_Container;
class ULyraInventoryManagerComponent;
class ULyraInventoryItemDefinition;
class ULyraInventoryItemInstance;

UCLASS(Blueprintable)
class LYRAGAME_API AGlobalInventoryManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGlobalInventoryManager();

	UFUNCTION(BlueprintCallable)
	void InitializeGlobalInventory();

	UFUNCTION(BlueprintCallable)
	ULyraInventoryManagerComponent* CreateNewInventory(UInventoryFragment_Container* ContainerFragment);
	
	UFUNCTION(BlueprintCallable)
	void ClearContainerInventories();
	
	UFUNCTION(BlueprintCallable)
    void DestroyItemInventory(ULyraInventoryManagerComponent* InventoryManagerComponent);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, Category="GlobalInventoryManager|Components")
	USceneComponent* DefaultSceneRoot = nullptr;

	/** This will contain the list of inventories in the game  */
	UPROPERTY(EditDefaultsOnly, AdvancedDisplay, BlueprintReadWrite, Category="GlobalInventoryManager|Grid")
	TArray<ULyraInventoryManagerComponent*> ContainerInventories;

};
