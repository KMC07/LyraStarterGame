// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Settings/AlsInAirRotationMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsInAirRotationMode() {}
// Cross Module References
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsInAirRotationMode();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsInAirRotationMode;
	static UEnum* EAlsInAirRotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsInAirRotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsInAirRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsInAirRotationMode, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsInAirRotationMode"));
		}
		return Z_Registration_Info_UEnum_EAlsInAirRotationMode.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsInAirRotationMode>()
	{
		return EAlsInAirRotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::Enumerators[] = {
		{ "EAlsInAirRotationMode::RotateToVelocityOnJump", (int64)EAlsInAirRotationMode::RotateToVelocityOnJump },
		{ "EAlsInAirRotationMode::KeepRelativeRotation", (int64)EAlsInAirRotationMode::KeepRelativeRotation },
		{ "EAlsInAirRotationMode::KeepWorldRotation", (int64)EAlsInAirRotationMode::KeepWorldRotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeepRelativeRotation.Name", "EAlsInAirRotationMode::KeepRelativeRotation" },
		{ "KeepWorldRotation.Name", "EAlsInAirRotationMode::KeepWorldRotation" },
		{ "ModuleRelativePath", "Public/Settings/AlsInAirRotationMode.h" },
		{ "RotateToVelocityOnJump.Name", "EAlsInAirRotationMode::RotateToVelocityOnJump" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsInAirRotationMode",
		"EAlsInAirRotationMode",
		Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsInAirRotationMode()
	{
		if (!Z_Registration_Info_UEnum_EAlsInAirRotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsInAirRotationMode.InnerSingleton, Z_Construct_UEnum_ALS_EAlsInAirRotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsInAirRotationMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirRotationMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirRotationMode_h_Statics::EnumInfo[] = {
		{ EAlsInAirRotationMode_StaticEnum, TEXT("EAlsInAirRotationMode"), &Z_Registration_Info_UEnum_EAlsInAirRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3067150662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirRotationMode_h_4279970386(TEXT("/Script/ALS"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirRotationMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirRotationMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
