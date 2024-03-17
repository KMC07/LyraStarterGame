// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsMantlingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsMantlingState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsMantlingState;
class UScriptStruct* FAlsMantlingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsMantlingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsMantlingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsMantlingState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsMantlingState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsMantlingState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsMantlingState>()
{
	return FAlsMantlingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsMantlingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionSourceId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RootMotionSourceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsMantlingState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsMantlingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsMantlingState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingState_Statics::NewProp_RootMotionSourceId_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMantlingState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAlsMantlingState_Statics::NewProp_RootMotionSourceId = { "RootMotionSourceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingState, RootMotionSourceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingState_Statics::NewProp_RootMotionSourceId_MetaData), Z_Construct_UScriptStruct_FAlsMantlingState_Statics::NewProp_RootMotionSourceId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsMantlingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingState_Statics::NewProp_RootMotionSourceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsMantlingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsMantlingState",
		Z_Construct_UScriptStruct_FAlsMantlingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingState_Statics::PropPointers),
		sizeof(FAlsMantlingState),
		alignof(FAlsMantlingState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsMantlingState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsMantlingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsMantlingState.InnerSingleton, Z_Construct_UScriptStruct_FAlsMantlingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsMantlingState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMantlingState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMantlingState_h_Statics::ScriptStructInfo[] = {
		{ FAlsMantlingState::StaticStruct, Z_Construct_UScriptStruct_FAlsMantlingState_Statics::NewStructOps, TEXT("AlsMantlingState"), &Z_Registration_Info_UScriptStruct_AlsMantlingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsMantlingState), 4274059339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMantlingState_h_727388942(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMantlingState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMantlingState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
