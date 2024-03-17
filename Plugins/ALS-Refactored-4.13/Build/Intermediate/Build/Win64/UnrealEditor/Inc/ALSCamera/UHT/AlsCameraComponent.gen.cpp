// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSCamera/Public/AlsCameraComponent.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsCameraComponent() {}
// Cross Module References
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraComponent();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraComponent_NoRegister();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	UPackage* Z_Construct_UPackage__Script_ALSCamera();
// End Cross Module References
	DEFINE_FUNCTION(UAlsCameraComponent::execGetViewInfo)
	{
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_ViewInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetViewInfo(Z_Param_Out_ViewInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraComponent::execGetThirdPersonTraceStartLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetThirdPersonTraceStartLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraComponent::execGetThirdPersonPivotLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetThirdPersonPivotLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraComponent::execGetFirstPersonCameraLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFirstPersonCameraLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraComponent::execSetRightShoulder)
	{
		P_GET_UBOOL(Z_Param_bNewRightShoulder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRightShoulder(Z_Param_bNewRightShoulder);
		P_NATIVE_END;
	}
	void UAlsCameraComponent::StaticRegisterNativesUAlsCameraComponent()
	{
		UClass* Class = UAlsCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstPersonCameraLocation", &UAlsCameraComponent::execGetFirstPersonCameraLocation },
			{ "GetThirdPersonPivotLocation", &UAlsCameraComponent::execGetThirdPersonPivotLocation },
			{ "GetThirdPersonTraceStartLocation", &UAlsCameraComponent::execGetThirdPersonTraceStartLocation },
			{ "GetViewInfo", &UAlsCameraComponent::execGetViewInfo },
			{ "SetRightShoulder", &UAlsCameraComponent::execSetRightShoulder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics
	{
		struct AlsCameraComponent_eventGetFirstPersonCameraLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraComponent_eventGetFirstPersonCameraLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
		{ "ReturnDisplayName", "Camera Location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraComponent, nullptr, "GetFirstPersonCameraLocation", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::AlsCameraComponent_eventGetFirstPersonCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::AlsCameraComponent_eventGetFirstPersonCameraLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics
	{
		struct AlsCameraComponent_eventGetThirdPersonPivotLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraComponent_eventGetThirdPersonPivotLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
		{ "ReturnDisplayName", "Pivot Location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraComponent, nullptr, "GetThirdPersonPivotLocation", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::AlsCameraComponent_eventGetThirdPersonPivotLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::AlsCameraComponent_eventGetThirdPersonPivotLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics
	{
		struct AlsCameraComponent_eventGetThirdPersonTraceStartLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraComponent_eventGetThirdPersonTraceStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
		{ "ReturnDisplayName", "Trace Start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraComponent, nullptr, "GetThirdPersonTraceStartLocation", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::AlsCameraComponent_eventGetThirdPersonTraceStartLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::AlsCameraComponent_eventGetThirdPersonTraceStartLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics
	{
		struct AlsCameraComponent_eventGetViewInfo_Parms
		{
			FMinimalViewInfo ViewInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::NewProp_ViewInfo = { "ViewInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraComponent_eventGetViewInfo_Parms, ViewInfo), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(0, nullptr) }; // 3100370771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::NewProp_ViewInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraComponent, nullptr, "GetViewInfo", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::AlsCameraComponent_eventGetViewInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::AlsCameraComponent_eventGetViewInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics
	{
		struct AlsCameraComponent_eventSetRightShoulder_Parms
		{
			bool bNewRightShoulder;
		};
		static void NewProp_bNewRightShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRightShoulder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::NewProp_bNewRightShoulder_SetBit(void* Obj)
	{
		((AlsCameraComponent_eventSetRightShoulder_Parms*)Obj)->bNewRightShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::NewProp_bNewRightShoulder = { "bNewRightShoulder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCameraComponent_eventSetRightShoulder_Parms), &Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::NewProp_bNewRightShoulder_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::NewProp_bNewRightShoulder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraComponent, nullptr, "SetRightShoulder", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::AlsCameraComponent_eventSetRightShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::AlsCameraComponent_eventSetRightShoulder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsCameraComponent);
	UClass* Z_Construct_UClass_UAlsCameraComponent_NoRegister()
	{
		return UAlsCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAlsCameraComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInstance_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimationInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousGlobalTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousGlobalTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotLagLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotLagLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBasePrimitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementBasePrimitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBaseBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MovementBaseBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMovementBaseRelativeLagLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotMovementBaseRelativeLagLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMovementBaseRelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraMovementBaseRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistanceRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRightShoulder_MetaData[];
#endif
		static void NewProp_bRightShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightShoulder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsCameraComponent_GetFirstPersonCameraLocation, "GetFirstPersonCameraLocation" }, // 1286910771
		{ &Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonPivotLocation, "GetThirdPersonPivotLocation" }, // 1800438553
		{ &Z_Construct_UFunction_UAlsCameraComponent_GetThirdPersonTraceStartLocation, "GetThirdPersonTraceStartLocation" }, // 1991623787
		{ &Z_Construct_UFunction_UAlsCameraComponent_GetViewInfo, "GetViewInfo" }, // 2498144896
		{ &Z_Construct_UFunction_UAlsCameraComponent_SetRightShoulder, "SetRightShoulder" }, // 1559695568
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "ComponentTick Clothing Physics MasterPoseComponent Collision AnimationRig Lighting Deformer Rendering PathTracing HLOD Navigation VirtualTexture SkeletalMesh LeaderPoseComponent Optimization LOD MaterialParameters TextureStreaming Mobile RayTracing Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "AlsCameraComponent.h" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, Settings), Z_Construct_UClass_UAlsCameraSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Settings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PostProcessWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PostProcessWeight = { "PostProcessWeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, PostProcessWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PostProcessWeight_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PostProcessWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_AnimationInstance_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_AnimationInstance = { "AnimationInstance", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, AnimationInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_AnimationInstance_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_AnimationInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PreviousGlobalTimeDilation_MetaData[] = {
		{ "Category", "State" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PreviousGlobalTimeDilation = { "PreviousGlobalTimeDilation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, PreviousGlobalTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PreviousGlobalTimeDilation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PreviousGlobalTimeDilation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotTargetLocation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotTargetLocation = { "PivotTargetLocation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, PivotTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotTargetLocation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotTargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLagLocation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLagLocation = { "PivotLagLocation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, PivotLagLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLagLocation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLagLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLocation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLocation = { "PivotLocation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, PivotLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLocation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraLocation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraLocation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraRotation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraRotation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBasePrimitive_MetaData[] = {
		{ "Category", "State" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBasePrimitive = { "MovementBasePrimitive", nullptr, (EPropertyFlags)0x002408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, MovementBasePrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBasePrimitive_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBasePrimitive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBaseBoneName_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBaseBoneName = { "MovementBaseBoneName", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, MovementBaseBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBaseBoneName_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBaseBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotMovementBaseRelativeLagLocation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotMovementBaseRelativeLagLocation = { "PivotMovementBaseRelativeLagLocation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, PivotMovementBaseRelativeLagLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotMovementBaseRelativeLagLocation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotMovementBaseRelativeLagLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraMovementBaseRelativeRotation_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraMovementBaseRelativeRotation = { "CameraMovementBaseRelativeRotation", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, CameraMovementBaseRelativeRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraMovementBaseRelativeRotation_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraMovementBaseRelativeRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_TraceDistanceRatio_MetaData[] = {
		{ "Category", "State" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "%" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_TraceDistanceRatio = { "TraceDistanceRatio", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, TraceDistanceRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_TraceDistanceRatio_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_TraceDistanceRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraFov_MetaData[] = {
		{ "Category", "State" },
		{ "ClampMax", "360" },
		{ "ClampMin", "5" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraFov = { "CameraFov", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraComponent, CameraFov), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraFov_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraFov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_bRightShoulder_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_bRightShoulder_SetBit(void* Obj)
	{
		((UAlsCameraComponent*)Obj)->bRightShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_bRightShoulder = { "bRightShoulder", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCameraComponent), &Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_bRightShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_bRightShoulder_MetaData), Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_bRightShoulder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PostProcessWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_AnimationInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PreviousGlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLagLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBasePrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_MovementBaseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_PivotMovementBaseRelativeLagLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraMovementBaseRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_TraceDistanceRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_CameraFov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraComponent_Statics::NewProp_bRightShoulder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsCameraComponent_Statics::ClassParams = {
		&UAlsCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAlsCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsCameraComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UAlsCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsCameraComponent.OuterSingleton, Z_Construct_UClass_UAlsCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsCameraComponent.OuterSingleton;
	}
	template<> ALSCAMERA_API UClass* StaticClass<UAlsCameraComponent>()
	{
		return UAlsCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsCameraComponent);
	UAlsCameraComponent::~UAlsCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsCameraComponent, UAlsCameraComponent::StaticClass, TEXT("UAlsCameraComponent"), &Z_Registration_Info_UClass_UAlsCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsCameraComponent), 3325840562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_3574669071(TEXT("/Script/ALSCamera"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
