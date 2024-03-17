// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsControlRigInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsControlRigInput() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsControlRigInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsControlRigInput;
class UScriptStruct* FAlsControlRigInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsControlRigInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsControlRigInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsControlRigInput, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsControlRigInput"));
	}
	return Z_Registration_Info_UScriptStruct_AlsControlRigInput.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsControlRigInput>()
{
	return FAlsControlRigInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsControlRigInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHandIkBones_MetaData[];
#endif
		static void NewProp_bUseHandIkBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHandIkBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFootIkBones_MetaData[];
#endif
		static void NewProp_bUseFootIkBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFootIkBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlendForwardAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBlendForwardAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlendBackwardAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBlendBackwardAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLeftIkRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLeftIkRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLeftIkLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLeftIkLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLeftIkAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLeftIkAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootRightIkRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootRightIkRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootRightIkLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootRightIkLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootRightIkAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootRightIkAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMaxPelvisOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinMaxPelvisOffsetZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsControlRigInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseHandIkBones_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseHandIkBones_SetBit(void* Obj)
	{
		((FAlsControlRigInput*)Obj)->bUseHandIkBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseHandIkBones = { "bUseHandIkBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsControlRigInput), &Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseHandIkBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseHandIkBones_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseHandIkBones_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseFootIkBones_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseFootIkBones_SetBit(void* Obj)
	{
		((FAlsControlRigInput*)Obj)->bUseFootIkBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseFootIkBones = { "bUseFootIkBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsControlRigInput), &Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseFootIkBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseFootIkBones_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseFootIkBones_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendForwardAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendForwardAmount = { "VelocityBlendForwardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, VelocityBlendForwardAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendForwardAmount_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendForwardAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendBackwardAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendBackwardAmount = { "VelocityBlendBackwardAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, VelocityBlendBackwardAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendBackwardAmount_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendBackwardAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_SpineYawAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_SpineYawAngle = { "SpineYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, SpineYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_SpineYawAngle_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_SpineYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkRotation = { "FootLeftIkRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, FootLeftIkRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkRotation_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkLocation = { "FootLeftIkLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, FootLeftIkLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkLocation_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkAmount = { "FootLeftIkAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, FootLeftIkAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkAmount_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkRotation = { "FootRightIkRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, FootRightIkRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkRotation_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkLocation = { "FootRightIkLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, FootRightIkLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkLocation_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkAmount = { "FootRightIkAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, FootRightIkAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkAmount_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_MinMaxPelvisOffsetZ_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsControlRigInput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_MinMaxPelvisOffsetZ = { "MinMaxPelvisOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsControlRigInput, MinMaxPelvisOffsetZ), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_MinMaxPelvisOffsetZ_MetaData), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_MinMaxPelvisOffsetZ_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseHandIkBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_bUseFootIkBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendForwardAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_VelocityBlendBackwardAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_SpineYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootLeftIkAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_FootRightIkAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewProp_MinMaxPelvisOffsetZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsControlRigInput",
		Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::PropPointers),
		sizeof(FAlsControlRigInput),
		alignof(FAlsControlRigInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsControlRigInput()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsControlRigInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsControlRigInput.InnerSingleton, Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsControlRigInput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsControlRigInput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsControlRigInput_h_Statics::ScriptStructInfo[] = {
		{ FAlsControlRigInput::StaticStruct, Z_Construct_UScriptStruct_FAlsControlRigInput_Statics::NewStructOps, TEXT("AlsControlRigInput"), &Z_Registration_Info_UScriptStruct_AlsControlRigInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsControlRigInput), 2383407667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsControlRigInput_h_562726128(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsControlRigInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsControlRigInput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
