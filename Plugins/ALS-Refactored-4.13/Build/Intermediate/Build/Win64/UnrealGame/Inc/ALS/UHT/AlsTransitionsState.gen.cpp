// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsTransitionsState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsTransitionsState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsTransitionsState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsTransitionsState;
class UScriptStruct* FAlsTransitionsState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsTransitionsState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsTransitionsState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsTransitionsState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsTransitionsState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsTransitionsState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsTransitionsState>()
{
	return FAlsTransitionsState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsTransitionsState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransitionsAllowed_MetaData[];
#endif
		static void NewProp_bTransitionsAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransitionsAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTransitionsFrameDelay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DynamicTransitionsFrameDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedTransitionAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueuedTransitionAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedTransitionBlendInDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueuedTransitionBlendInDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedTransitionBlendOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueuedTransitionBlendOutDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedTransitionPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueuedTransitionPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedTransitionStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueuedTransitionStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopTransitionsQueued_MetaData[];
#endif
		static void NewProp_bStopTransitionsQueued_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopTransitionsQueued;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedStopTransitionsBlendOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueuedStopTransitionsBlendOutDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsTransitionsState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bTransitionsAllowed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bTransitionsAllowed_SetBit(void* Obj)
	{
		((FAlsTransitionsState*)Obj)->bTransitionsAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bTransitionsAllowed = { "bTransitionsAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsTransitionsState), &Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bTransitionsAllowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bTransitionsAllowed_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bTransitionsAllowed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_DynamicTransitionsFrameDelay_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_DynamicTransitionsFrameDelay = { "DynamicTransitionsFrameDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsState, DynamicTransitionsFrameDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_DynamicTransitionsFrameDelay_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_DynamicTransitionsFrameDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionAnimation = { "QueuedTransitionAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsState, QueuedTransitionAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendInDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendInDuration = { "QueuedTransitionBlendInDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsState, QueuedTransitionBlendInDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendInDuration_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendInDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendOutDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendOutDuration = { "QueuedTransitionBlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsState, QueuedTransitionBlendOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendOutDuration_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendOutDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionPlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionPlayRate = { "QueuedTransitionPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsState, QueuedTransitionPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionPlayRate_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionStartTime_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionStartTime = { "QueuedTransitionStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsState, QueuedTransitionStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionStartTime_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bStopTransitionsQueued_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bStopTransitionsQueued_SetBit(void* Obj)
	{
		((FAlsTransitionsState*)Obj)->bStopTransitionsQueued = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bStopTransitionsQueued = { "bStopTransitionsQueued", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsTransitionsState), &Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bStopTransitionsQueued_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bStopTransitionsQueued_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bStopTransitionsQueued_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedStopTransitionsBlendOutDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsTransitionsState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedStopTransitionsBlendOutDuration = { "QueuedStopTransitionsBlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsState, QueuedStopTransitionsBlendOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedStopTransitionsBlendOutDuration_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedStopTransitionsBlendOutDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bTransitionsAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_DynamicTransitionsFrameDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionBlendOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedTransitionStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_bStopTransitionsQueued,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewProp_QueuedStopTransitionsBlendOutDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsTransitionsState",
		Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::PropPointers),
		sizeof(FAlsTransitionsState),
		alignof(FAlsTransitionsState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsTransitionsState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsTransitionsState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsTransitionsState.InnerSingleton, Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsTransitionsState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTransitionsState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTransitionsState_h_Statics::ScriptStructInfo[] = {
		{ FAlsTransitionsState::StaticStruct, Z_Construct_UScriptStruct_FAlsTransitionsState_Statics::NewStructOps, TEXT("AlsTransitionsState"), &Z_Registration_Info_UScriptStruct_AlsTransitionsState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsTransitionsState), 3116729001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTransitionsState_h_3367701800(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTransitionsState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTransitionsState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
