// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsViewSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsViewSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewSettings();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsViewSettings;
class UScriptStruct* FAlsViewSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsViewSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsViewSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsViewSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsViewSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsViewSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsViewSettings>()
{
	return FAlsViewSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsViewSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNetworkSmoothing_MetaData[];
#endif
		static void NewProp_bEnableNetworkSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNetworkSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableListenServerNetworkSmoothing_MetaData[];
#endif
		static void NewProp_bEnableListenServerNetworkSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableListenServerNetworkSmoothing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsViewSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsViewSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableNetworkSmoothing_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsViewSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableNetworkSmoothing_SetBit(void* Obj)
	{
		((FAlsViewSettings*)Obj)->bEnableNetworkSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableNetworkSmoothing = { "bEnableNetworkSmoothing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsViewSettings), &Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableNetworkSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableNetworkSmoothing_MetaData), Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableNetworkSmoothing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableListenServerNetworkSmoothing_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsViewSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableListenServerNetworkSmoothing_SetBit(void* Obj)
	{
		((FAlsViewSettings*)Obj)->bEnableListenServerNetworkSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableListenServerNetworkSmoothing = { "bEnableListenServerNetworkSmoothing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsViewSettings), &Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableListenServerNetworkSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableListenServerNetworkSmoothing_MetaData), Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableListenServerNetworkSmoothing_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsViewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableNetworkSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewProp_bEnableListenServerNetworkSmoothing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsViewSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsViewSettings",
		Z_Construct_UScriptStruct_FAlsViewSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewSettings_Statics::PropPointers),
		sizeof(FAlsViewSettings),
		alignof(FAlsViewSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsViewSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsViewSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsViewSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsViewSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsViewSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsViewSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsViewSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsViewSettings_Statics::NewStructOps, TEXT("AlsViewSettings"), &Z_Registration_Info_UScriptStruct_AlsViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsViewSettings), 1300689657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewSettings_h_2643727700(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
