// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsInAirState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsInAirState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsInAirState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsInAirState;
class UScriptStruct* FAlsInAirState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsInAirState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsInAirState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsInAirState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsInAirState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsInAirState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsInAirState>()
{
	return FAlsInAirState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsInAirState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpRequested_MetaData[];
#endif
		static void NewProp_bJumpRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumped_MetaData[];
#endif
		static void NewProp_bJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundPredictionAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundPredictionAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsInAirState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsInAirState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_VerticalVelocity_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/State/AlsInAirState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_VerticalVelocity = { "VerticalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirState, VerticalVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_VerticalVelocity_MetaData), Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_VerticalVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumpRequested_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsInAirState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumpRequested_SetBit(void* Obj)
	{
		((FAlsInAirState*)Obj)->bJumpRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumpRequested = { "bJumpRequested", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsInAirState), &Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumpRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumpRequested_MetaData), Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumpRequested_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumped_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsInAirState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumped_SetBit(void* Obj)
	{
		((FAlsInAirState*)Obj)->bJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumped = { "bJumped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsInAirState), &Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumped_MetaData), Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumped_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_JumpPlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsInAirState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_JumpPlayRate = { "JumpPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirState, JumpPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_JumpPlayRate_MetaData), Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_JumpPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_GroundPredictionAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsInAirState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_GroundPredictionAmount = { "GroundPredictionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirState, GroundPredictionAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_GroundPredictionAmount_MetaData), Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_GroundPredictionAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsInAirState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_VerticalVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumpRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_bJumped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_JumpPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewProp_GroundPredictionAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsInAirState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsInAirState",
		Z_Construct_UScriptStruct_FAlsInAirState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::PropPointers),
		sizeof(FAlsInAirState),
		alignof(FAlsInAirState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsInAirState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsInAirState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsInAirState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsInAirState.InnerSingleton, Z_Construct_UScriptStruct_FAlsInAirState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsInAirState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsInAirState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsInAirState_h_Statics::ScriptStructInfo[] = {
		{ FAlsInAirState::StaticStruct, Z_Construct_UScriptStruct_FAlsInAirState_Statics::NewStructOps, TEXT("AlsInAirState"), &Z_Registration_Info_UScriptStruct_AlsInAirState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsInAirState), 2262271510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsInAirState_h_1730010046(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsInAirState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsInAirState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
