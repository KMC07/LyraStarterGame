// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsGroundedState.h"
#include "ALS/Public/State/AlsMovementDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsGroundedState() {}
// Cross Module References
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsHipsDirection();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGroundedState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementDirectionCache();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsVelocityBlendState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsHipsDirection;
	static UEnum* EAlsHipsDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsHipsDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsHipsDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsHipsDirection, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsHipsDirection"));
		}
		return Z_Registration_Info_UEnum_EAlsHipsDirection.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsHipsDirection>()
	{
		return EAlsHipsDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::Enumerators[] = {
		{ "EAlsHipsDirection::Forward", (int64)EAlsHipsDirection::Forward },
		{ "EAlsHipsDirection::Backward", (int64)EAlsHipsDirection::Backward },
		{ "EAlsHipsDirection::LeftForward", (int64)EAlsHipsDirection::LeftForward },
		{ "EAlsHipsDirection::LeftBackward", (int64)EAlsHipsDirection::LeftBackward },
		{ "EAlsHipsDirection::RightForward", (int64)EAlsHipsDirection::RightForward },
		{ "EAlsHipsDirection::RightBackward", (int64)EAlsHipsDirection::RightBackward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::Enum_MetaDataParams[] = {
		{ "Backward.Name", "EAlsHipsDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.Name", "EAlsHipsDirection::Forward" },
		{ "LeftBackward.Name", "EAlsHipsDirection::LeftBackward" },
		{ "LeftForward.Name", "EAlsHipsDirection::LeftForward" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
		{ "RightBackward.Name", "EAlsHipsDirection::RightBackward" },
		{ "RightForward.Name", "EAlsHipsDirection::RightForward" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsHipsDirection",
		"EAlsHipsDirection",
		Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsHipsDirection()
	{
		if (!Z_Registration_Info_UEnum_EAlsHipsDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsHipsDirection.InnerSingleton, Z_Construct_UEnum_ALS_EAlsHipsDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsHipsDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsVelocityBlendState;
class UScriptStruct* FAlsVelocityBlendState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsVelocityBlendState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsVelocityBlendState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsVelocityBlendState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsVelocityBlendState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsVelocityBlendState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsVelocityBlendState>()
{
	return FAlsVelocityBlendState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitializationRequired_MetaData[];
#endif
		static void NewProp_bReinitializationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsVelocityBlendState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_bReinitializationRequired_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_bReinitializationRequired_SetBit(void* Obj)
	{
		((FAlsVelocityBlendState*)Obj)->bReinitializationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_bReinitializationRequired = { "bReinitializationRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsVelocityBlendState), &Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_bReinitializationRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_bReinitializationRequired_MetaData), Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_bReinitializationRequired_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_ForwardAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_ForwardAmount = { "ForwardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsVelocityBlendState, ForwardAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_ForwardAmount_MetaData), Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_ForwardAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_BackwardAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_BackwardAmount = { "BackwardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsVelocityBlendState, BackwardAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_BackwardAmount_MetaData), Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_BackwardAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_LeftAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_LeftAmount = { "LeftAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsVelocityBlendState, LeftAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_LeftAmount_MetaData), Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_LeftAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_RightAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_RightAmount = { "RightAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsVelocityBlendState, RightAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_RightAmount_MetaData), Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_RightAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_bReinitializationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_ForwardAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_BackwardAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_LeftAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewProp_RightAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsVelocityBlendState",
		Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::PropPointers),
		sizeof(FAlsVelocityBlendState),
		alignof(FAlsVelocityBlendState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsVelocityBlendState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsVelocityBlendState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsVelocityBlendState.InnerSingleton, Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsVelocityBlendState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState;
class UScriptStruct* FAlsRotationYawOffsetsState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRotationYawOffsetsState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRotationYawOffsetsState>()
{
	return FAlsRotationYawOffsetsState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRotationYawOffsetsState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_ForwardAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_ForwardAngle = { "ForwardAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotationYawOffsetsState, ForwardAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_ForwardAngle_MetaData), Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_ForwardAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_BackwardAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_BackwardAngle = { "BackwardAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotationYawOffsetsState, BackwardAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_BackwardAngle_MetaData), Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_BackwardAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_LeftAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_LeftAngle = { "LeftAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotationYawOffsetsState, LeftAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_LeftAngle_MetaData), Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_LeftAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_RightAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_RightAngle = { "RightAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotationYawOffsetsState, RightAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_RightAngle_MetaData), Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_RightAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_ForwardAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_BackwardAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_LeftAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewProp_RightAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsRotationYawOffsetsState",
		Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::PropPointers),
		sizeof(FAlsRotationYawOffsetsState),
		alignof(FAlsRotationYawOffsetsState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState.InnerSingleton, Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsGroundedState;
class UScriptStruct* FAlsGroundedState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsGroundedState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsGroundedState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsGroundedState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsGroundedState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsGroundedState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsGroundedState>()
{
	return FAlsGroundedState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsGroundedState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_HipsDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipsDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HipsDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipsDirectionLockAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HipsDirectionLockAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivotActivationRequested_MetaData[];
#endif
		static void NewProp_bPivotActivationRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotActivationRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivotActive_MetaData[];
#endif
		static void NewProp_bPivotActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationYawOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationYawOffsets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAccelerationAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintAccelerationAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintBlockAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintBlockAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkRunBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkRunBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrideBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsGroundedState>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirection_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirection = { "HipsDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, HipsDirection), Z_Construct_UEnum_ALS_EAlsHipsDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirection_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirection_MetaData) }; // 3428037698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirectionLockAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirectionLockAmount = { "HipsDirectionLockAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, HipsDirectionLockAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirectionLockAmount_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirectionLockAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActivationRequested_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActivationRequested_SetBit(void* Obj)
	{
		((FAlsGroundedState*)Obj)->bPivotActivationRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActivationRequested = { "bPivotActivationRequested", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsGroundedState), &Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActivationRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActivationRequested_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActivationRequested_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActive_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActive_SetBit(void* Obj)
	{
		((FAlsGroundedState*)Obj)->bPivotActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActive = { "bPivotActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsGroundedState), &Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActive_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, MovementDirection), Z_Construct_UScriptStruct_FAlsMovementDirectionCache, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_MovementDirection_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_MovementDirection_MetaData) }; // 452984255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_VelocityBlend_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, VelocityBlend), Z_Construct_UScriptStruct_FAlsVelocityBlendState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_VelocityBlend_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_VelocityBlend_MetaData) }; // 1922272722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_RotationYawOffsets_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_RotationYawOffsets = { "RotationYawOffsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, RotationYawOffsets), Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_RotationYawOffsets_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_RotationYawOffsets_MetaData) }; // 1607613645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintTime_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintTime = { "SprintTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, SprintTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintTime_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintAccelerationAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintAccelerationAmount = { "SprintAccelerationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, SprintAccelerationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintAccelerationAmount_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintAccelerationAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintBlockAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintBlockAmount = { "SprintBlockAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, SprintBlockAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintBlockAmount_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintBlockAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_WalkRunBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_WalkRunBlendAmount = { "WalkRunBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, WalkRunBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_WalkRunBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_WalkRunBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StrideBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StrideBlendAmount = { "StrideBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, StrideBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StrideBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StrideBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StandingPlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StandingPlayRate = { "StandingPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, StandingPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StandingPlayRate_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StandingPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_CrouchingPlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsGroundedState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_CrouchingPlayRate = { "CrouchingPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGroundedState, CrouchingPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_CrouchingPlayRate_MetaData), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_CrouchingPlayRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsGroundedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_HipsDirectionLockAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActivationRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_bPivotActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_VelocityBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_RotationYawOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintAccelerationAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_SprintBlockAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_WalkRunBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StrideBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_StandingPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewProp_CrouchingPlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsGroundedState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsGroundedState",
		Z_Construct_UScriptStruct_FAlsGroundedState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::PropPointers),
		sizeof(FAlsGroundedState),
		alignof(FAlsGroundedState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsGroundedState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGroundedState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsGroundedState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsGroundedState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsGroundedState.InnerSingleton, Z_Construct_UScriptStruct_FAlsGroundedState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsGroundedState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_Statics::EnumInfo[] = {
		{ EAlsHipsDirection_StaticEnum, TEXT("EAlsHipsDirection"), &Z_Registration_Info_UEnum_EAlsHipsDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3428037698U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_Statics::ScriptStructInfo[] = {
		{ FAlsVelocityBlendState::StaticStruct, Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics::NewStructOps, TEXT("AlsVelocityBlendState"), &Z_Registration_Info_UScriptStruct_AlsVelocityBlendState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsVelocityBlendState), 1922272722U) },
		{ FAlsRotationYawOffsetsState::StaticStruct, Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics::NewStructOps, TEXT("AlsRotationYawOffsetsState"), &Z_Registration_Info_UScriptStruct_AlsRotationYawOffsetsState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRotationYawOffsetsState), 1607613645U) },
		{ FAlsGroundedState::StaticStruct, Z_Construct_UScriptStruct_FAlsGroundedState_Statics::NewStructOps, TEXT("AlsGroundedState"), &Z_Registration_Info_UScriptStruct_AlsGroundedState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsGroundedState), 18716021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_4029363136(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
