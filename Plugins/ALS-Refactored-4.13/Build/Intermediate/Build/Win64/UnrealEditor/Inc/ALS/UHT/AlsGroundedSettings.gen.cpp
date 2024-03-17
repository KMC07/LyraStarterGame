// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsGroundedSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsGroundedSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGroundedSettings();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsGroundedSettings;
class UScriptStruct* FAlsGroundedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsGroundedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsGroundedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsGroundedSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsGroundedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsGroundedSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsGroundedSettings>()
{
	return FAlsGroundedSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedRunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedRunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedSprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedSprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedCrouchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedCrouchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlendAmountWalkCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrideBlendAmountWalkCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlendAmountRunCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StrideBlendAmountRunCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationYawOffsetForwardCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationYawOffsetForwardCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationYawOffsetBackwardCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationYawOffsetBackwardCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationYawOffsetLeftCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationYawOffsetLeftCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationYawOffsetRightCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationYawOffsetRightCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlendInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBlendInterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotActivationSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotActivationSpeedThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsGroundedSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedWalkSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedWalkSpeed = { "AnimatedWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, AnimatedWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedWalkSpeed_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedRunSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedRunSpeed = { "AnimatedRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, AnimatedRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedRunSpeed_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedRunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedSprintSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedSprintSpeed = { "AnimatedSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, AnimatedSprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedSprintSpeed_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedSprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedCrouchSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedCrouchSpeed = { "AnimatedCrouchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, AnimatedCrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedCrouchSpeed_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedCrouchSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountWalkCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Movement speed to stride blend amount curve.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
		{ "ToolTip", "Movement speed to stride blend amount curve." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountWalkCurve = { "StrideBlendAmountWalkCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, StrideBlendAmountWalkCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountWalkCurve_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountWalkCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountRunCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Movement speed to stride blend amount curve.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
		{ "ToolTip", "Movement speed to stride blend amount curve." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountRunCurve = { "StrideBlendAmountRunCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, StrideBlendAmountRunCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountRunCurve_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountRunCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetForwardCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetForwardCurve = { "RotationYawOffsetForwardCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, RotationYawOffsetForwardCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetForwardCurve_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetForwardCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetBackwardCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetBackwardCurve = { "RotationYawOffsetBackwardCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, RotationYawOffsetBackwardCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetBackwardCurve_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetBackwardCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetLeftCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetLeftCurve = { "RotationYawOffsetLeftCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, RotationYawOffsetLeftCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetLeftCurve_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetLeftCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetRightCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetRightCurve = { "RotationYawOffsetRightCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, RotationYawOffsetRightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetRightCurve_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetRightCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_VelocityBlendInterpolationSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_VelocityBlendInterpolationSpeed = { "VelocityBlendInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, VelocityBlendInterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_VelocityBlendInterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_VelocityBlendInterpolationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_PivotActivationSpeedThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsGroundedSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_PivotActivationSpeedThreshold = { "PivotActivationSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedSettings, PivotActivationSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_PivotActivationSpeedThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_PivotActivationSpeedThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedRunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedSprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_AnimatedCrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountWalkCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_StrideBlendAmountRunCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetForwardCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetBackwardCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetLeftCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_RotationYawOffsetRightCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_VelocityBlendInterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewProp_PivotActivationSpeedThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsGroundedSettings",
		Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::PropPointers),
		sizeof(FAlsGroundedSettings),
		alignof(FAlsGroundedSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsGroundedSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsGroundedSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsGroundedSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsGroundedSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGroundedSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGroundedSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsGroundedSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsGroundedSettings_Statics::NewStructOps, TEXT("AlsGroundedSettings"), &Z_Registration_Info_UScriptStruct_AlsGroundedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsGroundedSettings), 35717391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGroundedSettings_h_358371362(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGroundedSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsGroundedSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
