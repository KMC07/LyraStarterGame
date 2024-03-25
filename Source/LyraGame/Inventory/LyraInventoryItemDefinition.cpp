// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryItemDefinition.h"

#include "InventoryFragment_InventoryIcon.h"
#include "InventoryFragment_SetStats.h"
#include "Templates/SubclassOf.h"
#include "UObject/ObjectPtr.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraInventoryItemDefinition)

//////////////////////////////////////////////////////////////////////
// ULyraInventoryItemDefinition

ULyraInventoryItemDefinition::ULyraInventoryItemDefinition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}

template<typename T>
const T* ULyraInventoryItemDefinition::FindFragmentByClass() const
{
	static_assert(TIsDerivedFrom<T, ULyraInventoryItemFragment>::Value, "T must be derived from ULyraInventoryItemFragment");

	for (ULyraInventoryItemFragment* Fragment : Fragments)
	{
		if (Fragment && Fragment->IsA(T::StaticClass()))
		{
			return Cast<T>(Fragment);
		}
	}

	return nullptr;
}
template const UInventoryFragment_InventoryIcon* ULyraInventoryItemDefinition::FindFragmentByClass<UInventoryFragment_InventoryIcon>() const;
template const UInventoryFragment_SetStats* ULyraInventoryItemDefinition::FindFragmentByClass<UInventoryFragment_SetStats>() const;

const ULyraInventoryItemFragment* ULyraInventoryItemDefinition::FindFragmentByClass(TSubclassOf<ULyraInventoryItemFragment> FragmentClass) const
{
	if (FragmentClass != nullptr)
	{
		for (ULyraInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->IsA(FragmentClass))
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}

//////////////////////////////////////////////////////////////////////
// ULyraInventoryItemDefinition

const ULyraInventoryItemFragment* UInventoryFunctionLibrary::FindItemDefinitionFragment(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, TSubclassOf<ULyraInventoryItemFragment> FragmentClass)
{
	if ((ItemDef != nullptr) && (FragmentClass != nullptr))
	{
		return GetDefault<ULyraInventoryItemDefinition>(ItemDef)->FindFragmentByClass(FragmentClass);
	}
	return nullptr;
}

