// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsViewAnimationState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsViewAnimationState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLookState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsSpineRotationState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewAnimationState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsLookState;
class UScriptStruct* FAlsLookState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsLookState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsLookState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsLookState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsLookState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsLookState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsLookState>()
{
	return FAlsLookState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsLookState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializationRequired_MetaData[];
#endif
		static void NewProp_bReinitializationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawForwardAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawForwardAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawLeftAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawLeftAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRightAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRightAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsLookState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsLookState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_bReinitializationRequired_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_bReinitializationRequired_SetBit(void* Obj)
	{
		((FAlsLookState*)Obj)->bReinitializationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_bReinitializationRequired = { "bReinitializationRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLookState), &Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_bReinitializationRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_bReinitializationRequired_MetaData), Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_bReinitializationRequired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_WorldYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_WorldYawAngle = { "WorldYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLookState, WorldYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_WorldYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_WorldYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawAngle = { "YawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLookState, YawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_PitchAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "90" },
		{ "ClampMin", "-90" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_PitchAngle = { "PitchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLookState, PitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_PitchAngle_MetaData), Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_PitchAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawForwardAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawForwardAmount = { "YawForwardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLookState, YawForwardAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawForwardAmount_MetaData), Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawForwardAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawLeftAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "0.500000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawLeftAmount = { "YawLeftAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLookState, YawLeftAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawLeftAmount_MetaData), Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawLeftAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawRightAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.500000" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawRightAmount = { "YawRightAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLookState, YawRightAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawRightAmount_MetaData), Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawRightAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsLookState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_bReinitializationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_WorldYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_PitchAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawForwardAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawLeftAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLookState_Statics::NewProp_YawRightAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsLookState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsLookState",
		Z_Construct_UScriptStruct_FAlsLookState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::PropPointers),
		sizeof(FAlsLookState),
		alignof(FAlsLookState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsLookState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLookState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsLookState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsLookState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsLookState.InnerSingleton, Z_Construct_UScriptStruct_FAlsLookState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsLookState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsSpineRotationState;
class UScriptStruct* FAlsSpineRotationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsSpineRotationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsSpineRotationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsSpineRotationState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsSpineRotationState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsSpineRotationState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsSpineRotationState>()
{
	return FAlsSpineRotationState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpineRotationAllowed_MetaData[];
#endif
		static void NewProp_bSpineRotationAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpineRotationAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsSpineRotationState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_bSpineRotationAllowed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_bSpineRotationAllowed_SetBit(void* Obj)
	{
		((FAlsSpineRotationState*)Obj)->bSpineRotationAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_bSpineRotationAllowed = { "bSpineRotationAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsSpineRotationState), &Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_bSpineRotationAllowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_bSpineRotationAllowed_MetaData), Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_bSpineRotationAllowed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_SpineAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_SpineAmount = { "SpineAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpineRotationState, SpineAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_SpineAmount_MetaData), Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_SpineAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_InitialYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_InitialYawAngle = { "InitialYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpineRotationState, InitialYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_InitialYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_InitialYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_TargetYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_TargetYawAngle = { "TargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpineRotationState, TargetYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_TargetYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_TargetYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_CurrentYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_CurrentYawAngle = { "CurrentYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpineRotationState, CurrentYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_CurrentYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_CurrentYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_YawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_YawAngle = { "YawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpineRotationState, YawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_YawAngle_MetaData), Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_YawAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_bSpineRotationAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_SpineAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_InitialYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_TargetYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_CurrentYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewProp_YawAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsSpineRotationState",
		Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::PropPointers),
		sizeof(FAlsSpineRotationState),
		alignof(FAlsSpineRotationState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsSpineRotationState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsSpineRotationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsSpineRotationState.InnerSingleton, Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsSpineRotationState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsViewAnimationState;
class UScriptStruct* FAlsViewAnimationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsViewAnimationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsViewAnimationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsViewAnimationState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsViewAnimationState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsViewAnimationState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsViewAnimationState>()
{
	return FAlsViewAnimationState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Look_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Look;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsViewAnimationState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawAngle = { "YawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, YawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawAngle_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, YawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawSpeed_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "90" },
		{ "ClampMin", "-90" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAngle = { "PitchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, PitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAngle_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAmount = { "PitchAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, PitchAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAmount_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_LookAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_LookAmount = { "LookAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, LookAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_LookAmount_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_LookAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_SpineRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_SpineRotation = { "SpineRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, SpineRotation), Z_Construct_UScriptStruct_FAlsSpineRotationState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_SpineRotation_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_SpineRotation_MetaData) }; // 2731071182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Look_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Look = { "Look", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationState, Look), Z_Construct_UScriptStruct_FAlsLookState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Look_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Look_MetaData) }; // 639674524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_YawSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_PitchAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_LookAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_SpineRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewProp_Look,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsViewAnimationState",
		Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::PropPointers),
		sizeof(FAlsViewAnimationState),
		alignof(FAlsViewAnimationState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsViewAnimationState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsViewAnimationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsViewAnimationState.InnerSingleton, Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsViewAnimationState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewAnimationState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewAnimationState_h_Statics::ScriptStructInfo[] = {
		{ FAlsLookState::StaticStruct, Z_Construct_UScriptStruct_FAlsLookState_Statics::NewStructOps, TEXT("AlsLookState"), &Z_Registration_Info_UScriptStruct_AlsLookState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsLookState), 639674524U) },
		{ FAlsSpineRotationState::StaticStruct, Z_Construct_UScriptStruct_FAlsSpineRotationState_Statics::NewStructOps, TEXT("AlsSpineRotationState"), &Z_Registration_Info_UScriptStruct_AlsSpineRotationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsSpineRotationState), 2731071182U) },
		{ FAlsViewAnimationState::StaticStruct, Z_Construct_UScriptStruct_FAlsViewAnimationState_Statics::NewStructOps, TEXT("AlsViewAnimationState"), &Z_Registration_Info_UScriptStruct_AlsViewAnimationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsViewAnimationState), 3168651768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewAnimationState_h_1719355821(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewAnimationState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewAnimationState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
