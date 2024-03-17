// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsTurnInPlaceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsTurnInPlaceSettings() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsTurnInPlaceSettings();
	ALS_API UClass* Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	void UAlsTurnInPlaceSettings::StaticRegisterNativesUAlsTurnInPlaceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsTurnInPlaceSettings);
	UClass* Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister()
	{
		return UAlsTurnInPlaceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScalePlayRateByAnimatedTurnAngle_MetaData[];
#endif
		static void NewProp_bScalePlayRateByAnimatedTurnAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScalePlayRateByAnimatedTurnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedTurnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedTurnAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Settings/AlsTurnInPlaceSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsTurnInPlaceSettings, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_Animation_MetaData), Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsTurnInPlaceSettings, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_PlayRate_MetaData), Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_bScalePlayRateByAnimatedTurnAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_bScalePlayRateByAnimatedTurnAngle_SetBit(void* Obj)
	{
		((UAlsTurnInPlaceSettings*)Obj)->bScalePlayRateByAnimatedTurnAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_bScalePlayRateByAnimatedTurnAngle = { "bScalePlayRateByAnimatedTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsTurnInPlaceSettings), &Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_bScalePlayRateByAnimatedTurnAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_bScalePlayRateByAnimatedTurnAngle_MetaData), Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_bScalePlayRateByAnimatedTurnAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_AnimatedTurnAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_AnimatedTurnAngle = { "AnimatedTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsTurnInPlaceSettings, AnimatedTurnAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_AnimatedTurnAngle_MetaData), Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_AnimatedTurnAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_bScalePlayRateByAnimatedTurnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::NewProp_AnimatedTurnAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsTurnInPlaceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::ClassParams = {
		&UAlsTurnInPlaceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsTurnInPlaceSettings()
	{
		if (!Z_Registration_Info_UClass_UAlsTurnInPlaceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsTurnInPlaceSettings.OuterSingleton, Z_Construct_UClass_UAlsTurnInPlaceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsTurnInPlaceSettings.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsTurnInPlaceSettings>()
	{
		return UAlsTurnInPlaceSettings::StaticClass();
	}
	UAlsTurnInPlaceSettings::UAlsTurnInPlaceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsTurnInPlaceSettings);
	UAlsTurnInPlaceSettings::~UAlsTurnInPlaceSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings;
class UScriptStruct* FAlsGeneralTurnInPlaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsGeneralTurnInPlaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsGeneralTurnInPlaceSettings>()
{
	return FAlsGeneralTurnInPlaceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewYawSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewYawSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewYawAngleToActivationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewYawAngleToActivationDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Turn180AngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Turn180AngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableFootLock_MetaData[];
#endif
		static void NewProp_bDisableFootLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableFootLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingTurn90Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingTurn90Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingTurn90Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingTurn90Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingTurn180Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingTurn180Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingTurn180Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StandingTurn180Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingTurn90Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingTurn90Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingTurn90Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingTurn90Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingTurn180Left_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingTurn180Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingTurn180Right_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchingTurn180Right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsGeneralTurnInPlaceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold = { "ViewYawAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, ViewYawAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawSpeedThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawSpeedThreshold = { "ViewYawSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, ViewYawSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawSpeedThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleToActivationDelay_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleToActivationDelay = { "ViewYawAngleToActivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, ViewYawAngleToActivationDelay), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleToActivationDelay_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleToActivationDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_Turn180AngleThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Turn 180 Angle Threshold" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_Turn180AngleThreshold = { "Turn180AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, Turn180AngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_Turn180AngleThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_Turn180AngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_BlendDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_BlendDuration = { "BlendDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, BlendDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_BlendDuration_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_BlendDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_bDisableFootLock_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_bDisableFootLock_SetBit(void* Obj)
	{
		((FAlsGeneralTurnInPlaceSettings*)Obj)->bDisableFootLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_bDisableFootLock = { "bDisableFootLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsGeneralTurnInPlaceSettings), &Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_bDisableFootLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_bDisableFootLock_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_bDisableFootLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Left_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Standing Turn 90 Left" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Left = { "StandingTurn90Left", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, StandingTurn90Left), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Left_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Right_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Standing Turn 90 Right" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Right = { "StandingTurn90Right", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, StandingTurn90Right), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Right_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Right_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Left_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Standing Turn 180 Left" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Left = { "StandingTurn180Left", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, StandingTurn180Left), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Left_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Right_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Standing Turn 180 Right" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Right = { "StandingTurn180Right", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, StandingTurn180Right), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Right_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Right_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Left_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Crouching Turn 90 Left" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Left = { "CrouchingTurn90Left", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, CrouchingTurn90Left), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Left_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Right_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Crouching Turn 90 Right" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Right = { "CrouchingTurn90Right", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, CrouchingTurn90Right), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Right_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Right_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Left_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Crouching Turn 180 Left" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Left = { "CrouchingTurn180Left", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, CrouchingTurn180Left), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Left_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Left_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Right_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Crouching Turn 180 Right" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsTurnInPlaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Right = { "CrouchingTurn180Right", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralTurnInPlaceSettings, CrouchingTurn180Right), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Right_MetaData), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Right_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_ViewYawAngleToActivationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_Turn180AngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_BlendDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_bDisableFootLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn90Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_StandingTurn180Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn90Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewProp_CrouchingTurn180Right,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsGeneralTurnInPlaceSettings",
		Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::PropPointers),
		sizeof(FAlsGeneralTurnInPlaceSettings),
		alignof(FAlsGeneralTurnInPlaceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsGeneralTurnInPlaceSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsGeneralTurnInPlaceSettings_Statics::NewStructOps, TEXT("AlsGeneralTurnInPlaceSettings"), &Z_Registration_Info_UScriptStruct_AlsGeneralTurnInPlaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsGeneralTurnInPlaceSettings), 3812518779U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsTurnInPlaceSettings, UAlsTurnInPlaceSettings::StaticClass, TEXT("UAlsTurnInPlaceSettings"), &Z_Registration_Info_UClass_UAlsTurnInPlaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsTurnInPlaceSettings), 272517502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_1593612587(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsTurnInPlaceSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
