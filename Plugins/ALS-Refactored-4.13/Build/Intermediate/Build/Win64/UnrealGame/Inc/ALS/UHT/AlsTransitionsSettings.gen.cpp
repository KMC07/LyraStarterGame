// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsTransitionsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsTransitionsSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsTransitionsSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsTransitionsSettings;
class UScriptStruct* FAlsTransitionsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsTransitionsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsTransitionsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsTransitionsSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsTransitionsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsTransitionsSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsTransitionsSettings>()
{
	return FAlsTransitionsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickStopBlendInDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuickStopBlendInDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickStopBlendOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuickStopBlendOutDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickStopPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuickStopPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickStopStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuickStopStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingTransitionLeftAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingTransitionLeftAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingTransitionRightAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingTransitionRightAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingTransitionLeftAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingTransitionLeftAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingTransitionRightAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingTransitionRightAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTransitionFootLockDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicTransitionFootLockDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTransitionBlendDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicTransitionBlendDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTransitionPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicTransitionPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingDynamicTransitionLeftAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingDynamicTransitionLeftAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingDynamicTransitionRightAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingDynamicTransitionRightAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingDynamicTransitionLeftAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingDynamicTransitionLeftAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingDynamicTransitionRightAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingDynamicTransitionRightAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsTransitionsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendInDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendInDuration = { "QuickStopBlendInDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, QuickStopBlendInDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendInDuration_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendInDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendOutDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendOutDuration = { "QuickStopBlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, QuickStopBlendOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendOutDuration_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendOutDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopPlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopPlayRate = { "QuickStopPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, QuickStopPlayRate), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopPlayRate_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopStartTime_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopStartTime = { "QuickStopStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, QuickStopStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopStartTime_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionLeftAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionLeftAnimation = { "StandingTransitionLeftAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, StandingTransitionLeftAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionLeftAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionLeftAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionRightAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionRightAnimation = { "StandingTransitionRightAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, StandingTransitionRightAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionRightAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionRightAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionLeftAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionLeftAnimation = { "CrouchingTransitionLeftAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, CrouchingTransitionLeftAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionLeftAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionLeftAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionRightAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionRightAnimation = { "CrouchingTransitionRightAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, CrouchingTransitionRightAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionRightAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionRightAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionFootLockDistanceThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionFootLockDistanceThreshold = { "DynamicTransitionFootLockDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, DynamicTransitionFootLockDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionFootLockDistanceThreshold_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionFootLockDistanceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionBlendDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionBlendDuration = { "DynamicTransitionBlendDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, DynamicTransitionBlendDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionBlendDuration_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionBlendDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionPlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionPlayRate = { "DynamicTransitionPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, DynamicTransitionPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionPlayRate_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionLeftAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionLeftAnimation = { "StandingDynamicTransitionLeftAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, StandingDynamicTransitionLeftAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionLeftAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionLeftAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionRightAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionRightAnimation = { "StandingDynamicTransitionRightAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, StandingDynamicTransitionRightAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionRightAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionRightAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionLeftAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionLeftAnimation = { "CrouchingDynamicTransitionLeftAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, CrouchingDynamicTransitionLeftAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionLeftAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionLeftAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionRightAnimation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTransitionsSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionRightAnimation = { "CrouchingDynamicTransitionRightAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTransitionsSettings, CrouchingDynamicTransitionRightAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionRightAnimation_MetaData), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionRightAnimation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopBlendOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_QuickStopStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionLeftAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingTransitionRightAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionLeftAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingTransitionRightAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionFootLockDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionBlendDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_DynamicTransitionPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionLeftAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_StandingDynamicTransitionRightAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionLeftAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewProp_CrouchingDynamicTransitionRightAnimation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsTransitionsSettings",
		Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::PropPointers),
		sizeof(FAlsTransitionsSettings),
		alignof(FAlsTransitionsSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsTransitionsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsTransitionsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsTransitionsSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsTransitionsSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTransitionsSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTransitionsSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsTransitionsSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsTransitionsSettings_Statics::NewStructOps, TEXT("AlsTransitionsSettings"), &Z_Registration_Info_UScriptStruct_AlsTransitionsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsTransitionsSettings), 3461142928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTransitionsSettings_h_1218986360(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTransitionsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTransitionsSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
