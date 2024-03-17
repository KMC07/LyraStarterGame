// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsViewState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsViewState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState;
class UScriptStruct* FAlsViewNetworkSmoothingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsViewNetworkSmoothingState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsViewNetworkSmoothingState>()
{
	return FAlsViewNetworkSmoothingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsViewNetworkSmoothingState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FAlsViewNetworkSmoothingState*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsViewNetworkSmoothingState), &Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ServerTime_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "Comment", "// Used to track the time of the last server move.\n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
		{ "ToolTip", "Used to track the time of the last server move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ServerTime = { "ServerTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewNetworkSmoothingState, ServerTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ServerTime_MetaData), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ServerTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ClientTime_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "Comment", "// Used to track client time as we try to match the server.\n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
		{ "ToolTip", "Used to track client time as we try to match the server." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ClientTime = { "ClientTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewNetworkSmoothingState, ClientTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ClientTime_MetaData), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ClientTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "Comment", "// Used for remembering how much time passed between server corrections.\n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
		{ "ToolTip", "Used for remembering how much time passed between server corrections." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewNetworkSmoothingState, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_InitialRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewNetworkSmoothingState, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_InitialRotation_MetaData), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_InitialRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewNetworkSmoothingState, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_TargetRotation_MetaData), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_TargetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewNetworkSmoothingState, CurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_CurrentRotation_MetaData), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_CurrentRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ServerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_ClientTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_InitialRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_TargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewProp_CurrentRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsViewNetworkSmoothingState",
		Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::PropPointers),
		sizeof(FAlsViewNetworkSmoothingState),
		alignof(FAlsViewNetworkSmoothingState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState.InnerSingleton, Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsViewState;
class UScriptStruct* FAlsViewState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsViewState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsViewState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsViewState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsViewState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsViewState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsViewState>()
{
	return FAlsViewState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsViewState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousYawAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsViewState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsViewState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_NetworkSmoothing_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_NetworkSmoothing = { "NetworkSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewState, NetworkSmoothing), Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_NetworkSmoothing_MetaData), Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_NetworkSmoothing_MetaData) }; // 2731539727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewState, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_YawSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_YawSpeed = { "YawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewState, YawSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_YawSpeed_MetaData), Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_YawSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_PreviousYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsViewState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_PreviousYawAngle = { "PreviousYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsViewState, PreviousYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_PreviousYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_PreviousYawAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsViewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_NetworkSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_YawSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsViewState_Statics::NewProp_PreviousYawAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsViewState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsViewState",
		Z_Construct_UScriptStruct_FAlsViewState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewState_Statics::PropPointers),
		sizeof(FAlsViewState),
		alignof(FAlsViewState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsViewState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsViewState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsViewState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsViewState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsViewState.InnerSingleton, Z_Construct_UScriptStruct_FAlsViewState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsViewState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewState_h_Statics::ScriptStructInfo[] = {
		{ FAlsViewNetworkSmoothingState::StaticStruct, Z_Construct_UScriptStruct_FAlsViewNetworkSmoothingState_Statics::NewStructOps, TEXT("AlsViewNetworkSmoothingState"), &Z_Registration_Info_UScriptStruct_AlsViewNetworkSmoothingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsViewNetworkSmoothingState), 2731539727U) },
		{ FAlsViewState::StaticStruct, Z_Construct_UScriptStruct_FAlsViewState_Statics::NewStructOps, TEXT("AlsViewState"), &Z_Registration_Info_UScriptStruct_AlsViewState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsViewState), 1203690569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewState_h_3456927320(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsViewState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
