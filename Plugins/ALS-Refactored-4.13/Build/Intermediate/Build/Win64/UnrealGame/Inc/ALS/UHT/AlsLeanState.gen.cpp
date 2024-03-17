// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsLeanState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsLeanState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLeanState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsLeanState;
class UScriptStruct* FAlsLeanState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsLeanState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsLeanState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsLeanState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsLeanState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsLeanState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsLeanState>()
{
	return FAlsLeanState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsLeanState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLeanState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsLeanState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsLeanState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_RightAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/State/AlsLeanState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_RightAmount = { "RightAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLeanState, RightAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_RightAmount_MetaData), Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_RightAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_ForwardAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/State/AlsLeanState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_ForwardAmount = { "ForwardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLeanState, ForwardAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_ForwardAmount_MetaData), Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_ForwardAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsLeanState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_RightAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewProp_ForwardAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsLeanState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsLeanState",
		Z_Construct_UScriptStruct_FAlsLeanState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLeanState_Statics::PropPointers),
		sizeof(FAlsLeanState),
		alignof(FAlsLeanState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLeanState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsLeanState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLeanState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsLeanState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsLeanState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsLeanState.InnerSingleton, Z_Construct_UScriptStruct_FAlsLeanState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsLeanState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLeanState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLeanState_h_Statics::ScriptStructInfo[] = {
		{ FAlsLeanState::StaticStruct, Z_Construct_UScriptStruct_FAlsLeanState_Statics::NewStructOps, TEXT("AlsLeanState"), &Z_Registration_Info_UScriptStruct_AlsLeanState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsLeanState), 2423791723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLeanState_h_2921771752(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLeanState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLeanState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
