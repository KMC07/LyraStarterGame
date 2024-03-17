// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsRollingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRollingSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRollingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRollingSettings;
class UScriptStruct* FAlsRollingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRollingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRollingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRollingSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRollingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRollingSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRollingSettings>()
{
	return FAlsRollingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRollingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchOnStart_MetaData[];
#endif
		static void NewProp_bCrouchOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToInputOnStart_MetaData[];
#endif
		static void NewProp_bRotateToInputOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToInputOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartRollingOnLand_MetaData[];
#endif
		static void NewProp_bStartRollingOnLand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartRollingOnLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollingOnLandSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollingOnLandSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterruptRollingWhenInAir_MetaData[];
#endif
		static void NewProp_bInterruptRollingWhenInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptRollingWhenInAir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRollingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRollingSettings, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_Montage_MetaData), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bCrouchOnStart_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bCrouchOnStart_SetBit(void* Obj)
	{
		((FAlsRollingSettings*)Obj)->bCrouchOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bCrouchOnStart = { "bCrouchOnStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRollingSettings), &Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bCrouchOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bCrouchOnStart_MetaData), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bCrouchOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bRotateToInputOnStart_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bRotateToInputOnStart_SetBit(void* Obj)
	{
		((FAlsRollingSettings*)Obj)->bRotateToInputOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bRotateToInputOnStart = { "bRotateToInputOnStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRollingSettings), &Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bRotateToInputOnStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bRotateToInputOnStart_MetaData), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bRotateToInputOnStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RotationInterpolationSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RotationInterpolationSpeed = { "RotationInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRollingSettings, RotationInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RotationInterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RotationInterpolationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bStartRollingOnLand_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bStartRollingOnLand_SetBit(void* Obj)
	{
		((FAlsRollingSettings*)Obj)->bStartRollingOnLand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bStartRollingOnLand = { "bStartRollingOnLand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRollingSettings), &Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bStartRollingOnLand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bStartRollingOnLand_MetaData), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bStartRollingOnLand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RollingOnLandSpeedThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "Comment", "// Rolling will start if the character lands with a speed greater than the specified value.\n" },
		{ "EditCondition", "bStartRollingOnLand" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
		{ "ToolTip", "Rolling will start if the character lands with a speed greater than the specified value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RollingOnLandSpeedThreshold = { "RollingOnLandSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRollingSettings, RollingOnLandSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RollingOnLandSpeedThreshold_MetaData), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RollingOnLandSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bInterruptRollingWhenInAir_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRollingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bInterruptRollingWhenInAir_SetBit(void* Obj)
	{
		((FAlsRollingSettings*)Obj)->bInterruptRollingWhenInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bInterruptRollingWhenInAir = { "bInterruptRollingWhenInAir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRollingSettings), &Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bInterruptRollingWhenInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bInterruptRollingWhenInAir_MetaData), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bInterruptRollingWhenInAir_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bCrouchOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bRotateToInputOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RotationInterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bStartRollingOnLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_RollingOnLandSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewProp_bInterruptRollingWhenInAir,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsRollingSettings",
		Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::PropPointers),
		sizeof(FAlsRollingSettings),
		alignof(FAlsRollingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRollingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRollingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRollingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRollingSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRollingSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRollingSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsRollingSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsRollingSettings_Statics::NewStructOps, TEXT("AlsRollingSettings"), &Z_Registration_Info_UScriptStruct_AlsRollingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRollingSettings), 789155686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRollingSettings_h_1020809444(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRollingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRollingSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
