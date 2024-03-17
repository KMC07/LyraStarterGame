// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsViewAnimationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsViewAnimationSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewAnimationSettings();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings;
class UScriptStruct* FAlsViewAnimationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsViewAnimationSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsViewAnimationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsViewAnimationSettings>()
{
	return FAlsViewAnimationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookTowardsCameraRotationInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookTowardsCameraRotationInterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookTowardsInputYawAngleInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookTowardsInputYawAngleInterpolationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsViewAnimationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsViewAnimationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsCameraRotationInterpolationSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsViewAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsCameraRotationInterpolationSpeed = { "LookTowardsCameraRotationInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationSettings, LookTowardsCameraRotationInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsCameraRotationInterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsCameraRotationInterpolationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsInputYawAngleInterpolationSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsViewAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsInputYawAngleInterpolationSpeed = { "LookTowardsInputYawAngleInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewAnimationSettings, LookTowardsInputYawAngleInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsInputYawAngleInterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsInputYawAngleInterpolationSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsCameraRotationInterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewProp_LookTowardsInputYawAngleInterpolationSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsViewAnimationSettings",
		Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::PropPointers),
		sizeof(FAlsViewAnimationSettings),
		alignof(FAlsViewAnimationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsViewAnimationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewAnimationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewAnimationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsViewAnimationSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsViewAnimationSettings_Statics::NewStructOps, TEXT("AlsViewAnimationSettings"), &Z_Registration_Info_UScriptStruct_AlsViewAnimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsViewAnimationSettings), 3617564447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewAnimationSettings_h_3704387471(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewAnimationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsViewAnimationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
