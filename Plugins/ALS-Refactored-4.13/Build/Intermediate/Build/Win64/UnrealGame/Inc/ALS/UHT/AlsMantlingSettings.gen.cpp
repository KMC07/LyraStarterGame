// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsMantlingSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsMantlingSettings() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsMantlingSettings();
	ALS_API UClass* Z_Construct_UClass_UAlsMantlingSettings_NoRegister();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsMantlingType();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingParameters();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingTraceSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsMantlingType;
	static UEnum* EAlsMantlingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsMantlingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsMantlingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsMantlingType, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsMantlingType"));
		}
		return Z_Registration_Info_UEnum_EAlsMantlingType.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsMantlingType>()
	{
		return EAlsMantlingType_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsMantlingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::Enumerators[] = {
		{ "EAlsMantlingType::High", (int64)EAlsMantlingType::High },
		{ "EAlsMantlingType::Low", (int64)EAlsMantlingType::Low },
		{ "EAlsMantlingType::InAir", (int64)EAlsMantlingType::InAir },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.Name", "EAlsMantlingType::High" },
		{ "InAir.Name", "EAlsMantlingType::InAir" },
		{ "Low.Name", "EAlsMantlingType::Low" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsMantlingType",
		"EAlsMantlingType",
		Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsMantlingType()
	{
		if (!Z_Registration_Info_UEnum_EAlsMantlingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsMantlingType.InnerSingleton, Z_Construct_UEnum_ALS_EAlsMantlingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsMantlingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsMantlingParameters;
class UScriptStruct* FAlsMantlingParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsMantlingParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsMantlingParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsMantlingParameters, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsMantlingParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AlsMantlingParameters.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsMantlingParameters>()
{
	return FAlsMantlingParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MantlingHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantlingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MantlingType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsMantlingParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetPrimitive_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetPrimitive = { "TargetPrimitive", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingParameters, TargetPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetPrimitive_MetaData), Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetPrimitive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeLocation = { "TargetRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingParameters, TargetRelativeLocation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeLocation_MetaData), Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeLocation_MetaData) }; // 2131173936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeRotation = { "TargetRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingParameters, TargetRelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeRotation_MetaData), Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingHeight_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingHeight = { "MantlingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingParameters, MantlingHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingHeight_MetaData), Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingHeight_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingType_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingType = { "MantlingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingParameters, MantlingType), Z_Construct_UEnum_ALS_EAlsMantlingType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingType_MetaData), Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingType_MetaData) }; // 268936725
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetPrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_TargetRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewProp_MantlingType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsMantlingParameters",
		Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::PropPointers),
		sizeof(FAlsMantlingParameters),
		alignof(FAlsMantlingParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsMantlingParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsMantlingParameters.InnerSingleton, Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsMantlingParameters.InnerSingleton;
	}
	void UAlsMantlingSettings::StaticRegisterNativesUAlsMantlingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsMantlingSettings);
	UClass* Z_Construct_UClass_UAlsMantlingSettings_NoRegister()
	{
		return UAlsMantlingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlsMantlingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateStartTime_MetaData[];
#endif
		static void NewProp_bAutoCalculateStartTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeReferenceHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTimeReferenceHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalCorrectionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HorizontalCorrectionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCorrectionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VerticalCorrectionCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsMantlingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMantlingSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Settings/AlsMantlingSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsMantlingSettings, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_Montage_MetaData), Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_Montage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_bAutoCalculateStartTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// If checked, mantling will automatically calculate the start time based on how much vertical\n// distance the character needs to move to reach the object they are about to mantle.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
		{ "ToolTip", "If checked, mantling will automatically calculate the start time based on how much vertical\ndistance the character needs to move to reach the object they are about to mantle." },
	};
