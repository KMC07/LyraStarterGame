// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsRagdollingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRagdollingState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRagdollingState;
class UScriptStruct* FAlsRagdollingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRagdollingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRagdollingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRagdollingState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRagdollingState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRagdollingState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRagdollingState>()
{
	return FAlsRagdollingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRagdollingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PullForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PullForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimitFrameTimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpeedLimitFrameTimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRagdollingState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_PullForce_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "N" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_PullForce = { "PullForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingState, PullForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_PullForce_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_PullForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimitFrameTimeRemaining_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimitFrameTimeRemaining = { "SpeedLimitFrameTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingState, SpeedLimitFrameTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimitFrameTimeRemaining_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimitFrameTimeRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimit_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimit = { "SpeedLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingState, SpeedLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimit_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_PullForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimitFrameTimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewProp_SpeedLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsRagdollingState",
		Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::PropPointers),
		sizeof(FAlsRagdollingState),
		alignof(FAlsRagdollingState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRagdollingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRagdollingState.InnerSingleton, Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRagdollingState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingState_h_Statics::ScriptStructInfo[] = {
		{ FAlsRagdollingState::StaticStruct, Z_Construct_UScriptStruct_FAlsRagdollingState_Statics::NewStructOps, TEXT("AlsRagdollingState"), &Z_Registration_Info_UScriptStruct_AlsRagdollingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRagdollingState), 2143258262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingState_h_1976497621(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
