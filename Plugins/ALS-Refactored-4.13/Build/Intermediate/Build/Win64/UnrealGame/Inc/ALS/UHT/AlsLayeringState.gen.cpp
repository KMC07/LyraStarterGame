// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsLayeringState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsLayeringState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLayeringState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsLayeringState;
class UScriptStruct* FAlsLayeringState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsLayeringState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsLayeringState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsLayeringState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsLayeringState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsLayeringState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsLayeringState>()
{
	return FAlsLayeringState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsLayeringState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadAdditiveBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadAdditiveBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadSlotBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadSlotBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLeftBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLeftBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLeftAdditiveBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLeftAdditiveBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLeftSlotBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLeftSlotBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLeftLocalSpaceBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLeftLocalSpaceBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLeftMeshSpaceBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLeftMeshSpaceBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmRightBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmRightBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmRightAdditiveBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmRightAdditiveBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmRightSlotBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmRightSlotBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmRightLocalSpaceBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmRightLocalSpaceBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmRightMeshSpaceBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmRightMeshSpaceBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandLeftBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandLeftBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandRightBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandRightBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineAdditiveBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineAdditiveBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineSlotBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineSlotBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisSlotBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisSlotBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegsBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LegsBlendAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegsSlotBlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LegsSlotBlendAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsLayeringState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadBlendAmount = { "HeadBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, HeadBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadAdditiveBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadAdditiveBlendAmount = { "HeadAdditiveBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, HeadAdditiveBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadAdditiveBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadAdditiveBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadSlotBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadSlotBlendAmount = { "HeadSlotBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, HeadSlotBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadSlotBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadSlotBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftBlendAmount = { "ArmLeftBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmLeftBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftAdditiveBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftAdditiveBlendAmount = { "ArmLeftAdditiveBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmLeftAdditiveBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftAdditiveBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftAdditiveBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftSlotBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftSlotBlendAmount = { "ArmLeftSlotBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmLeftSlotBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftSlotBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftSlotBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftLocalSpaceBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftLocalSpaceBlendAmount = { "ArmLeftLocalSpaceBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmLeftLocalSpaceBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftLocalSpaceBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftLocalSpaceBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftMeshSpaceBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftMeshSpaceBlendAmount = { "ArmLeftMeshSpaceBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmLeftMeshSpaceBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftMeshSpaceBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftMeshSpaceBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightBlendAmount = { "ArmRightBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmRightBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightAdditiveBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightAdditiveBlendAmount = { "ArmRightAdditiveBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmRightAdditiveBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightAdditiveBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightAdditiveBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightSlotBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightSlotBlendAmount = { "ArmRightSlotBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmRightSlotBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightSlotBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightSlotBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightLocalSpaceBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightLocalSpaceBlendAmount = { "ArmRightLocalSpaceBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmRightLocalSpaceBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightLocalSpaceBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightLocalSpaceBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightMeshSpaceBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightMeshSpaceBlendAmount = { "ArmRightMeshSpaceBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, ArmRightMeshSpaceBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightMeshSpaceBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightMeshSpaceBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandLeftBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandLeftBlendAmount = { "HandLeftBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, HandLeftBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandLeftBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandLeftBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandRightBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandRightBlendAmount = { "HandRightBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, HandRightBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandRightBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandRightBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineBlendAmount = { "SpineBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, SpineBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineAdditiveBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineAdditiveBlendAmount = { "SpineAdditiveBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, SpineAdditiveBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineAdditiveBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineAdditiveBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineSlotBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineSlotBlendAmount = { "SpineSlotBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, SpineSlotBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineSlotBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineSlotBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisBlendAmount = { "PelvisBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, PelvisBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisSlotBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisSlotBlendAmount = { "PelvisSlotBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, PelvisSlotBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisSlotBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisSlotBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsBlendAmount = { "LegsBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, LegsBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsBlendAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsSlotBlendAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsLayeringState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsSlotBlendAmount = { "LegsSlotBlendAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsLayeringState, LegsSlotBlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsSlotBlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsSlotBlendAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsLayeringState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadAdditiveBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HeadSlotBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftAdditiveBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftSlotBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftLocalSpaceBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmLeftMeshSpaceBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightAdditiveBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightSlotBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightLocalSpaceBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_ArmRightMeshSpaceBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandLeftBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_HandRightBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineAdditiveBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_SpineSlotBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_PelvisSlotBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsBlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewProp_LegsSlotBlendAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsLayeringState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsLayeringState",
		Z_Construct_UScriptStruct_FAlsLayeringState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::PropPointers),
		sizeof(FAlsLayeringState),
		alignof(FAlsLayeringState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsLayeringState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsLayeringState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsLayeringState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsLayeringState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsLayeringState.InnerSingleton, Z_Construct_UScriptStruct_FAlsLayeringState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsLayeringState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLayeringState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLayeringState_h_Statics::ScriptStructInfo[] = {
		{ FAlsLayeringState::StaticStruct, Z_Construct_UScriptStruct_FAlsLayeringState_Statics::NewStructOps, TEXT("AlsLayeringState"), &Z_Registration_Info_UScriptStruct_AlsLayeringState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsLayeringState), 1865029955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLayeringState_h_2484771959(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLayeringState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsLayeringState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