#endif
	void Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_bAutoCalculateStartTime_SetBit(void* Obj)
	{
		((UAlsMantlingSettings*)Obj)->bAutoCalculateStartTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_bAutoCalculateStartTime = { "bAutoCalculateStartTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsMantlingSettings), &Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_bAutoCalculateStartTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_bAutoCalculateStartTime_MetaData), Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_bAutoCalculateStartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTimeReferenceHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bAutoCalculateStartTime" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTimeReferenceHeight = { "StartTimeReferenceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsMantlingSettings, StartTimeReferenceHeight), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTimeReferenceHeight_MetaData), Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTimeReferenceHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bAutoCalculateStartTime" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsMantlingSettings, StartTime), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTime_MetaData), Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_HorizontalCorrectionCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Optional mantling time to horizontal correction amount curve.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
		{ "ToolTip", "Optional mantling time to horizontal correction amount curve." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_HorizontalCorrectionCurve = { "HorizontalCorrectionCurve", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsMantlingSettings, HorizontalCorrectionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_HorizontalCorrectionCurve_MetaData), Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_HorizontalCorrectionCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_VerticalCorrectionCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Optional mantling time to vertical correction amount curve.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
		{ "ToolTip", "Optional mantling time to vertical correction amount curve." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_VerticalCorrectionCurve = { "VerticalCorrectionCurve", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsMantlingSettings, VerticalCorrectionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_VerticalCorrectionCurve_MetaData), Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_VerticalCorrectionCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsMantlingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_bAutoCalculateStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTimeReferenceHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_HorizontalCorrectionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsMantlingSettings_Statics::NewProp_VerticalCorrectionCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsMantlingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsMantlingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsMantlingSettings_Statics::ClassParams = {
		&UAlsMantlingSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsMantlingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsMantlingSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsMantlingSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsMantlingSettings()
	{
		if (!Z_Registration_Info_UClass_UAlsMantlingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsMantlingSettings.OuterSingleton, Z_Construct_UClass_UAlsMantlingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsMantlingSettings.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsMantlingSettings>()
	{
		return UAlsMantlingSettings::StaticClass();
	}
	UAlsMantlingSettings::UAlsMantlingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsMantlingSettings);
	UAlsMantlingSettings::~UAlsMantlingSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings;
class UScriptStruct* FAlsMantlingTraceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsMantlingTraceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsMantlingTraceSettings>()
{
	return FAlsMantlingTraceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LedgeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LedgeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedTraces_MetaData[];
#endif
		static void NewProp_bDrawFailedTraces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedTraces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsMantlingTraceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_LedgeHeight_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_LedgeHeight = { "LedgeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingTraceSettings, LedgeHeight), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_LedgeHeight_MetaData), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_LedgeHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_ReachDistance_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingTraceSettings, ReachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_ReachDistance_MetaData), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_ReachDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_TargetLocationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_TargetLocationOffset = { "TargetLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingTraceSettings, TargetLocationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_TargetLocationOffset_MetaData), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_TargetLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_StartLocationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_StartLocationOffset = { "StartLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMantlingTraceSettings, StartLocationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_StartLocationOffset_MetaData), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_StartLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_bDrawFailedTraces_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_bDrawFailedTraces_SetBit(void* Obj)
	{
		((FAlsMantlingTraceSettings*)Obj)->bDrawFailedTraces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_bDrawFailedTraces = { "bDrawFailedTraces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMantlingTraceSettings), &Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_bDrawFailedTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_bDrawFailedTraces_MetaData), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_bDrawFailedTraces_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_LedgeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_ReachDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_TargetLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_StartLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewProp_bDrawFailedTraces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsMantlingTraceSettings",
		Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::PropPointers),
		sizeof(FAlsMantlingTraceSettings),
		alignof(FAlsMantlingTraceSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingTraceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings;
class UScriptStruct* FAlsGeneralMantlingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsGeneralMantlingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsGeneralMantlingSettings>()
{
	return FAlsGeneralMantlingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMantling_MetaData[];
#endif
		static void NewProp_bAllowMantling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMantling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxReachAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxReachAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeAngleThresholdCos_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeAngleThresholdCos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPrimitiveSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPrimitiveSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingHighHeightThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MantlingHighHeightThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundedTrace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundedTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirTrace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAirTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantlingTraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantlingTraceResponseChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingTraceResponseChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MantlingTraceResponseChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingTraceResponses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantlingTraceResponses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartRagdollingOnTargetPrimitiveDestruction_MetaData[];
#endif
		static void NewProp_bStartRagdollingOnTargetPrimitiveDestruction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartRagdollingOnTargetPrimitiveDestruction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsGeneralMantlingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bAllowMantling_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bAllowMantling_SetBit(void* Obj)
	{
		((FAlsGeneralMantlingSettings*)Obj)->bAllowMantling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bAllowMantling = { "bAllowMantling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsGeneralMantlingSettings), &Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bAllowMantling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bAllowMantling_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bAllowMantling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TraceAngleThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TraceAngleThreshold = { "TraceAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, TraceAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TraceAngleThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TraceAngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MaxReachAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MaxReachAngle = { "MaxReachAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, MaxReachAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MaxReachAngle_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MaxReachAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "// Prevents mantling on surfaces whose slope angle exceeds this value.\n" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
		{ "ToolTip", "Prevents mantling on surfaces whose slope angle exceeds this value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThreshold = { "SlopeAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, SlopeAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThresholdCos_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThresholdCos = { "SlopeAngleThresholdCos", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, SlopeAngleThresholdCos), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThresholdCos_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThresholdCos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TargetPrimitiveSpeedThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// If a dynamic object has a speed bigger than this value, then do not start mantling.\n" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
		{ "ToolTip", "If a dynamic object has a speed bigger than this value, then do not start mantling." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TargetPrimitiveSpeedThreshold = { "TargetPrimitiveSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, TargetPrimitiveSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TargetPrimitiveSpeedThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TargetPrimitiveSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingHighHeightThreshold_MetaData[] = {
		{ "Category", "ALS" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingHighHeightThreshold = { "MantlingHighHeightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, MantlingHighHeightThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingHighHeightThreshold_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingHighHeightThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_GroundedTrace_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_GroundedTrace = { "GroundedTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, GroundedTrace), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_GroundedTrace_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_GroundedTrace_MetaData) }; // 4175185178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_InAirTrace_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_InAirTrace = { "InAirTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, InAirTrace), Z_Construct_UScriptStruct_FAlsMantlingTraceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_InAirTrace_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_InAirTrace_MetaData) }; // 4175185178
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceChannel_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceChannel = { "MantlingTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, MantlingTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceChannel_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceChannel_MetaData) }; // 1822723181
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponseChannels_Inner = { "MantlingTraceResponseChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponseChannels_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponseChannels = { "MantlingTraceResponseChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, MantlingTraceResponseChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponseChannels_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponseChannels_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponses_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponses = { "MantlingTraceResponses", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, MantlingTraceResponses), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponses_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponses_MetaData) }; // 2352989251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_BlendOutDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "Comment", "// Used when the mantling was interrupted and we need to stop the animation.\n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
		{ "ToolTip", "Used when the mantling was interrupted and we need to stop the animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_BlendOutDuration = { "BlendOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsGeneralMantlingSettings, BlendOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_BlendOutDuration_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_BlendOutDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bStartRagdollingOnTargetPrimitiveDestruction_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// If checked, ragdolling will start if the object the character is mantling on was destroyed.\n" },
		{ "ModuleRelativePath", "Public/Settings/AlsMantlingSettings.h" },
		{ "ToolTip", "If checked, ragdolling will start if the object the character is mantling on was destroyed." },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bStartRagdollingOnTargetPrimitiveDestruction_SetBit(void* Obj)
	{
		((FAlsGeneralMantlingSettings*)Obj)->bStartRagdollingOnTargetPrimitiveDestruction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bStartRagdollingOnTargetPrimitiveDestruction = { "bStartRagdollingOnTargetPrimitiveDestruction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsGeneralMantlingSettings), &Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bStartRagdollingOnTargetPrimitiveDestruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bStartRagdollingOnTargetPrimitiveDestruction_MetaData), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bStartRagdollingOnTargetPrimitiveDestruction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bAllowMantling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TraceAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MaxReachAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_SlopeAngleThresholdCos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_TargetPrimitiveSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingHighHeightThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_GroundedTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_InAirTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponseChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponseChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_MantlingTraceResponses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_BlendOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewProp_bStartRagdollingOnTargetPrimitiveDestruction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsGeneralMantlingSettings",
		Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::PropPointers),
		sizeof(FAlsGeneralMantlingSettings),
		alignof(FAlsGeneralMantlingSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::EnumInfo[] = {
		{ EAlsMantlingType_StaticEnum, TEXT("EAlsMantlingType"), &Z_Registration_Info_UEnum_EAlsMantlingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 268936725U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsMantlingParameters::StaticStruct, Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics::NewStructOps, TEXT("AlsMantlingParameters"), &Z_Registration_Info_UScriptStruct_AlsMantlingParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsMantlingParameters), 2188665798U) },
		{ FAlsMantlingTraceSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics::NewStructOps, TEXT("AlsMantlingTraceSettings"), &Z_Registration_Info_UScriptStruct_AlsMantlingTraceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsMantlingTraceSettings), 4175185178U) },
		{ FAlsGeneralMantlingSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics::NewStructOps, TEXT("AlsGeneralMantlingSettings"), &Z_Registration_Info_UScriptStruct_AlsGeneralMantlingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsGeneralMantlingSettings), 1185208882U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsMantlingSettings, UAlsMantlingSettings::StaticClass, TEXT("UAlsMantlingSettings"), &Z_Registration_Info_UClass_UAlsMantlingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsMantlingSettings), 21958849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_2521405463(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
