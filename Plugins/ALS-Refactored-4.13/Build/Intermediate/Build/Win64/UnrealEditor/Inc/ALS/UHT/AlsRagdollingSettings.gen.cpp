// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsRagdollingSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRagdollingSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRagdollingSettings;
class UScriptStruct* FAlsRagdollingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRagdollingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRagdollingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRagdollingSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRagdollingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRagdollingSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRagdollingSettings>()
{
	return FAlsRagdollingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartRagdollingOnLand_MetaData[];
#endif
		static void NewProp_bStartRagdollingOnLand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartRagdollingOnLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollingOnLandSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollingOnLandSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitInitialRagdollSpeed_MetaData[];
#endif
		static void NewProp_bLimitInitialRagdollSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitInitialRagdollSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundTraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundTraceResponseChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceResponseChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundTraceResponseChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTraceResponses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundTraceResponses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetUpFrontMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GetUpFrontMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetUpBackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GetUpBackMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRagdollingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bStartRagdollingOnLand_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bStartRagdollingOnLand_SetBit(void* Obj)
	{
		((FAlsRagdollingSettings*)Obj)->bStartRagdollingOnLand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bStartRagdollingOnLand = { "bStartRagdollingOnLand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRagdollingSettings), &Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bStartRagdollingOnLand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bStartRagdollingOnLand_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bStartRagdollingOnLand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_RagdollingOnLandSpeedThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "Comment", "// Ragdolling will start if the character lands with a speed greater than the specified value.\n" },
		{ "EditCondition", "bStartRagdollingOnLand" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
		{ "ToolTip", "Ragdolling will start if the character lands with a speed greater than the specified value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_RagdollingOnLandSpeedThreshold = { "RagdollingOnLandSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingSettings, RagdollingOnLandSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_RagdollingOnLandSpeedThreshold_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_RagdollingOnLandSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bLimitInitialRagdollSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// If checked, the ragdoll's speed will be limited by the character's last speed for a few frames\n// after activation. This hack is used to prevent the ragdoll from getting a very high initial speed\n// at unstable FPS, which can be reproduced by jumping and activating the ragdoll at the same time.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
		{ "ToolTip", "If checked, the ragdoll's speed will be limited by the character's last speed for a few frames\nafter activation. This hack is used to prevent the ragdoll from getting a very high initial speed\nat unstable FPS, which can be reproduced by jumping and activating the ragdoll at the same time." },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bLimitInitialRagdollSpeed_SetBit(void* Obj)
	{
		((FAlsRagdollingSettings*)Obj)->bLimitInitialRagdollSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bLimitInitialRagdollSpeed = { "bLimitInitialRagdollSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRagdollingSettings), &Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bLimitInitialRagdollSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bLimitInitialRagdollSpeed_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bLimitInitialRagdollSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceChannel_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceChannel = { "GroundTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingSettings, GroundTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceChannel_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponseChannels_Inner = { "GroundTraceResponseChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponseChannels_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponseChannels = { "GroundTraceResponseChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingSettings, GroundTraceResponseChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponseChannels_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponseChannels_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponses_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponses = { "GroundTraceResponses", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingSettings, GroundTraceResponses), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponses_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponses_MetaData) }; // 2352989251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpFrontMontage_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpFrontMontage = { "GetUpFrontMontage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingSettings, GetUpFrontMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpFrontMontage_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpFrontMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpBackMontage_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsRagdollingSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpBackMontage = { "GetUpBackMontage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRagdollingSettings, GetUpBackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpBackMontage_MetaData), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpBackMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bStartRagdollingOnLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_RagdollingOnLandSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_bLimitInitialRagdollSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponseChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponseChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GroundTraceResponses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpFrontMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewProp_GetUpBackMontage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsRagdollingSettings",
		Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::PropPointers),
		sizeof(FAlsRagdollingSettings),
		alignof(FAlsRagdollingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRagdollingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRagdollingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRagdollingSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRagdollingSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRagdollingSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsRagdollingSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsRagdollingSettings_Statics::NewStructOps, TEXT("AlsRagdollingSettings"), &Z_Registration_Info_UScriptStruct_AlsRagdollingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRagdollingSettings), 3150887439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRagdollingSettings_h_1624726655(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRagdollingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsRagdollingSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
