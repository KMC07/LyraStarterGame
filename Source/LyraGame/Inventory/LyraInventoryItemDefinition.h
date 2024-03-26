// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "LyraInventoryItemDefinition.generated.h"

template <typename T> class TSubclassOf;

class ULyraInventoryItemInstance;
struct FFrame;

//////////////////////////////////////////////////////////////////////

// Represents a fragment of an item definition (Only store static data)
UCLASS(DefaultToInstanced, EditInlineNew, Abstract)
class LYRAGAME_API ULyraInventoryItemFragment : public UObject
{
	GENERATED_BODY()

public:
	virtual void OnInstanceCreated(ULyraInventoryItemInstance* Instance) const {}
	
	virtual ULyraInventoryItemFragmentPayload* CreateNewTransientFragment(UObject* NewOwner) const { return nullptr; }
};

// This object is used to store transient data from a fragment
UCLASS(DefaultToInstanced, Abstract)
class LYRAGAME_API ULyraInventoryItemFragmentPayload : public UObject
{
	GENERATED_BODY()

public:
	// TODO decide if TMap is not worth the hassle then keep reference of fragment inside
	// the Payload, so a for loop over a TArray can be used to find the fragment creator
	// for specific fragment logic
	
	virtual void SerializePayload(FArchive& Ar) {}

	virtual void DeserializePayload(FArchive& Ar) {}

	virtual void DestroyTransientFragment() {}
};

//////////////////////////////////////////////////////////////////////


/**
 * ULyraInventoryItemDefinition
 */
UCLASS(Blueprintable, Const, Abstract)
class LYRAGAME_API ULyraInventoryItemDefinition : public UObject
{
	GENERATED_BODY()

public:
	ULyraInventoryItemDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display)
	FText DisplayName;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display, Instanced)
	TArray<TObjectPtr<ULyraInventoryItemFragment>> Fragments;

public:
	const ULyraInventoryItemFragment* FindFragmentByClass(TSubclassOf<ULyraInventoryItemFragment> FragmentClass) const;

	template<typename T>
	const T* FindFragmentByClass() const
	{
		static_assert(TIsDerivedFrom<T, ULyraInventoryItemFragment>::Value, "T must be derived from ULyraInventoryItemFragment");
		return Cast<const T>(FindFragmentByClassInternal(T::StaticClass()));
	}
	
private:
	const ULyraInventoryItemFragment* FindFragmentByClassInternal(const UClass* FragmentClass) const;
};

//@TODO: Make into a subsystem instead?
UCLASS()
class UInventoryFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta=(DeterminesOutputType=FragmentClass))
	static const ULyraInventoryItemFragment* FindItemDefinitionFragment(TSubclassOf<ULyraInventoryItemDefinition> ItemDef, TSubclassOf<ULyraInventoryItemFragment> FragmentClass);
};
