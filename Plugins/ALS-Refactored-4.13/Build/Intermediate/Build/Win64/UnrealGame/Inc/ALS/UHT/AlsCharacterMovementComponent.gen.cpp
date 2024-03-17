// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/AlsCharacterMovementComponent.h"
#include "ALS/Public/Settings/AlsMovementSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsCharacterMovementComponent() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsCharacterMovementComponent();
	ALS_API UClass* Z_Construct_UClass_UAlsCharacterMovementComponent_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsMovementSettings_NoRegister();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementGaitSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	DEFINE_FUNCTION(UAlsCharacterMovementComponent::execSetMovementSettings)
	{
		P_GET_OBJECT(UAlsMovementSettings,Z_Param_NewMovementSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementSettings(Z_Param_NewMovementSettings);
		P_NATIVE_END;
	}
	void UAlsCharacterMovementComponent::StaticRegisterNativesUAlsCharacterMovementComponent()
	{
		UClass* Class = UAlsCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMovementSettings", &UAlsCharacterMovementComponent::execSetMovementSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics
	{
		struct AlsCharacterMovementComponent_eventSetMovementSettings_Parms
		{
			UAlsMovementSettings* NewMovementSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMovementSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::NewProp_NewMovementSettings = { "NewMovementSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacterMovementComponent_eventSetMovementSettings_Parms, NewMovementSettings), Z_Construct_UClass_UAlsMovementSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::NewProp_NewMovementSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character Movement" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCharacterMovementComponent, nullptr, "SetMovementSettings", nullptr, nullptr, Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::AlsCharacterMovementComponent_eventSetMovementSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::AlsCharacterMovementComponent_eventSetMovementSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsCharacterMovementComponent);
	UClass* Z_Construct_UClass_UAlsCharacterMovementComponent_NoRegister()
	{
		return UAlsCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAlsCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GaitSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedGait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAllowedGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMovementModeLocked_MetaData[];
#endif
		static void NewProp_bMovementModeLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementModeLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInputBlocked_MetaData[];
#endif
		static void NewProp_bInputBlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInputBlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingPenetrationAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingPenetrationAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrePenetrationAdjustmentVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrePenetrationAdjustmentVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrePenetrationAdjustmentVelocityValid_MetaData[];
#endif
		static void NewProp_bPrePenetrationAdjustmentVelocityValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrePenetrationAdjustmentVelocityValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsCharacterMovementComponent_SetMovementSettings, "SetMovementSettings" }, // 891673948
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlsCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MovementSettings_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MovementSettings = { "MovementSettings", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, MovementSettings), Z_Construct_UClass_UAlsMovementSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MovementSettings_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MovementSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_GaitSettings_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_GaitSettings = { "GaitSettings", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, GaitSettings), Z_Construct_UScriptStruct_FAlsMovementGaitSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_GaitSettings_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_GaitSettings_MetaData) }; // 939022613
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, RotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_RotationMode_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_RotationMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_Stance_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, Stance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_Stance_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_Stance_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MaxAllowedGait_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MaxAllowedGait = { "MaxAllowedGait", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, MaxAllowedGait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MaxAllowedGait_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MaxAllowedGait_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bMovementModeLocked_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bMovementModeLocked_SetBit(void* Obj)
	{
		((UAlsCharacterMovementComponent*)Obj)->bMovementModeLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bMovementModeLocked = { "bMovementModeLocked", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterMovementComponent), &Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bMovementModeLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bMovementModeLocked_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bMovementModeLocked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bInputBlocked_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// Used to temporarily prohibit the player from moving the character. Also works for AI-controlled characters.\n" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
		{ "ToolTip", "Used to temporarily prohibit the player from moving the character. Also works for AI-controlled characters." },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bInputBlocked_SetBit(void* Obj)
	{
		((UAlsCharacterMovementComponent*)Obj)->bInputBlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bInputBlocked = { "bInputBlocked", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterMovementComponent), &Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bInputBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bInputBlocked_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bInputBlocked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PreviousControlRotation_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// Valid only on locally controlled characters.\n" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
		{ "ToolTip", "Valid only on locally controlled characters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PreviousControlRotation = { "PreviousControlRotation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, PreviousControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PreviousControlRotation_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PreviousControlRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PendingPenetrationAdjustment_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PendingPenetrationAdjustment = { "PendingPenetrationAdjustment", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, PendingPenetrationAdjustment), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PendingPenetrationAdjustment_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PendingPenetrationAdjustment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PrePenetrationAdjustmentVelocity_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PrePenetrationAdjustmentVelocity = { "PrePenetrationAdjustmentVelocity", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCharacterMovementComponent, PrePenetrationAdjustmentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PrePenetrationAdjustmentVelocity_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PrePenetrationAdjustmentVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bPrePenetrationAdjustmentVelocityValid_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bPrePenetrationAdjustmentVelocityValid_SetBit(void* Obj)
	{
		((UAlsCharacterMovementComponent*)Obj)->bPrePenetrationAdjustmentVelocityValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bPrePenetrationAdjustmentVelocityValid = { "bPrePenetrationAdjustmentVelocityValid", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCharacterMovementComponent), &Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bPrePenetrationAdjustmentVelocityValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bPrePenetrationAdjustmentVelocityValid_MetaData), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bPrePenetrationAdjustmentVelocityValid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MovementSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_GaitSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_MaxAllowedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bMovementModeLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bInputBlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PreviousControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PendingPenetrationAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_PrePenetrationAdjustmentVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::NewProp_bPrePenetrationAdjustmentVelocityValid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::ClassParams = {
		&UAlsCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UAlsCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UAlsCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsCharacterMovementComponent.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsCharacterMovementComponent>()
	{
		return UAlsCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsCharacterMovementComponent);
	UAlsCharacterMovementComponent::~UAlsCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsCharacterMovementComponent, UAlsCharacterMovementComponent::StaticClass, TEXT("UAlsCharacterMovementComponent"), &Z_Registration_Info_UClass_UAlsCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsCharacterMovementComponent), 1716924057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacterMovementComponent_h_3538571401(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
