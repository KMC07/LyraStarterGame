// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsLocomotionAnimationState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsLocomotionAnimationState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLocomotionAnimationState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState;
class UScriptStruct* FAlsLocomotionAnimationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsLocomotionAnimationState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsLocomotionAnimationState>()
{
	return FAlsLocomotionAnimationState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasInput_MetaData[];
#endif
		static void NewProp_bHasInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBrakingDeceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBrakingDeceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkableFloorZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkableFloorZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoving_MetaData[];
#endif
		static void NewProp_bMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMovingSmooth_MetaData[];
#endif
		static void NewProp_bMovingSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovingSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationQuaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationQuaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsLocomotionAnimationState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bHasInput_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bHasInput_SetBit(void* Obj)
	{
		((FAlsLocomotionAnimationState*)Obj)->bHasInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bHasInput = { "bHasInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLocomotionAnimationState), &Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bHasInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bHasInput_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bHasInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_InputYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_InputYawAngle = { "InputYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, InputYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_InputYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_InputYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Speed_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_VelocityYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_VelocityYawAngle = { "VelocityYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, VelocityYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_VelocityYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_VelocityYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Acceleration_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Acceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, MaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxAcceleration_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxBrakingDeceleration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxBrakingDeceleration = { "MaxBrakingDeceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, MaxBrakingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxBrakingDeceleration_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxBrakingDeceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_WalkableFloorZ_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_WalkableFloorZ = { "WalkableFloorZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, WalkableFloorZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_WalkableFloorZ_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_WalkableFloorZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMoving_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMoving_SetBit(void* Obj)
	{
		((FAlsLocomotionAnimationState*)Obj)->bMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMoving = { "bMoving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLocomotionAnimationState), &Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMoving_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMovingSmooth_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMovingSmooth_SetBit(void* Obj)
	{
		((FAlsLocomotionAnimationState*)Obj)->bMovingSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMovingSmooth = { "bMovingSmooth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLocomotionAnimationState), &Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMovingSmooth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMovingSmooth_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMovingSmooth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_TargetYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_TargetYawAngle = { "TargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, TargetYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_TargetYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_TargetYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_RotationQuaternion_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_RotationQuaternion = { "RotationQuaternion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, RotationQuaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_RotationQuaternion_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_RotationQuaternion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, YawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_YawSpeed_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_YawSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleRadius_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionAnimationState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionAnimationState, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleHalfHeight_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleHalfHeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bHasInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_InputYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_VelocityYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_MaxBrakingDeceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_WalkableFloorZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_bMovingSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_TargetYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_RotationQuaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_YawSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewProp_CapsuleHalfHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsLocomotionAnimationState",
		Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::PropPointers),
		sizeof(FAlsLocomotionAnimationState),
		alignof(FAlsLocomotionAnimationState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsLocomotionAnimationState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState.InnerSingleton, Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionAnimationState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionAnimationState_h_Statics::ScriptStructInfo[] = {
		{ FAlsLocomotionAnimationState::StaticStruct, Z_Construct_UScriptStruct_FAlsLocomotionAnimationState_Statics::NewStructOps, TEXT("AlsLocomotionAnimationState"), &Z_Registration_Info_UScriptStruct_AlsLocomotionAnimationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsLocomotionAnimationState), 850337599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionAnimationState_h_1064799668(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionAnimationState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionAnimationState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
