// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/AlsAnimationInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "ALS/Public/State/AlsControlRigInput.h"
#include "ALS/Public/State/AlsFeetState.h"
#include "ALS/Public/State/AlsGroundedState.h"
#include "ALS/Public/State/AlsInAirState.h"
#include "ALS/Public/State/AlsLayeringState.h"
#include "ALS/Public/State/AlsLeanState.h"
#include "ALS/Public/State/AlsLocomotionAnimationState.h"
#include "ALS/Public/State/AlsMovementBaseState.h"
#include "ALS/Public/State/AlsPoseState.h"
#include "ALS/Public/State/AlsRagdollingAnimationState.h"
#include "ALS/Public/State/AlsRotateInPlaceState.h"
#include "ALS/Public/State/AlsTransitionsState.h"
#include "ALS/Public/State/AlsTurnInPlaceState.h"
#include "ALS/Public/State/AlsViewAnimationState.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimationInstance() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_AAlsCharacter_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimationInstance();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimationInstance_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimationInstanceSettings_NoRegister();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsHipsDirection();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsControlRigInput();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFeetState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGroundedState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsInAirState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLayeringState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLeanState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLocomotionAnimationState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementBaseState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsPoseState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingAnimationState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRotateInPlaceState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsTransitionsState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsTurnInPlaceState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewAnimationState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	DEFINE_FUNCTION(UAlsAnimationInstance::execStopTransitionAndTurnInPlaceAnimations)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTransitionAndTurnInPlaceAnimations(Z_Param_BlendOutDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execPlayTransitionRightAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_UBOOL(Z_Param_bFromStandingIdleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTransitionRightAnimation(Z_Param_BlendInDuration,Z_Param_BlendOutDuration,Z_Param_PlayRate,Z_Param_StartTime,Z_Param_bFromStandingIdleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execPlayTransitionLeftAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_UBOOL(Z_Param_bFromStandingIdleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTransitionLeftAnimation(Z_Param_BlendInDuration,Z_Param_BlendOutDuration,Z_Param_PlayRate,Z_Param_StartTime,Z_Param_bFromStandingIdleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execPlayTransitionAnimation)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_UBOOL(Z_Param_bFromStandingIdleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayTransitionAnimation(Z_Param_Animation,Z_Param_BlendInDuration,Z_Param_BlendOutDuration,Z_Param_PlayRate,Z_Param_StartTime,Z_Param_bFromStandingIdleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execPlayQuickStopAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayQuickStopAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execResetJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetJumped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execActivatePivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execSetHipsDirection)
	{
		P_GET_ENUM(EAlsHipsDirection,Z_Param_NewHipsDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHipsDirection(EAlsHipsDirection(Z_Param_NewHipsDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execResetGroundedEntryMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetGroundedEntryMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execRefreshLook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshLook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execReinitializeLook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeLook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execGetControlRigInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAlsControlRigInput*)Z_Param__Result=P_THIS->GetControlRigInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsAnimationInstance::execGetSettingsUnsafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAlsAnimationInstanceSettings**)Z_Param__Result=P_THIS->GetSettingsUnsafe();
		P_NATIVE_END;
	}
	void UAlsAnimationInstance::StaticRegisterNativesUAlsAnimationInstance()
	{
		UClass* Class = UAlsAnimationInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePivot", &UAlsAnimationInstance::execActivatePivot },
			{ "GetControlRigInput", &UAlsAnimationInstance::execGetControlRigInput },
			{ "GetSettingsUnsafe", &UAlsAnimationInstance::execGetSettingsUnsafe },
			{ "PlayQuickStopAnimation", &UAlsAnimationInstance::execPlayQuickStopAnimation },
			{ "PlayTransitionAnimation", &UAlsAnimationInstance::execPlayTransitionAnimation },
			{ "PlayTransitionLeftAnimation", &UAlsAnimationInstance::execPlayTransitionLeftAnimation },
			{ "PlayTransitionRightAnimation", &UAlsAnimationInstance::execPlayTransitionRightAnimation },
			{ "RefreshLook", &UAlsAnimationInstance::execRefreshLook },
			{ "ReinitializeLook", &UAlsAnimationInstance::execReinitializeLook },
			{ "ResetGroundedEntryMode", &UAlsAnimationInstance::execResetGroundedEntryMode },
			{ "ResetJumped", &UAlsAnimationInstance::execResetJumped },
			{ "SetHipsDirection", &UAlsAnimationInstance::execSetHipsDirection },
			{ "StopTransitionAndTurnInPlaceAnimations", &UAlsAnimationInstance::execStopTransitionAndTurnInPlaceAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "ActivatePivot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics
	{
		struct AlsAnimationInstance_eventGetControlRigInput_Parms
		{
			FAlsControlRigInput ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventGetControlRigInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FAlsControlRigInput, METADATA_PARAMS(0, nullptr) }; // 2383407667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
		{ "ReturnDisplayName", "Rig Input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "GetControlRigInput", nullptr, nullptr, Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::AlsAnimationInstance_eventGetControlRigInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::AlsAnimationInstance_eventGetControlRigInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics
	{
		struct AlsAnimationInstance_eventGetSettingsUnsafe_Parms
		{
			UAlsAnimationInstanceSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventGetSettingsUnsafe_Parms, ReturnValue), Z_Construct_UClass_UAlsAnimationInstanceSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
		{ "ReturnDisplayName", "Setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "GetSettingsUnsafe", nullptr, nullptr, Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::AlsAnimationInstance_eventGetSettingsUnsafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::AlsAnimationInstance_eventGetSettingsUnsafe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "PlayQuickStopAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics
	{
		struct AlsAnimationInstance_eventPlayTransitionAnimation_Parms
		{
			UAnimSequenceBase* Animation;
			float BlendInDuration;
			float BlendOutDuration;
			float PlayRate;
			float StartTime;
			bool bFromStandingIdleOnly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static void NewProp_bFromStandingIdleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromStandingIdleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_BlendInDuration = { "BlendInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionAnimation_Parms, BlendInDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_BlendOutDuration = { "BlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionAnimation_Parms, BlendOutDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionAnimation_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionAnimation_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_bFromStandingIdleOnly_SetBit(void* Obj)
	{
		((AlsAnimationInstance_eventPlayTransitionAnimation_Parms*)Obj)->bFromStandingIdleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_bFromStandingIdleOnly = { "bFromStandingIdleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsAnimationInstance_eventPlayTransitionAnimation_Parms), &Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_bFromStandingIdleOnly_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_BlendInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_BlendOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::NewProp_bFromStandingIdleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "CPP_Default_bFromStandingIdleOnly", "false" },
		{ "CPP_Default_BlendInDuration", "0.200000" },
		{ "CPP_Default_BlendOutDuration", "0.200000" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "PlayTransitionAnimation", nullptr, nullptr, Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::AlsAnimationInstance_eventPlayTransitionAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::AlsAnimationInstance_eventPlayTransitionAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics
	{
		struct AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms
		{
			float BlendInDuration;
			float BlendOutDuration;
			float PlayRate;
			float StartTime;
			bool bFromStandingIdleOnly;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static void NewProp_bFromStandingIdleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromStandingIdleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_BlendInDuration = { "BlendInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms, BlendInDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_BlendOutDuration = { "BlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms, BlendOutDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_bFromStandingIdleOnly_SetBit(void* Obj)
	{
		((AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms*)Obj)->bFromStandingIdleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_bFromStandingIdleOnly = { "bFromStandingIdleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms), &Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_bFromStandingIdleOnly_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_BlendInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_BlendOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::NewProp_bFromStandingIdleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "CPP_Default_bFromStandingIdleOnly", "false" },
		{ "CPP_Default_BlendInDuration", "0.200000" },
		{ "CPP_Default_BlendOutDuration", "0.200000" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "PlayTransitionLeftAnimation", nullptr, nullptr, Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::AlsAnimationInstance_eventPlayTransitionLeftAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics
	{
		struct AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms
		{
			float BlendInDuration;
			float BlendOutDuration;
			float PlayRate;
			float StartTime;
			bool bFromStandingIdleOnly;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static void NewProp_bFromStandingIdleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromStandingIdleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_BlendInDuration = { "BlendInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms, BlendInDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_BlendOutDuration = { "BlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms, BlendOutDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_bFromStandingIdleOnly_SetBit(void* Obj)
	{
		((AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms*)Obj)->bFromStandingIdleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_bFromStandingIdleOnly = { "bFromStandingIdleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms), &Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_bFromStandingIdleOnly_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_BlendInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_BlendOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::NewProp_bFromStandingIdleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "CPP_Default_bFromStandingIdleOnly", "false" },
		{ "CPP_Default_BlendInDuration", "0.200000" },
		{ "CPP_Default_BlendOutDuration", "0.200000" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "PlayTransitionRightAnimation", nullptr, nullptr, Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::AlsAnimationInstance_eventPlayTransitionRightAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "RefreshLook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "ReinitializeLook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "ResetGroundedEntryMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "ResetJumped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics
	{
		struct AlsAnimationInstance_eventSetHipsDirection_Parms
		{
			EAlsHipsDirection NewHipsDirection;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewHipsDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewHipsDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection = { "NewHipsDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventSetHipsDirection_Parms, NewHipsDirection), Z_Construct_UEnum_ALS_EAlsHipsDirection, METADATA_PARAMS(0, nullptr) }; // 3428037698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "SetHipsDirection", nullptr, nullptr, Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::AlsAnimationInstance_eventSetHipsDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::AlsAnimationInstance_eventSetHipsDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics
	{
		struct AlsAnimationInstance_eventStopTransitionAndTurnInPlaceAnimations_Parms
		{
			float BlendOutDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::NewProp_BlendOutDuration = { "BlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsAnimationInstance_eventStopTransitionAndTurnInPlaceAnimations_Parms, BlendOutDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::NewProp_BlendOutDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Animation Instance" },
		{ "CPP_Default_BlendOutDuration", "0.200000" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsAnimationInstance, nullptr, "StopTransitionAndTurnInPlaceAnimations", nullptr, nullptr, Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::AlsAnimationInstance_eventStopTransitionAndTurnInPlaceAnimations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::AlsAnimationInstance_eventStopTransitionAndTurnInPlaceAnimations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimationInstance);
	UClass* Z_Construct_UClass_UAlsAnimationInstance_NoRegister()
	{
		return UAlsAnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingUpdate_MetaData[];
#endif
		static void NewProp_bPendingUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportedTime;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayDebugTraces_MetaData[];
#endif
		static void NewProp_bDisplayDebugTraces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayDebugTraces;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedEntryMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundedEntryMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayeringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayeringState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeanState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundedState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAirState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeetState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionsState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionsState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateInPlaceState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotateInPlaceState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TurnInPlaceState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollingState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollingState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsAnimationInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsAnimationInstance_ActivatePivot, "ActivatePivot" }, // 875011819
		{ &Z_Construct_UFunction_UAlsAnimationInstance_GetControlRigInput, "GetControlRigInput" }, // 647406821
		{ &Z_Construct_UFunction_UAlsAnimationInstance_GetSettingsUnsafe, "GetSettingsUnsafe" }, // 767337755
		{ &Z_Construct_UFunction_UAlsAnimationInstance_PlayQuickStopAnimation, "PlayQuickStopAnimation" }, // 1301152438
		{ &Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionAnimation, "PlayTransitionAnimation" }, // 1970237716
		{ &Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionLeftAnimation, "PlayTransitionLeftAnimation" }, // 2157594844
		{ &Z_Construct_UFunction_UAlsAnimationInstance_PlayTransitionRightAnimation, "PlayTransitionRightAnimation" }, // 1680281058
		{ &Z_Construct_UFunction_UAlsAnimationInstance_RefreshLook, "RefreshLook" }, // 1194314367
		{ &Z_Construct_UFunction_UAlsAnimationInstance_ReinitializeLook, "ReinitializeLook" }, // 1117564216
		{ &Z_Construct_UFunction_UAlsAnimationInstance_ResetGroundedEntryMode, "ResetGroundedEntryMode" }, // 3983010893
		{ &Z_Construct_UFunction_UAlsAnimationInstance_ResetJumped, "ResetJumped" }, // 1329906584
		{ &Z_Construct_UFunction_UAlsAnimationInstance_SetHipsDirection, "SetHipsDirection" }, // 3462762992
		{ &Z_Construct_UFunction_UAlsAnimationInstance_StopTransitionAndTurnInPlaceAnimations, "StopTransitionAndTurnInPlaceAnimations" }, // 3250914203
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AlsAnimationInstance.h" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, Settings), Z_Construct_UClass_UAlsAnimationInstanceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Settings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, Character), Z_Construct_UClass_AAlsCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bPendingUpdate_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// Used to indicate that the animation instance has not been updated for a long time\n// and its current state may not be correct (such as foot location used in foot locking).\n" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
		{ "ToolTip", "Used to indicate that the animation instance has not been updated for a long time\nand its current state may not be correct (such as foot location used in foot locking)." },
	};
#endif
	void Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bPendingUpdate_SetBit(void* Obj)
	{
		((UAlsAnimationInstance*)Obj)->bPendingUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bPendingUpdate = { "bPendingUpdate", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimationInstance), &Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bPendingUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bPendingUpdate_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bPendingUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TeleportedTime_MetaData[] = {
		{ "Category", "State" },
		{ "ClampMin", "0" },
		{ "Comment", "// Time of the last teleportation event.\n" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
		{ "ToolTip", "Time of the last teleportation event." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TeleportedTime = { "TeleportedTime", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, TeleportedTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TeleportedTime_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TeleportedTime_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bDisplayDebugTraces_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bDisplayDebugTraces_SetBit(void* Obj)
	{
		((UAlsAnimationInstance*)Obj)->bDisplayDebugTraces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bDisplayDebugTraces = { "bDisplayDebugTraces", nullptr, (EPropertyFlags)0x0020080800022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimationInstance), &Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bDisplayDebugTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bDisplayDebugTraces_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bDisplayDebugTraces_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, ViewMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewMode_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionMode = { "LocomotionMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, LocomotionMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionMode_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, RotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotationMode_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotationMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Stance_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, Stance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Stance_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Stance_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, Gait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Gait_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_OverlayMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_OverlayMode = { "OverlayMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, OverlayMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_OverlayMode_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_OverlayMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionAction_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionAction = { "LocomotionAction", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, LocomotionAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionAction_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedEntryMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedEntryMode = { "GroundedEntryMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, GroundedEntryMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedEntryMode_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedEntryMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_MovementBase_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0020088000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, MovementBase), Z_Construct_UScriptStruct_FAlsMovementBaseState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_MovementBase_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_MovementBase_MetaData) }; // 2138106074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LayeringState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LayeringState = { "LayeringState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, LayeringState), Z_Construct_UScriptStruct_FAlsLayeringState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LayeringState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LayeringState_MetaData) }; // 1865029955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_PoseState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_PoseState = { "PoseState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, PoseState), Z_Construct_UScriptStruct_FAlsPoseState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_PoseState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_PoseState_MetaData) }; // 738530905
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewState = { "ViewState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, ViewState), Z_Construct_UScriptStruct_FAlsViewAnimationState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewState_MetaData) }; // 3168651768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LeanState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LeanState = { "LeanState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, LeanState), Z_Construct_UScriptStruct_FAlsLeanState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LeanState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LeanState_MetaData) }; // 2423791723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionState = { "LocomotionState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, LocomotionState), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionState_MetaData) }; // 850337599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedState = { "GroundedState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, GroundedState), Z_Construct_UScriptStruct_FAlsGroundedState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedState_MetaData) }; // 18716021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_InAirState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_InAirState = { "InAirState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, InAirState), Z_Construct_UScriptStruct_FAlsInAirState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_InAirState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_InAirState_MetaData) }; // 2262271510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_FeetState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_FeetState = { "FeetState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, FeetState), Z_Construct_UScriptStruct_FAlsFeetState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_FeetState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_FeetState_MetaData) }; // 3384027495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TransitionsState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TransitionsState = { "TransitionsState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, TransitionsState), Z_Construct_UScriptStruct_FAlsTransitionsState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TransitionsState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TransitionsState_MetaData) }; // 3116729001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotateInPlaceState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotateInPlaceState = { "RotateInPlaceState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, RotateInPlaceState), Z_Construct_UScriptStruct_FAlsRotateInPlaceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotateInPlaceState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotateInPlaceState_MetaData) }; // 1703139176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TurnInPlaceState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TurnInPlaceState = { "TurnInPlaceState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, TurnInPlaceState), Z_Construct_UScriptStruct_FAlsTurnInPlaceState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TurnInPlaceState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TurnInPlaceState_MetaData) }; // 3688902921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RagdollingState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RagdollingState = { "RagdollingState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationInstance, RagdollingState), Z_Construct_UScriptStruct_FAlsRagdollingAnimationState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RagdollingState_MetaData), Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RagdollingState_MetaData) }; // 3109039412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bPendingUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TeleportedTime,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_bDisplayDebugTraces,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_OverlayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedEntryMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_MovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LayeringState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_PoseState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_ViewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LeanState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_LocomotionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_GroundedState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_InAirState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_FeetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TransitionsState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RotateInPlaceState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_TurnInPlaceState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationInstance_Statics::NewProp_RagdollingState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimationInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimationInstance_Statics::ClassParams = {
		&UAlsAnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAlsAnimationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimationInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimationInstance()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimationInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimationInstance.OuterSingleton, Z_Construct_UClass_UAlsAnimationInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimationInstance.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsAnimationInstance>()
	{
		return UAlsAnimationInstance::StaticClass();
	}
	UAlsAnimationInstance::UAlsAnimationInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimationInstance);
	UAlsAnimationInstance::~UAlsAnimationInstance() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimationInstance, UAlsAnimationInstance::StaticClass, TEXT("UAlsAnimationInstance"), &Z_Registration_Info_UClass_UAlsAnimationInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimationInstance), 3294022622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_14055546(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
