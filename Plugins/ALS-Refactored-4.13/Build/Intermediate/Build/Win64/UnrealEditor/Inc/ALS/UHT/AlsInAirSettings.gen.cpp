// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsInAirSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsInAirSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsInAirSettings();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsInAirSettings;
class UScriptStruct* FAlsInAirSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsInAirSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsInAirSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsInAirSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsInAirSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsInAirSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsInAirSettings>()
{
	return FAlsInAirSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsInAirSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanAmountCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeanAmountCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundPredictionAmountCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroundPredictionAmountCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundPredictionSweepChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundPredictionSweepChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundPredictionResponseChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundPredictionResponseChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundPredictionResponseChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundPredictionSweepResponses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundPredictionSweepResponses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsInAirSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsInAirSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_LeanAmountCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Vertical velocity to lean amount curve.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsInAirSettings.h" },
		{ "ToolTip", "Vertical velocity to lean amount curve." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_LeanAmountCurve = { "LeanAmountCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirSettings, LeanAmountCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_LeanAmountCurve_MetaData), Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_LeanAmountCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionAmountCurve_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Ground prediction sweep hit time to ground prediction amount curve.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsInAirSettings.h" },
		{ "ToolTip", "Ground prediction sweep hit time to ground prediction amount curve." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionAmountCurve = { "GroundPredictionAmountCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirSettings, GroundPredictionAmountCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionAmountCurve_MetaData), Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionAmountCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepChannel_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsInAirSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepChannel = { "GroundPredictionSweepChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirSettings, GroundPredictionSweepChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepChannel_MetaData), Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionResponseChannels_Inner = { "GroundPredictionResponseChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionResponseChannels_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsInAirSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionResponseChannels = { "GroundPredictionResponseChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirSettings, GroundPredictionResponseChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionResponseChannels_MetaData), Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionResponseChannels_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepResponses_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsInAirSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepResponses = { "GroundPredictionSweepResponses", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsInAirSettings, GroundPredictionSweepResponses), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepResponses_MetaData), Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepResponses_MetaData) }; // 2352989251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_LeanAmountCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionAmountCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionResponseChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionResponseChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewProp_GroundPredictionSweepResponses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsInAirSettings",
		Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::PropPointers),
		sizeof(FAlsInAirSettings),
		alignof(FAlsInAirSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsInAirSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsInAirSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsInAirSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsInAirSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsInAirSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsInAirSettings_Statics::NewStructOps, TEXT("AlsInAirSettings"), &Z_Registration_Info_UScriptStruct_AlsInAirSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsInAirSettings), 2900126728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirSettings_h_2750109439(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
