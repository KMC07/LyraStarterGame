// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSCamera/Public/AlsCameraSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsCameraSettings() {}
// Cross Module References
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraSettings();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraSettings_NoRegister();
	ALSCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings();
	ALSCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings();
	ALSCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings();
	ALSCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_ALSCamera();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings;
class UScriptStruct* FAlsFirstPersonCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings, (UObject*)Z_Construct_UPackage__Script_ALSCamera(), TEXT("AlsFirstPersonCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings.OuterSingleton;
}
template<> ALSCAMERA_API UScriptStruct* StaticStruct<FAlsFirstPersonCameraSettings>()
{
	return FAlsFirstPersonCameraSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Fov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsFirstPersonCameraSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_Fov_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "360" },
		{ "ClampMin", "5" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_Fov = { "Fov", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFirstPersonCameraSettings, Fov), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_Fov_MetaData), Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_Fov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_CameraSocketName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_CameraSocketName = { "CameraSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFirstPersonCameraSettings, CameraSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_CameraSocketName_MetaData), Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_CameraSocketName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_Fov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewProp_CameraSocketName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
		nullptr,
		&NewStructOps,
		"AlsFirstPersonCameraSettings",
		Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::PropPointers),
		sizeof(FAlsFirstPersonCameraSettings),
		alignof(FAlsFirstPersonCameraSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings;
class UScriptStruct* FAlsTraceDistanceSmoothingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings, (UObject*)Z_Construct_UPackage__Script_ALSCamera(), TEXT("AlsTraceDistanceSmoothingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings.OuterSingleton;
}
template<> ALSCAMERA_API UScriptStruct* StaticStruct<FAlsTraceDistanceSmoothingSettings>()
{
	return FAlsTraceDistanceSmoothingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsTraceDistanceSmoothingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsTraceDistanceSmoothingSettings, InterpolationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::NewProp_InterpolationSpeed_MetaData), Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::NewProp_InterpolationSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::NewProp_InterpolationSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
		nullptr,
		&NewStructOps,
		"AlsTraceDistanceSmoothingSettings",
		Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::PropPointers),
		sizeof(FAlsTraceDistanceSmoothingSettings),
		alignof(FAlsTraceDistanceSmoothingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings;
class UScriptStruct* FAlsThirdPersonCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings, (UObject*)Z_Construct_UPackage__Script_ALSCamera(), TEXT("AlsThirdPersonCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings.OuterSingleton;
}
template<> ALSCAMERA_API UScriptStruct* StaticStruct<FAlsThirdPersonCameraSettings>()
{
	return FAlsThirdPersonCameraSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Fov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPivotSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FirstPivotSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondPivotSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondPivotSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceShoulderLeftSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TraceShoulderLeftSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceShoulderRightSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TraceShoulderRightSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceOverrideOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceOverrideOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTraceDistanceSmoothing_MetaData[];
#endif
		static void NewProp_bEnableTraceDistanceSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTraceDistanceSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistanceSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceDistanceSmoothing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsThirdPersonCameraSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_Fov_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "360" },
		{ "ClampMin", "5" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_Fov = { "Fov", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, Fov), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_Fov_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_Fov_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_FirstPivotSocketName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_FirstPivotSocketName = { "FirstPivotSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, FirstPivotSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_FirstPivotSocketName_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_FirstPivotSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_SecondPivotSocketName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_SecondPivotSocketName = { "SecondPivotSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, SecondPivotSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_SecondPivotSocketName_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_SecondPivotSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceRadius_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceChannel_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderLeftSocketName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderLeftSocketName = { "TraceShoulderLeftSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, TraceShoulderLeftSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderLeftSocketName_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderLeftSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderRightSocketName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderRightSocketName = { "TraceShoulderRightSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, TraceShoulderRightSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderRightSocketName_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderRightSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceOverrideOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceOverrideOffset = { "TraceOverrideOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, TraceOverrideOffset), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceOverrideOffset_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceOverrideOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_bEnableTraceDistanceSmoothing_MetaData[] = {
		{ "Category", "ALS" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_bEnableTraceDistanceSmoothing_SetBit(void* Obj)
	{
		((FAlsThirdPersonCameraSettings*)Obj)->bEnableTraceDistanceSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_bEnableTraceDistanceSmoothing = { "bEnableTraceDistanceSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsThirdPersonCameraSettings), &Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_bEnableTraceDistanceSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_bEnableTraceDistanceSmoothing_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_bEnableTraceDistanceSmoothing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceDistanceSmoothing_MetaData[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Enable Trace Distance Smoothing" },
		{ "EditCondition", "bEnableTraceDistanceSmoothing" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceDistanceSmoothing = { "TraceDistanceSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsThirdPersonCameraSettings, TraceDistanceSmoothing), Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceDistanceSmoothing_MetaData), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceDistanceSmoothing_MetaData) }; // 2144387729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_Fov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_FirstPivotSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_SecondPivotSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderLeftSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceShoulderRightSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceOverrideOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_bEnableTraceDistanceSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewProp_TraceDistanceSmoothing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
		nullptr,
		&NewStructOps,
		"AlsThirdPersonCameraSettings",
		Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::PropPointers),
		sizeof(FAlsThirdPersonCameraSettings),
		alignof(FAlsThirdPersonCameraSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings;
class UScriptStruct* FAlsCameraLagSubsteppingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings, (UObject*)Z_Construct_UPackage__Script_ALSCamera(), TEXT("AlsCameraLagSubsteppingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings.OuterSingleton;
}
template<> ALSCAMERA_API UScriptStruct* StaticStruct<FAlsCameraLagSubsteppingSettings>()
{
	return FAlsCameraLagSubsteppingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LagSubstepDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LagSubstepDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsCameraLagSubsteppingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::NewProp_LagSubstepDeltaTime_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "0.500000" },
		{ "ClampMin", "0.005000" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::NewProp_LagSubstepDeltaTime = { "LagSubstepDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsCameraLagSubsteppingSettings, LagSubstepDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::NewProp_LagSubstepDeltaTime_MetaData), Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::NewProp_LagSubstepDeltaTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::NewProp_LagSubstepDeltaTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
		nullptr,
		&NewStructOps,
		"AlsCameraLagSubsteppingSettings",
		Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::PropPointers),
		sizeof(FAlsCameraLagSubsteppingSettings),
		alignof(FAlsCameraLagSubsteppingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings.InnerSingleton;
	}
	void UAlsCameraSettings::StaticRegisterNativesUAlsCameraSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsCameraSettings);
	UClass* Z_Construct_UClass_UAlsCameraSettings_NoRegister()
	{
		return UAlsCameraSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlsCameraSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPerson_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPerson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThirdPerson_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThirdPerson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraLagSubstepping_MetaData[];
#endif
		static void NewProp_bEnableCameraLagSubstepping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraLagSubstepping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSubstepping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLagSubstepping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcess_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsCameraSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AlsCameraSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UAlsCameraSettings*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCameraSettings), &Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData), Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_TeleportDistanceThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// The camera will be teleported if the character has moved further than this\n// distance in 1 frame. If zero is specified, then teleportation will be disabled.\n" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
		{ "ToolTip", "The camera will be teleported if the character has moved further than this\ndistance in 1 frame. If zero is specified, then teleportation will be disabled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraSettings, TeleportDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_TeleportDistanceThreshold_MetaData), Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_TeleportDistanceThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_FirstPerson_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_FirstPerson = { "FirstPerson", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraSettings, FirstPerson), Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_FirstPerson_MetaData), Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_FirstPerson_MetaData) }; // 402746072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_ThirdPerson_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_ThirdPerson = { "ThirdPerson", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraSettings, ThirdPerson), Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_ThirdPerson_MetaData), Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_ThirdPerson_MetaData) }; // 3333215335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bEnableCameraLagSubstepping_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bEnableCameraLagSubstepping_SetBit(void* Obj)
	{
		((UAlsCameraSettings*)Obj)->bEnableCameraLagSubstepping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bEnableCameraLagSubstepping = { "bEnableCameraLagSubstepping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCameraSettings), &Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bEnableCameraLagSubstepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bEnableCameraLagSubstepping_MetaData), Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bEnableCameraLagSubstepping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_CameraLagSubstepping_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Enable Camera Lag Substepping" },
		{ "EditCondition", "bEnableCameraLagSubstepping" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_CameraLagSubstepping = { "CameraLagSubstepping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraSettings, CameraLagSubstepping), Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_CameraLagSubstepping_MetaData), Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_CameraLagSubstepping_MetaData) }; // 222772760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_PostProcess_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AlsCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_PostProcess = { "PostProcess", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraSettings, PostProcess), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_PostProcess_MetaData), Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_PostProcess_MetaData) }; // 2922880151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bIgnoreTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_TeleportDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_FirstPerson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_ThirdPerson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_bEnableCameraLagSubstepping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_CameraLagSubstepping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraSettings_Statics::NewProp_PostProcess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsCameraSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsCameraSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsCameraSettings_Statics::ClassParams = {
		&UAlsCameraSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsCameraSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsCameraSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsCameraSettings()
	{
		if (!Z_Registration_Info_UClass_UAlsCameraSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsCameraSettings.OuterSingleton, Z_Construct_UClass_UAlsCameraSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsCameraSettings.OuterSingleton;
	}
	template<> ALSCAMERA_API UClass* StaticClass<UAlsCameraSettings>()
	{
		return UAlsCameraSettings::StaticClass();
	}
	UAlsCameraSettings::UAlsCameraSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsCameraSettings);
	UAlsCameraSettings::~UAlsCameraSettings() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAlsCameraSettings)
#endif
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsFirstPersonCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsFirstPersonCameraSettings_Statics::NewStructOps, TEXT("AlsFirstPersonCameraSettings"), &Z_Registration_Info_UScriptStruct_AlsFirstPersonCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsFirstPersonCameraSettings), 402746072U) },
		{ FAlsTraceDistanceSmoothingSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsTraceDistanceSmoothingSettings_Statics::NewStructOps, TEXT("AlsTraceDistanceSmoothingSettings"), &Z_Registration_Info_UScriptStruct_AlsTraceDistanceSmoothingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsTraceDistanceSmoothingSettings), 2144387729U) },
		{ FAlsThirdPersonCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsThirdPersonCameraSettings_Statics::NewStructOps, TEXT("AlsThirdPersonCameraSettings"), &Z_Registration_Info_UScriptStruct_AlsThirdPersonCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsThirdPersonCameraSettings), 3333215335U) },
		{ FAlsCameraLagSubsteppingSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsCameraLagSubsteppingSettings_Statics::NewStructOps, TEXT("AlsCameraLagSubsteppingSettings"), &Z_Registration_Info_UScriptStruct_AlsCameraLagSubsteppingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsCameraLagSubsteppingSettings), 222772760U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsCameraSettings, UAlsCameraSettings::StaticClass, TEXT("UAlsCameraSettings"), &Z_Registration_Info_UClass_UAlsCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsCameraSettings), 4192790608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_3512002977(TEXT("/Script/ALSCamera"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
