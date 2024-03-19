// Copyright 2019 Island Dreaming Studios

#include "LyraWorldCollectable.h"
#include "Net/UnrealNetwork.h"

#include "Interaction/IInteractableTarget.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraWorldCollectable)

struct FInteractionQuery;

ALyraWorldCollectable::ALyraWorldCollectable()
{
	bReplicates = true;
}

void ALyraWorldCollectable::GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& InteractionBuilder)
{
	InteractionBuilder.AddInteractionOption(Option);
}

FInventoryPickup ALyraWorldCollectable::GetPickupInventory() const
{
	return StaticInventory;
}

// Allow for a run-time update of the inventory, which is needed to make dropping inventory work
void ALyraWorldCollectable::SetPickupInventory(const FInventoryPickup& newInventoryPickup)
{
	StaticInventory = newInventoryPickup;
}

