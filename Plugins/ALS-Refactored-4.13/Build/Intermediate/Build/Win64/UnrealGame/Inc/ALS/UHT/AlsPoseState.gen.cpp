// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsPoseState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsPoseState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsPoseState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsPoseState;
class UScriptStruct* FAlsPoseState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsPoseState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsPoseState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsPoseState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsPoseState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsPoseState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsPoseState>()
{
	return FAlsPoseState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsPoseState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundedAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAirAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovingAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitWalkingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitWalkingAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitRunningAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitRunningAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitSprintingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitSprintingAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnweightedGaitAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnweightedGaitAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnweightedGaitWalkingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnweightedGaitWalkingAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnweightedGaitRunningAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnweightedGaitRunningAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnweightedGaitSprintingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnweightedGaitSprintingAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsPoseState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GroundedAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GroundedAmount = { "GroundedAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, GroundedAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GroundedAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GroundedAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_InAirAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_InAirAmount = { "InAirAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, InAirAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_InAirAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_InAirAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_StandingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_StandingAmount = { "StandingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, StandingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_StandingAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_StandingAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_CrouchingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_CrouchingAmount = { "CrouchingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, CrouchingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_CrouchingAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_CrouchingAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_MovingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_MovingAmount = { "MovingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, MovingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_MovingAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_MovingAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitAmount = { "GaitAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, GaitAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitWalkingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitWalkingAmount = { "GaitWalkingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, GaitWalkingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitWalkingAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitWalkingAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitRunningAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitRunningAmount = { "GaitRunningAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, GaitRunningAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitRunningAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitRunningAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitSprintingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitSprintingAmount = { "GaitSprintingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, GaitSprintingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitSprintingAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitSprintingAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitAmount = { "UnweightedGaitAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, UnweightedGaitAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitWalkingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitWalkingAmount = { "UnweightedGaitWalkingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, UnweightedGaitWalkingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitWalkingAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitWalkingAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitRunningAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitRunningAmount = { "UnweightedGaitRunningAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, UnweightedGaitRunningAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitRunningAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitRunningAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitSprintingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsPoseState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitSprintingAmount = { "UnweightedGaitSprintingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsPoseState, UnweightedGaitSprintingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitSprintingAmount_MetaData), Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitSprintingAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsPoseState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GroundedAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_InAirAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_StandingAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_CrouchingAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_MovingAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitWalkingAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitRunningAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_GaitSprintingAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitWalkingAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitRunningAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewProp_UnweightedGaitSprintingAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsPoseState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsPoseState",
		Z_Construct_UScriptStruct_FAlsPoseState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::PropPointers),
		sizeof(FAlsPoseState),
		alignof(FAlsPoseState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsPoseState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsPoseState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsPoseState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsPoseState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsPoseState.InnerSingleton, Z_Construct_UScriptStruct_FAlsPoseState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsPoseState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsPoseState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsPoseState_h_Statics::ScriptStructInfo[] = {
		{ FAlsPoseState::StaticStruct, Z_Construct_UScriptStruct_FAlsPoseState_Statics::NewStructOps, TEXT("AlsPoseState"), &Z_Registration_Info_UScriptStruct_AlsPoseState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsPoseState), 738530905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsPoseState_h_544724109(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsPoseState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsPoseState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
