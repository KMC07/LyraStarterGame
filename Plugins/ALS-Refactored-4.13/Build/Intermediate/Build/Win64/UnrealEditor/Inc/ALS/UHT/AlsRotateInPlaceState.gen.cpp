// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsRotateInPlaceState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRotateInPlaceState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRotateInPlaceState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState;
class UScriptStruct* FAlsRotateInPlaceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRotateInPlaceState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRotateInPlaceState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRotateInPlaceState>()
{
	return FAlsRotateInPlaceState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotatingLeft_MetaData[];
#endif
		static void NewProp_bRotatingLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotatingLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotatingRight_MetaData[];
#endif
		static void NewProp_bRotatingRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotatingRight;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsRotateInPlaceState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRotateInPlaceState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingLeft_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsRotateInPlaceState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingLeft_SetBit(void* Obj)
	{
		((FAlsRotateInPlaceState*)Obj)->bRotatingLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingLeft = { "bRotatingLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRotateInPlaceState), &Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingLeft_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingRight_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsRotateInPlaceState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingRight_SetBit(void* Obj)
	{
		((FAlsRotateInPlaceState*)Obj)->bRotatingRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingRight = { "bRotatingRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRotateInPlaceState), &Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingRight_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/State/AlsRotateInPlaceState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRotateInPlaceState, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bFootLockInhibited_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsRotateInPlaceState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bFootLockInhibited_SetBit(void* Obj)
	{
		((FAlsRotateInPlaceState*)Obj)->bFootLockInhibited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bFootLockInhibited = { "bFootLockInhibited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRotateInPlaceState), &Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bFootLockInhibited_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bFootLockInhibited_MetaData), Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bFootLockInhibited_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bRotatingRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewProp_bFootLockInhibited,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsRotateInPlaceState",
		Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::PropPointers),
		sizeof(FAlsRotateInPlaceState),
		alignof(FAlsRotateInPlaceState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRotateInPlaceState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState.InnerSingleton, Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRotateInPlaceState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRotateInPlaceState_h_Statics::ScriptStructInfo[] = {
		{ FAlsRotateInPlaceState::StaticStruct, Z_Construct_UScriptStruct_FAlsRotateInPlaceState_Statics::NewStructOps, TEXT("AlsRotateInPlaceState"), &Z_Registration_Info_UScriptStruct_AlsRotateInPlaceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRotateInPlaceState), 1703139176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRotateInPlaceState_h_457942692(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRotateInPlaceState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsRotateInPlaceState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
