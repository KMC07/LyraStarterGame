// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsRotateInPlaceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRotateInPlaceSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings;
class UScriptStruct* FAlsRotateInPlaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRotateInPlaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRotateInPlaceSettings>()
{
	return FAlsRotateInPlaceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewYawAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewYawAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceViewYawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceViewYawSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableFootLock_MetaData[];
#endif
		static void NewProp_bDisableFootLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableFootLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLockInhibitionViewYawAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLockInhibitionViewYawAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLockInhibitionViewYawSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLockInhibitionViewYawSpeedThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsRotateInPlaceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRotateInPlaceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsRotateInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold = { "ViewYawAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotateInPlaceSettings, ViewYawAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ReferenceViewYawSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsRotateInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ReferenceViewYawSpeed = { "ReferenceViewYawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotateInPlaceSettings, ReferenceViewYawSpeed), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ReferenceViewYawSpeed_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ReferenceViewYawSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsRotateInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotateInPlaceSettings, PlayRate), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_bDisableFootLock_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRotateInPlaceSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_bDisableFootLock_SetBit(void* Obj)
	{
		((FAlsRotateInPlaceSettings*)Obj)->bDisableFootLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_bDisableFootLock = { "bDisableFootLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRotateInPlaceSettings), &Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_bDisableFootLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_bDisableFootLock_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_bDisableFootLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawAngleThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bDisableFootLock" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsRotateInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawAngleThreshold = { "FootLockInhibitionViewYawAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotateInPlaceSettings, FootLockInhibitionViewYawAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawAngleThreshold_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawAngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawSpeedThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bDisableFootLock" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsRotateInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawSpeedThreshold = { "FootLockInhibitionViewYawSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotateInPlaceSettings, FootLockInhibitionViewYawSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawSpeedThreshold_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawSpeedThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_ReferenceViewYawSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_bDisableFootLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewProp_FootLockInhibitionViewYawSpeedThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsRotateInPlaceSettings",
		Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::PropPointers),
		sizeof(FAlsRotateInPlaceSettings),
		alignof(FAlsRotateInPlaceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRotateInPlaceSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRotateInPlaceSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsRotateInPlaceSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings_Statics::NewStructOps, TEXT("AlsRotateInPlaceSettings"), &Z_Registration_Info_UScriptStruct_AlsRotateInPlaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRotateInPlaceSettings), 3681192714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRotateInPlaceSettings_h_4139928918(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRotateInPlaceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRotateInPlaceSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
