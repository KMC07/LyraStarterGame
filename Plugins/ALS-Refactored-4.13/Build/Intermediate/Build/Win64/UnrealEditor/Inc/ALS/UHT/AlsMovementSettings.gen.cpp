// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsMovementSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsMovementSettings() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsMovementSettings();
	ALS_API UClass* Z_Construct_UClass_UAlsMovementSettings_NoRegister();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementGaitSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementStanceSettings();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings;
class UScriptStruct* FAlsMovementGaitSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsMovementGaitSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsMovementGaitSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsMovementGaitSettings>()
{
	return FAlsMovementGaitSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationAndDecelerationAndGroundFrictionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AccelerationAndDecelerationAndGroundFrictionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpolationSpeedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationInterpolationSpeedCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsMovementGaitSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementGaitSettings, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_WalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementGaitSettings, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RunSpeed_MetaData), Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementGaitSettings, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_SprintSpeed_MetaData), Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_SprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_AccelerationAndDecelerationAndGroundFrictionCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Gait amount to acceleration, deceleration, and ground friction curve.\n// Gait amount ranges from 0 to 3, where 0 is stopped, 1 is walking, 2 is running, and 3 is sprinting.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
		{ "ToolTip", "Gait amount to acceleration, deceleration, and ground friction curve.\nGait amount ranges from 0 to 3, where 0 is stopped, 1 is walking, 2 is running, and 3 is sprinting." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_AccelerationAndDecelerationAndGroundFrictionCurve = { "AccelerationAndDecelerationAndGroundFrictionCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementGaitSettings, AccelerationAndDecelerationAndGroundFrictionCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_AccelerationAndDecelerationAndGroundFrictionCurve_MetaData), Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_AccelerationAndDecelerationAndGroundFrictionCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RotationInterpolationSpeedCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Gait amount to rotation interpolation speed curve.\n// Gait amount ranges from 0 to 3, where 0 is stopped, 1 is walking, 2 is running, and 3 is sprinting.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
		{ "ToolTip", "Gait amount to rotation interpolation speed curve.\nGait amount ranges from 0 to 3, where 0 is stopped, 1 is walking, 2 is running, and 3 is sprinting." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RotationInterpolationSpeedCurve = { "RotationInterpolationSpeedCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementGaitSettings, RotationInterpolationSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RotationInterpolationSpeedCurve_MetaData), Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RotationInterpolationSpeedCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_AccelerationAndDecelerationAndGroundFrictionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewProp_RotationInterpolationSpeedCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsMovementGaitSettings",
		Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::PropPointers),
		sizeof(FAlsMovementGaitSettings),
		alignof(FAlsMovementGaitSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementGaitSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings;
class UScriptStruct* FAlsMovementStanceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsMovementStanceSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsMovementStanceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsMovementStanceSettings>()
{
	return FAlsMovementStanceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stances_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Stances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsMovementStanceSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances_ValueProp = { "Stances", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAlsMovementGaitSettings, METADATA_PARAMS(0, nullptr) }; // 939022613
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances_Key_KeyProp = { "Stances_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances = { "Stances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementStanceSettings, Stances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances_MetaData), Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances_MetaData) }; // 2083603574 939022613
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewProp_Stances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsMovementStanceSettings",
		Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::PropPointers),
		sizeof(FAlsMovementStanceSettings),
		alignof(FAlsMovementStanceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementStanceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings.InnerSingleton;
	}
	void UAlsMovementSettings::StaticRegisterNativesUAlsMovementSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsMovementSettings);
	UClass* Z_Construct_UClass_UAlsMovementSettings_NoRegister()
	{
		return UAlsMovementSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlsMovementSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationModes_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationModes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationModes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RotationModes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsMovementSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMovementSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMovementSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Settings/AlsMovementSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes_ValueProp = { "RotationModes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAlsMovementStanceSettings, METADATA_PARAMS(0, nullptr) }; // 2805212233
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes_Key_KeyProp = { "RotationModes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/Settings/AlsMovementSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes = { "RotationModes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsMovementSettings, RotationModes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes_MetaData), Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes_MetaData) }; // 2083603574 2805212233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsMovementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMovementSettings_Statics::NewProp_RotationModes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsMovementSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsMovementSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsMovementSettings_Statics::ClassParams = {
		&UAlsMovementSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsMovementSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMovementSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMovementSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsMovementSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMovementSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsMovementSettings()
	{
		if (!Z_Registration_Info_UClass_UAlsMovementSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsMovementSettings.OuterSingleton, Z_Construct_UClass_UAlsMovementSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsMovementSettings.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsMovementSettings>()
	{
		return UAlsMovementSettings::StaticClass();
	}
	UAlsMovementSettings::UAlsMovementSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsMovementSettings);
	UAlsMovementSettings::~UAlsMovementSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsMovementGaitSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsMovementGaitSettings_Statics::NewStructOps, TEXT("AlsMovementGaitSettings"), &Z_Registration_Info_UScriptStruct_AlsMovementGaitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsMovementGaitSettings), 939022613U) },
		{ FAlsMovementStanceSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsMovementStanceSettings_Statics::NewStructOps, TEXT("AlsMovementStanceSettings"), &Z_Registration_Info_UScriptStruct_AlsMovementStanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsMovementStanceSettings), 2805212233U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsMovementSettings, UAlsMovementSettings::StaticClass, TEXT("UAlsMovementSettings"), &Z_Registration_Info_UClass_UAlsMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsMovementSettings), 2834357401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_1799223813(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMovementSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
