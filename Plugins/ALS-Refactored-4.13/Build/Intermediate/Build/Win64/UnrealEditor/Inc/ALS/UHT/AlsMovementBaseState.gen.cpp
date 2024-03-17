// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsMovementBaseState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsMovementBaseState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementBaseState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsMovementBaseState;
class UScriptStruct* FAlsMovementBaseState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsMovementBaseState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsMovementBaseState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsMovementBaseState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsMovementBaseState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsMovementBaseState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsMovementBaseState>()
{
	return FAlsMovementBaseState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Primitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBaseChanged_MetaData[];
#endif
		static void NewProp_bBaseChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRelativeLocation_MetaData[];
#endif
		static void NewProp_bHasRelativeLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRelativeRotation_MetaData[];
#endif
		static void NewProp_bHasRelativeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsMovementBaseState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Primitive_MetaData[] = {
		{ "Category", "ALS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementBaseState, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Primitive_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Primitive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementBaseState, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bBaseChanged_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bBaseChanged_SetBit(void* Obj)
	{
		((FAlsMovementBaseState*)Obj)->bBaseChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bBaseChanged = { "bBaseChanged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMovementBaseState), &Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bBaseChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bBaseChanged_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bBaseChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeLocation_SetBit(void* Obj)
	{
		((FAlsMovementBaseState*)Obj)->bHasRelativeLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeLocation = { "bHasRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMovementBaseState), &Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeLocation_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeRotation_SetBit(void* Obj)
	{
		((FAlsMovementBaseState*)Obj)->bHasRelativeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeRotation = { "bHasRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMovementBaseState), &Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeRotation_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementBaseState, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementBaseState, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementBaseState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementBaseState, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_DeltaRotation_MetaData), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_DeltaRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Primitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bBaseChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_bHasRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewProp_DeltaRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsMovementBaseState",
		Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::PropPointers),
		sizeof(FAlsMovementBaseState),
		alignof(FAlsMovementBaseState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementBaseState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsMovementBaseState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsMovementBaseState.InnerSingleton, Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsMovementBaseState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementBaseState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementBaseState_h_Statics::ScriptStructInfo[] = {
		{ FAlsMovementBaseState::StaticStruct, Z_Construct_UScriptStruct_FAlsMovementBaseState_Statics::NewStructOps, TEXT("AlsMovementBaseState"), &Z_Registration_Info_UScriptStruct_AlsMovementBaseState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsMovementBaseState), 2138106074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementBaseState_h_3163757536(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementBaseState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementBaseState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
