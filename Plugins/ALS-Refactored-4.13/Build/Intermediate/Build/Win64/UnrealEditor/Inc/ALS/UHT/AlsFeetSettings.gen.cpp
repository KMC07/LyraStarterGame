// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsFeetSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsFeetSettings() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFeetSettings();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFootLimitsSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat4f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings;
class UScriptStruct* FAlsFootLimitsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsFootLimitsSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsFootLimitsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsFootLimitsSettings>()
{
	return FAlsFootLimitsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwingLimitOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitOffsetQuaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwingLimitOffsetQuaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing1Limit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing2Limit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsFootLimitsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, TwistAxis), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistAxis_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimitAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, TwistLimitAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimitAngle_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimitAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffset = { "SwingLimitOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, SwingLimitOffset), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffset_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1LimitAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Swing 1 Limit Angle" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, Swing1LimitAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1LimitAngle_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1LimitAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2LimitAngle_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Swing 2 Limit Angle" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, Swing2LimitAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2LimitAngle_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2LimitAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimit_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, TwistLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimit_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffsetQuaternion_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffsetQuaternion = { "SwingLimitOffsetQuaternion", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, SwingLimitOffsetQuaternion), Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffsetQuaternion_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffsetQuaternion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1Limit_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Swing 1 Limit" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1Limit = { "Swing1Limit", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, Swing1Limit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1Limit_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1Limit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2Limit_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Swing 2 Limit" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2Limit = { "Swing2Limit", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootLimitsSettings, Swing2Limit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2Limit_MetaData), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2Limit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_TwistLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_SwingLimitOffsetQuaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing1Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewProp_Swing2Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsFootLimitsSettings",
		Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::PropPointers),
		sizeof(FAlsFootLimitsSettings),
		alignof(FAlsFootLimitsSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsFootLimitsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsFeetSettings;
class UScriptStruct* FAlsFeetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsFeetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsFeetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsFeetSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsFeetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsFeetSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsFeetSettings>()
{
	return FAlsFeetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsFeetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableFootLock_MetaData[];
#endif
		static void NewProp_bDisableFootLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableFootLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IkTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkTraceDistanceUpward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IkTraceDistanceUpward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkTraceDistanceDownward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IkTraceDistanceDownward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftFootLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFootLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightFootLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsFeetSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_bDisableFootLock_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_bDisableFootLock_SetBit(void* Obj)
	{
		((FAlsFeetSettings*)Obj)->bDisableFootLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_bDisableFootLock = { "bDisableFootLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsFeetSettings), &Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_bDisableFootLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_bDisableFootLock_MetaData), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_bDisableFootLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_FootHeight_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_FootHeight = { "FootHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetSettings, FootHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_FootHeight_MetaData), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_FootHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceChannel_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceChannel = { "IkTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetSettings, IkTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceChannel_MetaData), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceUpward_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceUpward = { "IkTraceDistanceUpward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetSettings, IkTraceDistanceUpward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceUpward_MetaData), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceUpward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceDownward_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceDownward = { "IkTraceDistanceDownward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetSettings, IkTraceDistanceDownward), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceDownward_MetaData), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceDownward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_LeftFootLimits_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_LeftFootLimits = { "LeftFootLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetSettings, LeftFootLimits), Z_Construct_UScriptStruct_FAlsFootLimitsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_LeftFootLimits_MetaData), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_LeftFootLimits_MetaData) }; // 38536752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_RightFootLimits_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Settings/AlsFeetSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_RightFootLimits = { "RightFootLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetSettings, RightFootLimits), Z_Construct_UScriptStruct_FAlsFootLimitsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_RightFootLimits_MetaData), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_RightFootLimits_MetaData) }; // 38536752
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_bDisableFootLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_FootHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceUpward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_IkTraceDistanceDownward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_LeftFootLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewProp_RightFootLimits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsFeetSettings",
		Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::PropPointers),
		sizeof(FAlsFeetSettings),
		alignof(FAlsFeetSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsFeetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsFeetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsFeetSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsFeetSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsFeetSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsFeetSettings_h_Statics::ScriptStructInfo[] = {
		{ FAlsFootLimitsSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsFootLimitsSettings_Statics::NewStructOps, TEXT("AlsFootLimitsSettings"), &Z_Registration_Info_UScriptStruct_AlsFootLimitsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsFootLimitsSettings), 38536752U) },
		{ FAlsFeetSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsFeetSettings_Statics::NewStructOps, TEXT("AlsFeetSettings"), &Z_Registration_Info_UScriptStruct_AlsFeetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsFeetSettings), 1474455593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsFeetSettings_h_177675846(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsFeetSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsFeetSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
