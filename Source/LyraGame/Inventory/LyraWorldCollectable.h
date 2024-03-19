
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "Interaction/IInteractableTarget.h"
#include "Interaction/InteractionOption.h"
#include "Inventory/IPickupable.h"
#include "UObject/UObjectGlobals.h"

#include "LyraWorldCollectable.generated.h"

class UObject;
struct FInteractionQuery;

/** A message when you need to pass a fragment payload through a message */
USTRUCT(BlueprintType)
struct FLyraFragmentPayload
{
	GENERATED_BODY()

	// Multiple fragments payload
	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<class ULyraInventoryItemFragment>> Fragments;

};


/**
 *
 */
UCLASS(Abstract, Blueprintable)
class LYRAGAME_API ALyraWorldCollectable : public AActor, public IInteractableTarget, public IPickupable
{
	GENERATED_BODY()

public:

	ALyraWorldCollectable();

	virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& InteractionBuilder) override;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	virtual FInventoryPickup GetPickupInventory() const override;
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SetPickupInventory(const FInventoryPickup& newInventoryPickup);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
	void OnInteract();



protected:
	UPROPERTY(EditAnywhere)
	FInteractionOption Option;

	UPROPERTY(EditAnywhere)
	FInventoryPickup StaticInventory;


};
