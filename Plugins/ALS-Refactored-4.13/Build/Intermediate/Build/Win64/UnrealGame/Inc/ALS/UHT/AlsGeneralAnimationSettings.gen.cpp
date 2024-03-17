// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsGeneralAnimationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsGeneralAnimationSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings;
class UScriptStruct* FAlsGeneralAnimationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsGeneralAnimationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsGeneralAnimationSettings>()
{
	return FAlsGeneralAnimationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHandIkBones_MetaData[];
#endif
		static void NewProp_bUseHandIkBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHandIkBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFootIkBones_MetaData[];
#endif
		static void NewProp_bUseFootIkBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFootIkBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingSmoothSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingSmoothSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeanInterpolationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsGeneralAnimationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsGeneralAnimationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseHandIkBones_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsGeneralAnimationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseHandIkBones_SetBit(void* Obj)
	{
		((FAlsGeneralAnimationSettings*)Obj)->bUseHandIkBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseHandIkBones = { "bUseHandIkBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsGeneralAnimationSettings), &Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseHandIkBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseHandIkBones_MetaData), Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseHandIkBones_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseFootIkBones_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsGeneralAnimationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseFootIkBones_SetBit(void* Obj)
	{
		((FAlsGeneralAnimationSettings*)Obj)->bUseFootIkBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseFootIkBones = { "bUseFootIkBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsGeneralAnimationSettings), &Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseFootIkBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseFootIkBones_MetaData), Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseFootIkBones_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_MovingSmoothSpeedThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsGeneralAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_MovingSmoothSpeedThreshold = { "MovingSmoothSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralAnimationSettings, MovingSmoothSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_MovingSmoothSpeedThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_MovingSmoothSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_LeanInterpolationSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsGeneralAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_LeanInterpolationSpeed = { "LeanInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralAnimationSettings, LeanInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_LeanInterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_LeanInterpolationSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseHandIkBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_bUseFootIkBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_MovingSmoothSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewProp_LeanInterpolationSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsGeneralAnimationSettings",
		Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::PropPointers),
		sizeof(FAlsGeneralAnimationSettings),
		alignof(FAlsGeneralAnimationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGeneralAnimationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGeneralAnimationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsGeneralAnimationSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings_Statics::NewStructOps, TEXT("AlsGeneralAnimationSettings"), &Z_Registration_Info_UScriptStruct_AlsGeneralAnimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsGeneralAnimationSettings), 1882054367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGeneralAnimationSettings_h_830277361(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGeneralAnimationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGeneralAnimationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
