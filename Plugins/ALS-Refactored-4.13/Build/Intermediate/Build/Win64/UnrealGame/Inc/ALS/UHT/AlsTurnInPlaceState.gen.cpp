// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsTurnInPlaceState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsTurnInPlaceState() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsTurnInPlaceState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState;
class UScriptStruct* FAlsTurnInPlaceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsTurnInPlaceState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsTurnInPlaceState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsTurnInPlaceState>()
{
	return FAlsTurnInPlaceState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueuedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_QueuedSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuedTurnYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueuedTurnYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFootLockInhibited_MetaData[];
#endif
		static void NewProp_bFootLockInhibited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFootLockInhibited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsTurnInPlaceState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsTurnInPlaceState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_ActivationDelay_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/State/AlsTurnInPlaceState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_ActivationDelay = { "ActivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTurnInPlaceState, ActivationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_ActivationDelay_MetaData), Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_ActivationDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSettings_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsTurnInPlaceState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSettings = { "QueuedSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTurnInPlaceState, QueuedSettings), Z_Construct_UClass_UAlsTurnInPlaceSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSettings_MetaData), Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSlotName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsTurnInPlaceState.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSlotName = { "QueuedSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTurnInPlaceState, QueuedSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSlotName_MetaData), Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedTurnYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsTurnInPlaceState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedTurnYawAngle = { "QueuedTurnYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTurnInPlaceState, QueuedTurnYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedTurnYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedTurnYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsTurnInPlaceState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTurnInPlaceState, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_bFootLockInhibited_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsTurnInPlaceState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_bFootLockInhibited_SetBit(void* Obj)
	{
		((FAlsTurnInPlaceState*)Obj)->bFootLockInhibited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_bFootLockInhibited = { "bFootLockInhibited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsTurnInPlaceState), &Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_bFootLockInhibited_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_bFootLockInhibited_MetaData), Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_bFootLockInhibited_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_ActivationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_QueuedTurnYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewProp_bFootLockInhibited,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsTurnInPlaceState",
		Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::PropPointers),
		sizeof(FAlsTurnInPlaceState),
		alignof(FAlsTurnInPlaceState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsTurnInPlaceState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState.InnerSingleton, Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTurnInPlaceState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTurnInPlaceState_h_Statics::ScriptStructInfo[] = {
		{ FAlsTurnInPlaceState::StaticStruct, Z_Construct_UScriptStruct_FAlsTurnInPlaceState_Statics::NewStructOps, TEXT("AlsTurnInPlaceState"), &Z_Registration_Info_UScriptStruct_AlsTurnInPlaceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsTurnInPlaceState), 3688902921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTurnInPlaceState_h_4267703528(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTurnInPlaceState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsTurnInPlaceState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
