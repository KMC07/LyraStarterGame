// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsCharacterSettings.h"
#include "ALS/Public/Settings/AlsMantlingSettings.h"
#include "ALS/Public/Settings/AlsRagdollingSettings.h"
#include "ALS/Public/Settings/AlsRollingSettings.h"
#include "ALS/Public/Settings/AlsViewSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsCharacterSettings() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsCharacterSettings();
	ALS_API UClass* Z_Construct_UClass_UAlsCharacterSettings_NoRegister();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsInAirRotationMode();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRollingSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	void UAlsCharacterSettings::StaticRegisterNativesUAlsCharacterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsCharacterSettings);
	UClass* Z_Construct_UClass_UAlsCharacterSettings_NoRegister()
	{
		return UAlsCharacterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlsCharacterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSprintHasPriorityOverAiming_MetaData[];
#endif
		static void NewProp_bSprintHasPriorityOverAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprintHasPriorityOverAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToVelocityWhenSprinting_MetaData[];
#endif
		static void NewProp_bRotateToVelocityWhenSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToVelocityWhenSprinting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAirRotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InAirRotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAimingWhenInAir_MetaData[];
#endif
		static void NewProp_bAllowAimingWhenInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAimingWhenInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode_MetaData[];
#endif
		static void NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode_MetaData[];
#endif
		static void NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_View;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mantling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mantling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ragdolling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ragdolling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rolling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rolling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsCharacterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Settings/AlsCharacterSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_MovingSpeedThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_MovingSpeedThreshold = { "MovingSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterSettings, MovingSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_MovingSpeedThreshold_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_MovingSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bSprintHasPriorityOverAiming_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bSprintHasPriorityOverAiming_SetBit(void* Obj)
	{
		((UAlsCharacterSettings*)Obj)->bSprintHasPriorityOverAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bSprintHasPriorityOverAiming = { "bSprintHasPriorityOverAiming", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterSettings), &Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bSprintHasPriorityOverAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bSprintHasPriorityOverAiming_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bSprintHasPriorityOverAiming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateToVelocityWhenSprinting_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateToVelocityWhenSprinting_SetBit(void* Obj)
	{
		((UAlsCharacterSettings*)Obj)->bRotateToVelocityWhenSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateToVelocityWhenSprinting = { "bRotateToVelocityWhenSprinting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterSettings), &Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateToVelocityWhenSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateToVelocityWhenSprinting_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateToVelocityWhenSprinting_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_InAirRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_InAirRotationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_InAirRotationMode = { "InAirRotationMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterSettings, InAirRotationMode), Z_Construct_UEnum_ALS_EAlsInAirRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_InAirRotationMode_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_InAirRotationMode_MetaData) }; // 3067150662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bAllowAimingWhenInAir_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bAllowAimingWhenInAir_SetBit(void* Obj)
	{
		((UAlsCharacterSettings*)Obj)->bAllowAimingWhenInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bAllowAimingWhenInAir = { "bAllowAimingWhenInAir", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterSettings), &Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bAllowAimingWhenInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bAllowAimingWhenInAir_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bAllowAimingWhenInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If checked, the character will rotate relative to the object it is standing on in the velocity\n// direction rotation mode, otherwise the character will ignore that object and keep its world rotation.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
		{ "ToolTip", "If checked, the character will rotate relative to the object it is standing on in the velocity\ndirection rotation mode, otherwise the character will ignore that object and keep its world rotation." },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode_SetBit(void* Obj)
	{
		((UAlsCharacterSettings*)Obj)->bInheritMovementBaseRotationInVelocityDirectionRotationMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode = { "bInheritMovementBaseRotationInVelocityDirectionRotationMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterSettings), &Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If checked, the character will rotate towards the direction they want to move, but is not always able to due to obstacles.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
		{ "ToolTip", "If checked, the character will rotate towards the direction they want to move, but is not always able to due to obstacles." },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode_SetBit(void* Obj)
	{
		((UAlsCharacterSettings*)Obj)->bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode = { "bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterSettings), &Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_View_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterSettings, View), Z_Construct_UScriptStruct_FAlsViewSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_View_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_View_MetaData) }; // 1300689657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Mantling_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Mantling = { "Mantling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterSettings, Mantling), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Mantling_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Mantling_MetaData) }; // 1185208882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Ragdolling_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Ragdolling = { "Ragdolling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterSettings, Ragdolling), Z_Construct_UScriptStruct_FAlsRagdollingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Ragdolling_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Ragdolling_MetaData) }; // 3150887439
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Rolling_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsCharacterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Rolling = { "Rolling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterSettings, Rolling), Z_Construct_UScriptStruct_FAlsRollingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Rolling_MetaData), Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Rolling_MetaData) }; // 789155686
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsCharacterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_MovingSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bSprintHasPriorityOverAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateToVelocityWhenSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_InAirRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_InAirRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bAllowAimingWhenInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bInheritMovementBaseRotationInVelocityDirectionRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_bRotateTowardsDesiredVelocityInVelocityDirectionRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Mantling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Ragdolling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterSettings_Statics::NewProp_Rolling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsCharacterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsCharacterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsCharacterSettings_Statics::ClassParams = {
		&UAlsCharacterSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsCharacterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsCharacterSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsCharacterSettings()
	{
		if (!Z_Registration_Info_UClass_UAlsCharacterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsCharacterSettings.OuterSingleton, Z_Construct_UClass_UAlsCharacterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsCharacterSettings.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsCharacterSettings>()
	{
		return UAlsCharacterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsCharacterSettings);
	UAlsCharacterSettings::~UAlsCharacterSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsCharacterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsCharacterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsCharacterSettings, UAlsCharacterSettings::StaticClass, TEXT("UAlsCharacterSettings"), &Z_Registration_Info_UClass_UAlsCharacterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsCharacterSettings), 3196741724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsCharacterSettings_h_1417333915(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsCharacterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsCharacterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
