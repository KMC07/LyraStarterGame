// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsRagdollingAnimationState.h"
#include "../../Source/Runtime/Engine/Public/Animation/PoseSnapshot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRagdollingAnimationState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingAnimationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState;
class UScriptStruct* FAlsRagdollingAnimationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRagdollingAnimationState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRagdollingAnimationState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRagdollingAnimationState>()
{
	return FAlsRagdollingAnimationState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalRagdollPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalRagdollPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlailPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlailPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingAnimationState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRagdollingAnimationState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FinalRagdollPose_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FinalRagdollPose = { "FinalRagdollPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingAnimationState, FinalRagdollPose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FinalRagdollPose_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FinalRagdollPose_MetaData) }; // 1480016275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FlailPlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsRagdollingAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FlailPlayRate = { "FlailPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingAnimationState, FlailPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FlailPlayRate_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FlailPlayRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FinalRagdollPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewProp_FlailPlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsRagdollingAnimationState",
		Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::PropPointers),
		sizeof(FAlsRagdollingAnimationState),
		alignof(FAlsRagdollingAnimationState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingAnimationState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState.InnerSingleton, Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingAnimationState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingAnimationState_h_Statics::ScriptStructInfo[] = {
		{ FAlsRagdollingAnimationState::StaticStruct, Z_Construct_UScriptStruct_FAlsRagdollingAnimationState_Statics::NewStructOps, TEXT("AlsRagdollingAnimationState"), &Z_Registration_Info_UScriptStruct_AlsRagdollingAnimationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRagdollingAnimationState), 3109039412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingAnimationState_h_1494103145(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingAnimationState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRagdollingAnimationState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
