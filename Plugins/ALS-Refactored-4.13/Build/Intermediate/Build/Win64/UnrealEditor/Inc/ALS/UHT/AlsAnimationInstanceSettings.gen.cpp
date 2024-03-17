// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsAnimationInstanceSettings.h"
#include "ALS/Public/Settings/AlsFeetSettings.h"
#include "ALS/Public/Settings/AlsGeneralAnimationSettings.h"
#include "ALS/Public/Settings/AlsGroundedSettings.h"
#include "ALS/Public/Settings/AlsInAirSettings.h"
#include "ALS/Public/Settings/AlsRotateInPlaceSettings.h"
#include "ALS/Public/Settings/AlsTransitionsSettings.h"
#include "ALS/Public/Settings/AlsTurnInPlaceSettings.h"
#include "ALS/Public/Settings/AlsViewAnimationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimationInstanceSettings() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsAnimationInstanceSettings();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimationInstanceSettings_NoRegister();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFeetSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGroundedSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsInAirSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsTransitionsSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewAnimationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	void UAlsAnimationInstanceSettings::StaticRegisterNativesUAlsAnimationInstanceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimationInstanceSettings);
	UClass* Z_Construct_UClass_UAlsAnimationInstanceSettings_NoRegister()
	{
		return UAlsAnimationInstanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_General_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_General;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_View;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grounded_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Feet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateInPlace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotateInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInPlace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurnInPlace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Settings/AlsAnimationInstanceSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_General_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_General = { "General", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, General), Z_Construct_UScriptStruct_FAlsGeneralAnimationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_General_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_General_MetaData) }; // 1882054367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_View_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, View), Z_Construct_UScriptStruct_FAlsViewAnimationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_View_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_View_MetaData) }; // 3617564447
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Grounded_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Grounded = { "Grounded", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, Grounded), Z_Construct_UScriptStruct_FAlsGroundedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Grounded_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Grounded_MetaData) }; // 35717391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_InAir_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_InAir = { "InAir", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, InAir), Z_Construct_UScriptStruct_FAlsInAirSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_InAir_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_InAir_MetaData) }; // 2900126728
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Feet_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, Feet), Z_Construct_UScriptStruct_FAlsFeetSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Feet_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Feet_MetaData) }; // 1474455593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Transitions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, Transitions), Z_Construct_UScriptStruct_FAlsTransitionsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Transitions_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Transitions_MetaData) }; // 3461142928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_RotateInPlace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_RotateInPlace = { "RotateInPlace", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, RotateInPlace), Z_Construct_UScriptStruct_FAlsRotateInPlaceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_RotateInPlace_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_RotateInPlace_MetaData) }; // 3681192714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_TurnInPlace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsAnimationInstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_TurnInPlace = { "TurnInPlace", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstanceSettings, TurnInPlace), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_TurnInPlace_MetaData), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_TurnInPlace_MetaData) }; // 3812518779
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_General,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Grounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_InAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Feet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_RotateInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::NewProp_TurnInPlace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimationInstanceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::ClassParams = {
		&UAlsAnimationInstanceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimationInstanceSettings()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimationInstanceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimationInstanceSettings.OuterSingleton, Z_Construct_UClass_UAlsAnimationInstanceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimationInstanceSettings.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsAnimationInstanceSettings>()
	{
		return UAlsAnimationInstanceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimationInstanceSettings);
	UAlsAnimationInstanceSettings::~UAlsAnimationInstanceSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsAnimationInstanceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsAnimationInstanceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimationInstanceSettings, UAlsAnimationInstanceSettings::StaticClass, TEXT("UAlsAnimationInstanceSettings"), &Z_Registration_Info_UClass_UAlsAnimationInstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimationInstanceSettings), 1114159222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsAnimationInstanceSettings_h_2067141677(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsAnimationInstanceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsAnimationInstanceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
