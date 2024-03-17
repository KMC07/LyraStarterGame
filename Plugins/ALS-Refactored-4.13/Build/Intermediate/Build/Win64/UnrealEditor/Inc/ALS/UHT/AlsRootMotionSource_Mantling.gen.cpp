// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/RootMotionSources/AlsRootMotionSource_Mantling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRootMotionSource_Mantling() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsMantlingSettings_NoRegister();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionSource();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References

static_assert(std::is_polymorphic<FAlsRootMotionSource_Mantling>() == std::is_polymorphic<FRootMotionSource>(), "USTRUCT FAlsRootMotionSource_Mantling cannot be polymorphic unless super FRootMotionSource is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling;
class UScriptStruct* FAlsRootMotionSource_Mantling::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRootMotionSource_Mantling"));
	}
	return Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRootMotionSource_Mantling>()
{
	return FAlsRootMotionSource_Mantling::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MantlingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPrimitive_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetPrimitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFeetLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorFeetLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAnimationLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAnimationLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontageStartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRootMotionSource_Mantling>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MantlingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MantlingSettings = { "MantlingSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, MantlingSettings), Z_Construct_UClass_UAlsMantlingSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MantlingSettings_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MantlingSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetPrimitive_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetPrimitive = { "TargetPrimitive", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, TargetPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetPrimitive_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetPrimitive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeLocation = { "TargetRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, TargetRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeLocation_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeRotation = { "TargetRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, TargetRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeRotation_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorFeetLocationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorFeetLocationOffset = { "ActorFeetLocationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, ActorFeetLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorFeetLocationOffset_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorFeetLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorRotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorRotationOffset = { "ActorRotationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, ActorRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorRotationOffset_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetAnimationLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetAnimationLocation = { "TargetAnimationLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, TargetAnimationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetAnimationLocation_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetAnimationLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MontageStartTime_MetaData[] = {
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/RootMotionSources/AlsRootMotionSource_Mantling.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MontageStartTime = { "MontageStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRootMotionSource_Mantling, MontageStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MontageStartTime_MetaData), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MontageStartTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MantlingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetPrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorFeetLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_ActorRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_TargetAnimationLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewProp_MontageStartTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		Z_Construct_UScriptStruct_FRootMotionSource,
		&NewStructOps,
		"AlsRootMotionSource_Mantling",
		Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::PropPointers),
		sizeof(FAlsRootMotionSource_Mantling),
		alignof(FAlsRootMotionSource_Mantling),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling.InnerSingleton, Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_RootMotionSources_AlsRootMotionSource_Mantling_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_RootMotionSources_AlsRootMotionSource_Mantling_h_Statics::ScriptStructInfo[] = {
		{ FAlsRootMotionSource_Mantling::StaticStruct, Z_Construct_UScriptStruct_FAlsRootMotionSource_Mantling_Statics::NewStructOps, TEXT("AlsRootMotionSource_Mantling"), &Z_Registration_Info_UScriptStruct_AlsRootMotionSource_Mantling, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRootMotionSource_Mantling), 1959878741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_RootMotionSources_AlsRootMotionSource_Mantling_h_629829267(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_RootMotionSources_AlsRootMotionSource_Mantling_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_RootMotionSources_AlsRootMotionSource_Mantling_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
