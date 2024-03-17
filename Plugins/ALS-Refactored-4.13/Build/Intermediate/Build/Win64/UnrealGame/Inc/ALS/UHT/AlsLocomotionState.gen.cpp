// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsLocomotionState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsLocomotionState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLocomotionState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsLocomotionState;
class UScriptStruct* FAlsLocomotionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsLocomotionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsLocomotionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsLocomotionState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsLocomotionState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsLocomotionState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsLocomotionState>()
{
	return FAlsLocomotionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsLocomotionState_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpeed_MetaData[];
#endif
		static void NewProp_bHasSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoving_MetaData[];
#endif
		static void NewProp_bMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotationTowardsLastInputDirectionBlocked_MetaData[];
#endif
		static void NewProp_bRotationTowardsLastInputDirectionBlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationTowardsLastInputDirectionBlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewRelativeTargetYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewRelativeTargetYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothTargetYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothTargetYawAngle;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsLocomotionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasInput_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasInput_SetBit(void* Obj)
	{
		((FAlsLocomotionState*)Obj)->bHasInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasInput = { "bHasInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLocomotionState), &Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasInput_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_InputYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_InputYawAngle = { "InputYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, InputYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_InputYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_InputYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasSpeed_SetBit(void* Obj)
	{
		((FAlsLocomotionState*)Obj)->bHasSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasSpeed = { "bHasSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLocomotionState), &Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasSpeed_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Speed_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousVelocity_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousVelocity = { "PreviousVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, PreviousVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousVelocity_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_VelocityYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_VelocityYawAngle = { "VelocityYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, VelocityYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_VelocityYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_VelocityYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Acceleration_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Acceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bMoving_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bMoving_SetBit(void* Obj)
	{
		((FAlsLocomotionState*)Obj)->bMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bMoving = { "bMoving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLocomotionState), &Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bMoving_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bRotationTowardsLastInputDirectionBlocked_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bRotationTowardsLastInputDirectionBlocked_SetBit(void* Obj)
	{
		((FAlsLocomotionState*)Obj)->bRotationTowardsLastInputDirectionBlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bRotationTowardsLastInputDirectionBlocked = { "bRotationTowardsLastInputDirectionBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsLocomotionState), &Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bRotationTowardsLastInputDirectionBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bRotationTowardsLastInputDirectionBlocked_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bRotationTowardsLastInputDirectionBlocked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_TargetYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_TargetYawAngle = { "TargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, TargetYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_TargetYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_TargetYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_ViewRelativeTargetYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_ViewRelativeTargetYawAngle = { "ViewRelativeTargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, ViewRelativeTargetYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_ViewRelativeTargetYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_ViewRelativeTargetYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_SmoothTargetYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "// Used for extra smooth actor rotation, in other cases equal to the regular target yaw angle.\n" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
		{ "ToolTip", "Used for extra smooth actor rotation, in other cases equal to the regular target yaw angle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_SmoothTargetYawAngle = { "SmoothTargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, SmoothTargetYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_SmoothTargetYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_SmoothTargetYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_RotationQuaternion_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_RotationQuaternion = { "RotationQuaternion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, RotationQuaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_RotationQuaternion_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_RotationQuaternion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousYawAngle = { "PreviousYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, PreviousYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/State/AlsLocomotionState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLocomotionState, YawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_YawSpeed_MetaData), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_YawSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_InputYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bHasSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_VelocityYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_bRotationTowardsLastInputDirectionBlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_TargetYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_ViewRelativeTargetYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_SmoothTargetYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_RotationQuaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_PreviousYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewProp_YawSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsLocomotionState",
		Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::PropPointers),
		sizeof(FAlsLocomotionState),
		alignof(FAlsLocomotionState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsLocomotionState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsLocomotionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsLocomotionState.InnerSingleton, Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsLocomotionState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionState_h_Statics::ScriptStructInfo[] = {
		{ FAlsLocomotionState::StaticStruct, Z_Construct_UScriptStruct_FAlsLocomotionState_Statics::NewStructOps, TEXT("AlsLocomotionState"), &Z_Registration_Info_UScriptStruct_AlsLocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsLocomotionState), 1854894870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionState_h_3353927529(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLocomotionState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
