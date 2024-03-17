// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Utility/AlsMath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsMath() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsMath();
	ALS_API UClass* Z_Construct_UClass_UAlsMath_NoRegister();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsMovementDirection();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsSpringFloatState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsSpringVectorState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsSpringFloatState;
class UScriptStruct* FAlsSpringFloatState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsSpringFloatState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsSpringFloatState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsSpringFloatState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsSpringFloatState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsSpringFloatState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsSpringFloatState>()
{
	return FAlsSpringFloatState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStateValid_MetaData[];
#endif
		static void NewProp_bStateValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStateValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsSpringFloatState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpringFloatState, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_PreviousTarget_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpringFloatState, PreviousTarget), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_PreviousTarget_MetaData), Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_PreviousTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_bStateValid_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_bStateValid_SetBit(void* Obj)
	{
		((FAlsSpringFloatState*)Obj)->bStateValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_bStateValid = { "bStateValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsSpringFloatState), &Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_bStateValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_bStateValid_MetaData), Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_bStateValid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_PreviousTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewProp_bStateValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsSpringFloatState",
		Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::PropPointers),
		sizeof(FAlsSpringFloatState),
		alignof(FAlsSpringFloatState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsSpringFloatState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsSpringFloatState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsSpringFloatState.InnerSingleton, Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsSpringFloatState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsSpringVectorState;
class UScriptStruct* FAlsSpringVectorState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsSpringVectorState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsSpringVectorState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsSpringVectorState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsSpringVectorState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsSpringVectorState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsSpringVectorState>()
{
	return FAlsSpringVectorState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStateValid_MetaData[];
#endif
		static void NewProp_bStateValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStateValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsSpringVectorState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpringVectorState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_PreviousTarget_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_PreviousTarget = { "PreviousTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsSpringVectorState, PreviousTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_PreviousTarget_MetaData), Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_PreviousTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_bStateValid_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_bStateValid_SetBit(void* Obj)
	{
		((FAlsSpringVectorState*)Obj)->bStateValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_bStateValid = { "bStateValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsSpringVectorState), &Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_bStateValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_bStateValid_MetaData), Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_bStateValid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_PreviousTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewProp_bStateValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsSpringVectorState",
		Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::PropPointers),
		sizeof(FAlsSpringVectorState),
		alignof(FAlsSpringVectorState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsSpringVectorState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsSpringVectorState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsSpringVectorState.InnerSingleton, Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsSpringVectorState.InnerSingleton;
	}
	DEFINE_FUNCTION(UAlsMath::execTryCalculatePoleVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ALocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectionLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAlsMath::TryCalculatePoleVector(Z_Param_Out_ALocation,Z_Param_Out_BLocation,Z_Param_Out_CLocation,Z_Param_Out_ProjectionLocation,Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execCalculateMovementDirection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardHalfAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngleThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAlsMovementDirection*)Z_Param__Result=UAlsMath::CalculateMovementDirection(Z_Param_Angle,Z_Param_ForwardHalfAngle,Z_Param_AngleThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execSlerpSkipNormalization)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_From);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAlsMath::SlerpSkipNormalization(Z_Param_Out_From,Z_Param_Out_To,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execAngleBetweenSkipNormalization)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_From);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_To);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UAlsMath::AngleBetweenSkipNormalization(Z_Param_Out_From,Z_Param_Out_To);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execPerpendicularCounterClockwiseXY)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAlsMath::PerpendicularCounterClockwiseXY(Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execPerpendicularClockwiseXY)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAlsMath::PerpendicularClockwiseXY(Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execDirectionToAngleXY)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UAlsMath::DirectionToAngleXY(Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execDirectionToAngle)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UAlsMath::DirectionToAngle(Z_Param_Out_Direction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execAngleToDirectionXY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAlsMath::AngleToDirectionXY(Z_Param_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execAngleToDirection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UAlsMath::AngleToDirection(Z_Param_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execRadianToDirectionXY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radian);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAlsMath::RadianToDirectionXY(Z_Param_Radian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execRadianToDirection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radian);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UAlsMath::RadianToDirection(Z_Param_Radian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execClampMagnitude012D)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UAlsMath::ClampMagnitude012D(Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execClampMagnitude01)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAlsMath::ClampMagnitude01(Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execSpringDampVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Target);
		P_GET_STRUCT_REF(FAlsSpringVectorState,Z_Param_Out_SpringState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampingRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetVelocityAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAlsMath::SpringDampVector(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_Out_SpringState,Z_Param_DeltaTime,Z_Param_Frequency,Z_Param_DampingRatio,Z_Param_TargetVelocityAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execSpringDampFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_STRUCT_REF(FAlsSpringFloatState,Z_Param_Out_SpringState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampingRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetVelocityAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::SpringDampFloat(Z_Param_Current,Z_Param_Target,Z_Param_Out_SpringState,Z_Param_DeltaTime,Z_Param_Frequency,Z_Param_DampingRatio,Z_Param_TargetVelocityAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execInterpolateAngleConstant)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpolationSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::InterpolateAngleConstant(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_InterpolationSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execExponentialDecayRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lambda);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UAlsMath::ExponentialDecayRotator(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_Lambda);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execDampRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Current);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Smoothing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UAlsMath::DampRotator(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_DeltaTime,Z_Param_Smoothing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execExponentialDecayAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lambda);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::ExponentialDecayAngle(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_Lambda);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execDampAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Smoothing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::DampAngle(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_Smoothing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execExponentialDecay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lambda);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::ExponentialDecay(Z_Param_DeltaTime,Z_Param_Lambda);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execDamp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Smoothing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::Damp(Z_Param_DeltaTime,Z_Param_Smoothing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execLerpRotator)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_From);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UAlsMath::LerpRotator(Z_Param_Out_From,Z_Param_Out_To,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execLerpAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::LerpAngle(Z_Param_From,Z_Param_To,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execLerpClamped)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_From);
		P_GET_PROPERTY(FFloatProperty,Z_Param_To);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::LerpClamped(Z_Param_From,Z_Param_To,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsMath::execClamp01)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsMath::Clamp01(Z_Param_Value);
		P_NATIVE_END;
	}
	void UAlsMath::StaticRegisterNativesUAlsMath()
	{
		UClass* Class = UAlsMath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AngleBetweenSkipNormalization", &UAlsMath::execAngleBetweenSkipNormalization },
			{ "AngleToDirection", &UAlsMath::execAngleToDirection },
			{ "AngleToDirectionXY", &UAlsMath::execAngleToDirectionXY },
			{ "CalculateMovementDirection", &UAlsMath::execCalculateMovementDirection },
			{ "Clamp01", &UAlsMath::execClamp01 },
			{ "ClampMagnitude01", &UAlsMath::execClampMagnitude01 },
			{ "ClampMagnitude012D", &UAlsMath::execClampMagnitude012D },
			{ "Damp", &UAlsMath::execDamp },
			{ "DampAngle", &UAlsMath::execDampAngle },
			{ "DampRotator", &UAlsMath::execDampRotator },
			{ "DirectionToAngle", &UAlsMath::execDirectionToAngle },
			{ "DirectionToAngleXY", &UAlsMath::execDirectionToAngleXY },
			{ "ExponentialDecay", &UAlsMath::execExponentialDecay },
			{ "ExponentialDecayAngle", &UAlsMath::execExponentialDecayAngle },
			{ "ExponentialDecayRotator", &UAlsMath::execExponentialDecayRotator },
			{ "InterpolateAngleConstant", &UAlsMath::execInterpolateAngleConstant },
			{ "LerpAngle", &UAlsMath::execLerpAngle },
			{ "LerpClamped", &UAlsMath::execLerpClamped },
			{ "LerpRotator", &UAlsMath::execLerpRotator },
			{ "PerpendicularClockwiseXY", &UAlsMath::execPerpendicularClockwiseXY },
			{ "PerpendicularCounterClockwiseXY", &UAlsMath::execPerpendicularCounterClockwiseXY },
			{ "RadianToDirection", &UAlsMath::execRadianToDirection },
			{ "RadianToDirectionXY", &UAlsMath::execRadianToDirectionXY },
			{ "SlerpSkipNormalization", &UAlsMath::execSlerpSkipNormalization },
			{ "SpringDampFloat", &UAlsMath::execSpringDampFloat },
			{ "SpringDampVector", &UAlsMath::execSpringDampVector },
			{ "TryCalculatePoleVector", &UAlsMath::execTryCalculatePoleVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics
	{
		struct AlsMath_eventAngleBetweenSkipNormalization_Parms
		{
			FVector From;
			FVector To;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_To;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventAngleBetweenSkipNormalization_Parms, From), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_From_MetaData), Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_From_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventAngleBetweenSkipNormalization_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_To_MetaData), Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_To_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventAngleBetweenSkipNormalization_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "From, To" },
		{ "Category", "ALS|Math|Vector" },
		{ "DisplayName", "Angle Between (Skip Normalization)" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "AngleBetweenSkipNormalization", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::AlsMath_eventAngleBetweenSkipNormalization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::AlsMath_eventAngleBetweenSkipNormalization_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics
	{
		struct AlsMath_eventAngleToDirection_Parms
		{
			float Angle;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventAngleToDirection_Parms, Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventAngleToDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "AngleToDirection", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::AlsMath_eventAngleToDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::AlsMath_eventAngleToDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_AngleToDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_AngleToDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics
	{
		struct AlsMath_eventAngleToDirectionXY_Parms
		{
			float Angle;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventAngleToDirectionXY_Parms, Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventAngleToDirectionXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "AngleToDirectionXY", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::AlsMath_eventAngleToDirectionXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::AlsMath_eventAngleToDirectionXY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_AngleToDirectionXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_AngleToDirectionXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics
	{
		struct AlsMath_eventCalculateMovementDirection_Parms
		{
			float Angle;
			float ForwardHalfAngle;
			float AngleThreshold;
			EAlsMovementDirection ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardHalfAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventCalculateMovementDirection_Parms, Angle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_ForwardHalfAngle = { "ForwardHalfAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventCalculateMovementDirection_Parms, ForwardHalfAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventCalculateMovementDirection_Parms, AngleThreshold), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventCalculateMovementDirection_Parms, ReturnValue), Z_Construct_UEnum_ALS_EAlsMovementDirection, METADATA_PARAMS(0, nullptr) }; // 3444869328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_ForwardHalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_AngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math|Input" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "CalculateMovementDirection", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::AlsMath_eventCalculateMovementDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::AlsMath_eventCalculateMovementDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_CalculateMovementDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_CalculateMovementDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_Clamp01_Statics
	{
		struct AlsMath_eventClamp01_Parms
		{
			float Value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_Clamp01_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventClamp01_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_Clamp01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventClamp01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_Clamp01_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_Clamp01_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_Clamp01_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_Clamp01_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_Clamp01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "Clamp01", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_Clamp01_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_Clamp01_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_Clamp01_Statics::AlsMath_eventClamp01_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_Clamp01_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_Clamp01_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_Clamp01_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_Clamp01_Statics::AlsMath_eventClamp01_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_Clamp01()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_Clamp01_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics
	{
		struct AlsMath_eventClampMagnitude01_Parms
		{
			FVector Vector;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventClampMagnitude01_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::NewProp_Vector_MetaData), Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::NewProp_Vector_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventClampMagnitude01_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Vector" },
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "ClampMagnitude01", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::AlsMath_eventClampMagnitude01_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::AlsMath_eventClampMagnitude01_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_ClampMagnitude01()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_ClampMagnitude01_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics
	{
		struct AlsMath_eventClampMagnitude012D_Parms
		{
			FVector2D Vector;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventClampMagnitude012D_Parms, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::NewProp_Vector_MetaData), Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::NewProp_Vector_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventClampMagnitude012D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Vector" },
		{ "Category", "ALS|Math|Vector" },
		{ "DisplayName", "Clamp Magnitude 01 2D" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "ClampMagnitude012D", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::AlsMath_eventClampMagnitude012D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::AlsMath_eventClampMagnitude012D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_ClampMagnitude012D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_ClampMagnitude012D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_Damp_Statics
	{
		struct AlsMath_eventDamp_Parms
		{
			float DeltaTime;
			float Smoothing;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothing;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_Damp_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDamp_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_Damp_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDamp_Parms, Smoothing), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_Damp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDamp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_Damp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_Damp_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_Damp_Statics::NewProp_Smoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_Damp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_Damp_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Interpolation Ammount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_Damp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "Damp", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_Damp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_Damp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_Damp_Statics::AlsMath_eventDamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_Damp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_Damp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_Damp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_Damp_Statics::AlsMath_eventDamp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_Damp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_Damp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_DampAngle_Statics
	{
		struct AlsMath_eventDampAngle_Parms
		{
			float Current;
			float Target;
			float DeltaTime;
			float Smoothing;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothing;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampAngle_Parms, Current), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampAngle_Parms, Target), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampAngle_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampAngle_Parms, Smoothing), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_DampAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_Smoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DampAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_DampAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "DampAngle", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_DampAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_DampAngle_Statics::AlsMath_eventDampAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_DampAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_DampAngle_Statics::AlsMath_eventDampAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_DampAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_DampAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_DampRotator_Statics
	{
		struct AlsMath_eventDampRotator_Parms
		{
			FRotator Current;
			FRotator Target;
			float DeltaTime;
			float Smoothing;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampRotator_Parms, Current), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Current_MetaData), Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Current_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampRotator_Parms, Target), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampRotator_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampRotator_Parms, Smoothing), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDampRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_DampRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_Smoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DampRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DampRotator_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Current, Target" },
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Rotator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_DampRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "DampRotator", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_DampRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_DampRotator_Statics::AlsMath_eventDampRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_DampRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DampRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_DampRotator_Statics::AlsMath_eventDampRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_DampRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_DampRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics
	{
		struct AlsMath_eventDirectionToAngle_Parms
		{
			FVector2D Direction;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDirectionToAngle_Parms, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDirectionToAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Direction" },
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "DirectionToAngle", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::AlsMath_eventDirectionToAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::AlsMath_eventDirectionToAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_DirectionToAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_DirectionToAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics
	{
		struct AlsMath_eventDirectionToAngleXY_Parms
		{
			FVector Direction;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDirectionToAngleXY_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::NewProp_Direction_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventDirectionToAngleXY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Direction" },
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "DirectionToAngleXY", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::AlsMath_eventDirectionToAngleXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::AlsMath_eventDirectionToAngleXY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_DirectionToAngleXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_DirectionToAngleXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics
	{
		struct AlsMath_eventExponentialDecay_Parms
		{
			float DeltaTime;
			float Lambda;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lambda;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecay_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::NewProp_Lambda = { "Lambda", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecay_Parms, Lambda), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::NewProp_Lambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Interpolation Ammount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "ExponentialDecay", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::AlsMath_eventExponentialDecay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::AlsMath_eventExponentialDecay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_ExponentialDecay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_ExponentialDecay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics
	{
		struct AlsMath_eventExponentialDecayAngle_Parms
		{
			float Current;
			float Target;
			float DeltaTime;
			float Lambda;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lambda;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayAngle_Parms, Current), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayAngle_Parms, Target), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayAngle_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_Lambda = { "Lambda", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayAngle_Parms, Lambda), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_Lambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "ExponentialDecayAngle", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::AlsMath_eventExponentialDecayAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::AlsMath_eventExponentialDecayAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics
	{
		struct AlsMath_eventExponentialDecayRotator_Parms
		{
			FRotator Current;
			FRotator Target;
			float DeltaTime;
			float Lambda;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lambda;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayRotator_Parms, Current), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Current_MetaData), Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Current_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayRotator_Parms, Target), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayRotator_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Lambda = { "Lambda", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayRotator_Parms, Lambda), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventExponentialDecayRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_Lambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Current, Target" },
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Rotator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "ExponentialDecayRotator", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::AlsMath_eventExponentialDecayRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::AlsMath_eventExponentialDecayRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics
	{
		struct AlsMath_eventInterpolateAngleConstant_Parms
		{
			float Current;
			float Target;
			float DeltaTime;
			float InterpolationSpeed;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventInterpolateAngleConstant_Parms, Current), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventInterpolateAngleConstant_Parms, Target), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventInterpolateAngleConstant_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventInterpolateAngleConstant_Parms, InterpolationSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventInterpolateAngleConstant_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_InterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "InterpolateAngleConstant", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::AlsMath_eventInterpolateAngleConstant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::AlsMath_eventInterpolateAngleConstant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_LerpAngle_Statics
	{
		struct AlsMath_eventLerpAngle_Parms
		{
			float From;
			float To;
			float Alpha;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_To;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpAngle_Parms, From), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpAngle_Parms, To), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpAngle_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Angle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "LerpAngle", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::AlsMath_eventLerpAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::AlsMath_eventLerpAngle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_LerpAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_LerpAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_LerpClamped_Statics
	{
		struct AlsMath_eventLerpClamped_Parms
		{
			float From;
			float To;
			float Alpha;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_From;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_To;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpClamped_Parms, From), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpClamped_Parms, To), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpClamped_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpClamped_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "LerpClamped", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::AlsMath_eventLerpClamped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::AlsMath_eventLerpClamped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_LerpClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_LerpClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_LerpRotator_Statics
	{
		struct AlsMath_eventLerpRotator_Parms
		{
			FRotator From;
			FRotator To;
			float Alpha;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_To;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpRotator_Parms, From), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_From_MetaData), Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_From_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpRotator_Parms, To), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_To_MetaData), Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_To_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpRotator_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventLerpRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "From, To" },
		{ "Category", "ALS|Math" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Rotator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "LerpRotator", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::AlsMath_eventLerpRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::AlsMath_eventLerpRotator_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_LerpRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_LerpRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics
	{
		struct AlsMath_eventPerpendicularClockwiseXY_Parms
		{
			FVector Vector;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventPerpendicularClockwiseXY_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::NewProp_Vector_MetaData), Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::NewProp_Vector_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventPerpendicularClockwiseXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Vector" },
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "PerpendicularClockwiseXY", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::AlsMath_eventPerpendicularClockwiseXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::AlsMath_eventPerpendicularClockwiseXY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics
	{
		struct AlsMath_eventPerpendicularCounterClockwiseXY_Parms
		{
			FVector Vector;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventPerpendicularCounterClockwiseXY_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::NewProp_Vector_MetaData), Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::NewProp_Vector_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventPerpendicularCounterClockwiseXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Vector" },
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "PerpendicularCounterClockwiseXY", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::AlsMath_eventPerpendicularCounterClockwiseXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::AlsMath_eventPerpendicularCounterClockwiseXY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics
	{
		struct AlsMath_eventRadianToDirection_Parms
		{
			float Radian;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radian;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::NewProp_Radian = { "Radian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventRadianToDirection_Parms, Radian), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventRadianToDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::NewProp_Radian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "RadianToDirection", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::AlsMath_eventRadianToDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::AlsMath_eventRadianToDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_RadianToDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_RadianToDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics
	{
		struct AlsMath_eventRadianToDirectionXY_Parms
		{
			float Radian;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radian;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::NewProp_Radian = { "Radian", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventRadianToDirectionXY_Parms, Radian), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventRadianToDirectionXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::NewProp_Radian,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math|Vector" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "RadianToDirectionXY", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::AlsMath_eventRadianToDirectionXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::AlsMath_eventRadianToDirectionXY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_RadianToDirectionXY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_RadianToDirectionXY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics
	{
		struct AlsMath_eventSlerpSkipNormalization_Parms
		{
			FVector From;
			FVector To;
			float Alpha;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_To;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSlerpSkipNormalization_Parms, From), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_From_MetaData), Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_From_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSlerpSkipNormalization_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_To_MetaData), Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_To_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSlerpSkipNormalization_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSlerpSkipNormalization_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "From, To" },
		{ "Category", "ALS|Math|Vector" },
		{ "DisplayName", "Slerp (Skip Normalization)" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "SlerpSkipNormalization", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::AlsMath_eventSlerpSkipNormalization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::AlsMath_eventSlerpSkipNormalization_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics
	{
		struct AlsMath_eventSpringDampFloat_Parms
		{
			float Current;
			float Target;
			FAlsSpringFloatState SpringState;
			float DeltaTime;
			float Frequency;
			float DampingRatio;
			float TargetVelocityAmount;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, Current), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, Target), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, SpringState), Z_Construct_UScriptStruct_FAlsSpringFloatState, METADATA_PARAMS(0, nullptr) }; // 2979361345
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_DampingRatio = { "DampingRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, DampingRatio), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, TargetVelocityAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_SpringState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_DampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_TargetVelocityAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Math" },
		{ "CPP_Default_TargetVelocityAmount", "1.000000" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "SpringDampFloat", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::AlsMath_eventSpringDampFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::AlsMath_eventSpringDampFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_SpringDampFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_SpringDampFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics
	{
		struct AlsMath_eventSpringDampVector_Parms
		{
			FVector Current;
			FVector Target;
			FAlsSpringVectorState SpringState;
			float DeltaTime;
			float Frequency;
			float DampingRatio;
			float TargetVelocityAmount;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Current_MetaData), Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Current_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Target_MetaData), Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Target_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, SpringState), Z_Construct_UScriptStruct_FAlsSpringVectorState, METADATA_PARAMS(0, nullptr) }; // 536542890
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_DampingRatio = { "DampingRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, DampingRatio), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, TargetVelocityAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventSpringDampVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_SpringState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_DampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_TargetVelocityAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Current, Target" },
		{ "Category", "ALS|Math" },
		{ "CPP_Default_TargetVelocityAmount", "1.000000" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ReturnDisplayName", "Vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "SpringDampVector", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::AlsMath_eventSpringDampVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::AlsMath_eventSpringDampVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_SpringDampVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_SpringDampVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics
	{
		struct AlsMath_eventTryCalculatePoleVector_Parms
		{
			FVector ALocation;
			FVector BLocation;
			FVector CLocation;
			FVector ProjectionLocation;
			FVector Direction;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ALocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ALocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ALocation = { "ALocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventTryCalculatePoleVector_Parms, ALocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ALocation_MetaData), Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ALocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_BLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_BLocation = { "BLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventTryCalculatePoleVector_Parms, BLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_BLocation_MetaData), Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_BLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_CLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_CLocation = { "CLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventTryCalculatePoleVector_Parms, CLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_CLocation_MetaData), Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_CLocation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ProjectionLocation = { "ProjectionLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventTryCalculatePoleVector_Parms, ProjectionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsMath_eventTryCalculatePoleVector_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AlsMath_eventTryCalculatePoleVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsMath_eventTryCalculatePoleVector_Parms), &Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ALocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_BLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_CLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ProjectionLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ALocation, BLocation, CLocation" },
		{ "Category", "ALS|Math|Input" },
		{ "Comment", "// Calculates the projection location and direction of the perpendicular to AC through B.\n" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
		{ "ToolTip", "Calculates the projection location and direction of the perpendicular to AC through B." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsMath, nullptr, "TryCalculatePoleVector", nullptr, nullptr, Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::AlsMath_eventTryCalculatePoleVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::AlsMath_eventTryCalculatePoleVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsMath);
	UClass* Z_Construct_UClass_UAlsMath_NoRegister()
	{
		return UAlsMath::StaticClass();
	}
	struct Z_Construct_UClass_UAlsMath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsMath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMath_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsMath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsMath_AngleBetweenSkipNormalization, "AngleBetweenSkipNormalization" }, // 3792756587
		{ &Z_Construct_UFunction_UAlsMath_AngleToDirection, "AngleToDirection" }, // 802065974
		{ &Z_Construct_UFunction_UAlsMath_AngleToDirectionXY, "AngleToDirectionXY" }, // 212662062
		{ &Z_Construct_UFunction_UAlsMath_CalculateMovementDirection, "CalculateMovementDirection" }, // 1835401750
		{ &Z_Construct_UFunction_UAlsMath_Clamp01, "Clamp01" }, // 923963584
		{ &Z_Construct_UFunction_UAlsMath_ClampMagnitude01, "ClampMagnitude01" }, // 3360712345
		{ &Z_Construct_UFunction_UAlsMath_ClampMagnitude012D, "ClampMagnitude012D" }, // 1945757977
		{ &Z_Construct_UFunction_UAlsMath_Damp, "Damp" }, // 1289569126
		{ &Z_Construct_UFunction_UAlsMath_DampAngle, "DampAngle" }, // 4232459901
		{ &Z_Construct_UFunction_UAlsMath_DampRotator, "DampRotator" }, // 2251296734
		{ &Z_Construct_UFunction_UAlsMath_DirectionToAngle, "DirectionToAngle" }, // 1284845458
		{ &Z_Construct_UFunction_UAlsMath_DirectionToAngleXY, "DirectionToAngleXY" }, // 3768489013
		{ &Z_Construct_UFunction_UAlsMath_ExponentialDecay, "ExponentialDecay" }, // 1571792921
		{ &Z_Construct_UFunction_UAlsMath_ExponentialDecayAngle, "ExponentialDecayAngle" }, // 1253770435
		{ &Z_Construct_UFunction_UAlsMath_ExponentialDecayRotator, "ExponentialDecayRotator" }, // 2122821043
		{ &Z_Construct_UFunction_UAlsMath_InterpolateAngleConstant, "InterpolateAngleConstant" }, // 536597747
		{ &Z_Construct_UFunction_UAlsMath_LerpAngle, "LerpAngle" }, // 3352488895
		{ &Z_Construct_UFunction_UAlsMath_LerpClamped, "LerpClamped" }, // 584817786
		{ &Z_Construct_UFunction_UAlsMath_LerpRotator, "LerpRotator" }, // 1996249675
		{ &Z_Construct_UFunction_UAlsMath_PerpendicularClockwiseXY, "PerpendicularClockwiseXY" }, // 1847954201
		{ &Z_Construct_UFunction_UAlsMath_PerpendicularCounterClockwiseXY, "PerpendicularCounterClockwiseXY" }, // 1606741701
		{ &Z_Construct_UFunction_UAlsMath_RadianToDirection, "RadianToDirection" }, // 994073568
		{ &Z_Construct_UFunction_UAlsMath_RadianToDirectionXY, "RadianToDirectionXY" }, // 1621585106
		{ &Z_Construct_UFunction_UAlsMath_SlerpSkipNormalization, "SlerpSkipNormalization" }, // 2294276020
		{ &Z_Construct_UFunction_UAlsMath_SpringDampFloat, "SpringDampFloat" }, // 2732909211
		{ &Z_Construct_UFunction_UAlsMath_SpringDampVector, "SpringDampVector" }, // 3174459761
		{ &Z_Construct_UFunction_UAlsMath_TryCalculatePoleVector, "TryCalculatePoleVector" }, // 538940651
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMath_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/AlsMath.h" },
		{ "ModuleRelativePath", "Public/Utility/AlsMath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsMath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsMath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsMath_Statics::ClassParams = {
		&UAlsMath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMath_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsMath_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAlsMath()
	{
		if (!Z_Registration_Info_UClass_UAlsMath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsMath.OuterSingleton, Z_Construct_UClass_UAlsMath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsMath.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsMath>()
	{
		return UAlsMath::StaticClass();
	}
	UAlsMath::UAlsMath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsMath);
	UAlsMath::~UAlsMath() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_Statics::ScriptStructInfo[] = {
		{ FAlsSpringFloatState::StaticStruct, Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics::NewStructOps, TEXT("AlsSpringFloatState"), &Z_Registration_Info_UScriptStruct_AlsSpringFloatState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsSpringFloatState), 2979361345U) },
		{ FAlsSpringVectorState::StaticStruct, Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics::NewStructOps, TEXT("AlsSpringVectorState"), &Z_Registration_Info_UScriptStruct_AlsSpringVectorState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsSpringVectorState), 536542890U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsMath, UAlsMath::StaticClass, TEXT("UAlsMath"), &Z_Registration_Info_UClass_UAlsMath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsMath), 766361812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_537722242(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
