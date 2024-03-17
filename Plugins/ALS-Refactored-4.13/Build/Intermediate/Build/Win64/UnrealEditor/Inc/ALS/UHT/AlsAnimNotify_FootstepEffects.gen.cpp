// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Notifies/AlsAnimNotify_FootstepEffects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimNotify_FootstepEffects() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotify_FootstepEffects();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsFootstepEffectsSettings();
	ALS_API UClass* Z_Construct_UClass_UAlsFootstepEffectsSettings_NoRegister();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsFootBone();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsFootstepSoundType();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFootstepEffectSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat4f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsFootBone;
	static UEnum* EAlsFootBone_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootBone.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsFootBone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsFootBone, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsFootBone"));
		}
		return Z_Registration_Info_UEnum_EAlsFootBone.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsFootBone>()
	{
		return EAlsFootBone_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsFootBone_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsFootBone_Statics::Enumerators[] = {
		{ "EAlsFootBone::Left", (int64)EAlsFootBone::Left },
		{ "EAlsFootBone::Right", (int64)EAlsFootBone::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsFootBone_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EAlsFootBone::Left" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "Right.Name", "EAlsFootBone::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsFootBone_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsFootBone",
		"EAlsFootBone",
		Z_Construct_UEnum_ALS_EAlsFootBone_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootBone_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootBone_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsFootBone_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsFootBone()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsFootBone.InnerSingleton, Z_Construct_UEnum_ALS_EAlsFootBone_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsFootBone.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsFootstepSoundType;
	static UEnum* EAlsFootstepSoundType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepSoundType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsFootstepSoundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsFootstepSoundType, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsFootstepSoundType"));
		}
		return Z_Registration_Info_UEnum_EAlsFootstepSoundType.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsFootstepSoundType>()
	{
		return EAlsFootstepSoundType_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::Enumerators[] = {
		{ "EAlsFootstepSoundType::Step", (int64)EAlsFootstepSoundType::Step },
		{ "EAlsFootstepSoundType::WalkRun", (int64)EAlsFootstepSoundType::WalkRun },
		{ "EAlsFootstepSoundType::Land", (int64)EAlsFootstepSoundType::Land },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Land.Name", "EAlsFootstepSoundType::Land" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "Step.Name", "EAlsFootstepSoundType::Step" },
		{ "WalkRun.Name", "EAlsFootstepSoundType::WalkRun" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsFootstepSoundType",
		"EAlsFootstepSoundType",
		Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsFootstepSoundType()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepSoundType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsFootstepSoundType.InnerSingleton, Z_Construct_UEnum_ALS_EAlsFootstepSoundType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsFootstepSoundType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode;
	static UEnum* EAlsFootstepSoundSpawnMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsFootstepSoundSpawnMode"));
		}
		return Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsFootstepSoundSpawnMode>()
	{
		return EAlsFootstepSoundSpawnMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::Enumerators[] = {
		{ "EAlsFootstepSoundSpawnMode::SpawnAtTraceHitLocation", (int64)EAlsFootstepSoundSpawnMode::SpawnAtTraceHitLocation },
		{ "EAlsFootstepSoundSpawnMode::SpawnAttachedToFootBone", (int64)EAlsFootstepSoundSpawnMode::SpawnAttachedToFootBone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "SpawnAttachedToFootBone.Name", "EAlsFootstepSoundSpawnMode::SpawnAttachedToFootBone" },
		{ "SpawnAtTraceHitLocation.Name", "EAlsFootstepSoundSpawnMode::SpawnAtTraceHitLocation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsFootstepSoundSpawnMode",
		"EAlsFootstepSoundSpawnMode",
		Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode.InnerSingleton, Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode;
	static UEnum* EAlsFootstepDecalSpawnMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsFootstepDecalSpawnMode"));
		}
		return Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsFootstepDecalSpawnMode>()
	{
		return EAlsFootstepDecalSpawnMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::Enumerators[] = {
		{ "EAlsFootstepDecalSpawnMode::SpawnAtTraceHitLocation", (int64)EAlsFootstepDecalSpawnMode::SpawnAtTraceHitLocation },
		{ "EAlsFootstepDecalSpawnMode::SpawnAttachedToTraceHitComponent", (int64)EAlsFootstepDecalSpawnMode::SpawnAttachedToTraceHitComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "SpawnAttachedToTraceHitComponent.Name", "EAlsFootstepDecalSpawnMode::SpawnAttachedToTraceHitComponent" },
		{ "SpawnAtTraceHitLocation.Name", "EAlsFootstepDecalSpawnMode::SpawnAtTraceHitLocation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsFootstepDecalSpawnMode",
		"EAlsFootstepDecalSpawnMode",
		Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode.InnerSingleton, Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode;
	static UEnum* EAlsFootstepParticleEffectSpawnMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsFootstepParticleEffectSpawnMode"));
		}
		return Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsFootstepParticleEffectSpawnMode>()
	{
		return EAlsFootstepParticleEffectSpawnMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::Enumerators[] = {
		{ "EAlsFootstepParticleEffectSpawnMode::SpawnAtTraceHitLocation", (int64)EAlsFootstepParticleEffectSpawnMode::SpawnAtTraceHitLocation },
		{ "EAlsFootstepParticleEffectSpawnMode::SpawnAttachedToFootBone", (int64)EAlsFootstepParticleEffectSpawnMode::SpawnAttachedToFootBone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "SpawnAttachedToFootBone.Name", "EAlsFootstepParticleEffectSpawnMode::SpawnAttachedToFootBone" },
		{ "SpawnAtTraceHitLocation.Name", "EAlsFootstepParticleEffectSpawnMode::SpawnAtTraceHitLocation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsFootstepParticleEffectSpawnMode",
		"EAlsFootstepParticleEffectSpawnMode",
		Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode()
	{
		if (!Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode.InnerSingleton, Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings;
class UScriptStruct* FAlsFootstepEffectSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsFootstepEffectSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsFootstepEffectSettings>()
{
	return FAlsFootstepEffectSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundSpawnMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSpawnMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundSpawnMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalFadeOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalFadeOutDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DecalSpawnMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSpawnMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DecalSpawnMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalFootLeftRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalFootLeftRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalFootRightRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalFootRightRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalFootLeftRotationOffsetQuaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalFootLeftRotationOffsetQuaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalFootRightRotationOffsetQuaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalFootRightRotationOffsetQuaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ParticleSystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParticleSystemSpawnMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemSpawnMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParticleSystemSpawnMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleSystemLocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemFootLeftRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleSystemFootLeftRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemFootRightRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleSystemFootRightRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemFootLeftRotationOffsetQuaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleSystemFootLeftRotationOffsetQuaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemFootRightRotationOffsetQuaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleSystemFootRightRotationOffsetQuaternion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsFootstepEffectSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_Sound_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_Sound_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_SoundSpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_SoundSpawnMode_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_SoundSpawnMode = { "SoundSpawnMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, SoundSpawnMode), Z_Construct_UEnum_ALS_EAlsFootstepSoundSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_SoundSpawnMode_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_SoundSpawnMode_MetaData) }; // 2193136982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalMaterial_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSize_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalSize), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSize_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalDuration = { "DecalDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalDuration_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFadeOutDuration_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFadeOutDuration = { "DecalFadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalFadeOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFadeOutDuration_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFadeOutDuration_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSpawnMode_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSpawnMode = { "DecalSpawnMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalSpawnMode), Z_Construct_UEnum_ALS_EAlsFootstepDecalSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSpawnMode_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSpawnMode_MetaData) }; // 804905398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalLocationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalLocationOffset = { "DecalLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalLocationOffset), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalLocationOffset_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffset = { "DecalFootLeftRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalFootLeftRotationOffset), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffset_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffset = { "DecalFootRightRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalFootRightRotationOffset), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffset_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffsetQuaternion_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffsetQuaternion = { "DecalFootLeftRotationOffsetQuaternion", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalFootLeftRotationOffsetQuaternion), Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffsetQuaternion_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffsetQuaternion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffsetQuaternion_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffsetQuaternion = { "DecalFootRightRotationOffsetQuaternion", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, DecalFootRightRotationOffsetQuaternion), Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffsetQuaternion_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffsetQuaternion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, ParticleSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystem_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystem_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemSpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemSpawnMode_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemSpawnMode = { "ParticleSystemSpawnMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, ParticleSystemSpawnMode), Z_Construct_UEnum_ALS_EAlsFootstepParticleEffectSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemSpawnMode_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemSpawnMode_MetaData) }; // 1471619526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemLocationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemLocationOffset = { "ParticleSystemLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, ParticleSystemLocationOffset), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemLocationOffset_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemLocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffset = { "ParticleSystemFootLeftRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, ParticleSystemFootLeftRotationOffset), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffset_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffset_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffset = { "ParticleSystemFootRightRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, ParticleSystemFootRightRotationOffset), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffset_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffsetQuaternion_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffsetQuaternion = { "ParticleSystemFootLeftRotationOffsetQuaternion", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, ParticleSystemFootLeftRotationOffsetQuaternion), Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffsetQuaternion_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffsetQuaternion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffsetQuaternion_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffsetQuaternion = { "ParticleSystemFootRightRotationOffsetQuaternion", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootstepEffectSettings, ParticleSystemFootRightRotationOffsetQuaternion), Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffsetQuaternion_MetaData), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffsetQuaternion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_SoundSpawnMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_SoundSpawnMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFadeOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSpawnMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalSpawnMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootLeftRotationOffsetQuaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_DecalFootRightRotationOffsetQuaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemSpawnMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemSpawnMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemLocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootLeftRotationOffsetQuaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewProp_ParticleSystemFootRightRotationOffsetQuaternion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsFootstepEffectSettings",
		Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::PropPointers),
		sizeof(FAlsFootstepEffectSettings),
		alignof(FAlsFootstepEffectSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsFootstepEffectSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings.InnerSingleton, Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings.InnerSingleton;
	}
	void UAlsFootstepEffectsSettings::StaticRegisterNativesUAlsFootstepEffectsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsFootstepEffectsSettings);
	UClass* Z_Construct_UClass_UAlsFootstepEffectsSettings_NoRegister()
	{
		return UAlsFootstepEffectsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceTraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceTraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLeftYAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLeftYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLeftZAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLeftZAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootRightYAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootRightYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootRightZAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootRightZAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSpawnAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalSpawnAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSpawnAngleThresholdCos_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalSpawnAngleThresholdCos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Effects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceChannel = { "SurfaceTraceChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, SurfaceTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceChannel_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceDistance = { "SurfaceTraceDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, SurfaceTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceDistance_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftYAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Foot Left Y Axis" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftYAxis = { "FootLeftYAxis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, FootLeftYAxis), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftYAxis_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftYAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftZAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Foot Left Z Axis" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftZAxis = { "FootLeftZAxis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, FootLeftZAxis), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftZAxis_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftZAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightYAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Foot Right Y Axis" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightYAxis = { "FootRightYAxis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, FootRightYAxis), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightYAxis_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightYAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightZAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Foot Right Z Axis" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightZAxis = { "FootRightZAxis", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, FootRightZAxis), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightZAxis_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightZAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "// Prevents footstep decals from spawning if the angle between the foot's Z axis and the surface normal exceeds this value.\n" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "ToolTip", "Prevents footstep decals from spawning if the angle between the foot's Z axis and the surface normal exceeds this value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThreshold = { "DecalSpawnAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, DecalSpawnAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThreshold_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThresholdCos_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThresholdCos = { "DecalSpawnAngleThresholdCos", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, DecalSpawnAngleThresholdCos), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThresholdCos_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThresholdCos_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects_ValueProp = { "Effects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAlsFootstepEffectSettings, METADATA_PARAMS(0, nullptr) }; // 916061595
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects_Key_KeyProp = { "Effects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsFootstepEffectsSettings, Effects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects_MetaData), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects_MetaData) }; // 2508321301 916061595
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_SurfaceTraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootLeftZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_FootRightZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_DecalSpawnAngleThresholdCos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::NewProp_Effects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsFootstepEffectsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::ClassParams = {
		&UAlsFootstepEffectsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsFootstepEffectsSettings()
	{
		if (!Z_Registration_Info_UClass_UAlsFootstepEffectsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsFootstepEffectsSettings.OuterSingleton, Z_Construct_UClass_UAlsFootstepEffectsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsFootstepEffectsSettings.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsFootstepEffectsSettings>()
	{
		return UAlsFootstepEffectsSettings::StaticClass();
	}
	UAlsFootstepEffectsSettings::UAlsFootstepEffectsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsFootstepEffectsSettings);
	UAlsFootstepEffectsSettings::~UAlsFootstepEffectsSettings() {}
	void UAlsAnimNotify_FootstepEffects::StaticRegisterNativesUAlsAnimNotify_FootstepEffects()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimNotify_FootstepEffects);
	UClass* Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_NoRegister()
	{
		return UAlsAnimNotify_FootstepEffects::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepEffectsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FootstepEffectsSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootBone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootBone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipEffectsWhenInAir_MetaData[];
#endif
		static void NewProp_bSkipEffectsWhenInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipEffectsWhenInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnSound_MetaData[];
#endif
		static void NewProp_bSpawnSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundVolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundVolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundPitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundPitchMultiplier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreFootstepSoundBlockCurve_MetaData[];
#endif
		static void NewProp_bIgnoreFootstepSoundBlockCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreFootstepSoundBlockCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnDecal_MetaData[];
#endif
		static void NewProp_bSpawnDecal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnDecal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnParticleSystem_MetaData[];
#endif
		static void NewProp_bSpawnParticleSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnParticleSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings|Sound Settings|Decal Settings|Particle System" },
		{ "DisplayName", "Als Footstep Effects Animation Notify" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/AlsAnimNotify_FootstepEffects.h" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootstepEffectsSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootstepEffectsSettings = { "FootstepEffectsSettings", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_FootstepEffects, FootstepEffectsSettings), Z_Construct_UClass_UAlsFootstepEffectsSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootstepEffectsSettings_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootstepEffectsSettings_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootBone = { "FootBone", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_FootstepEffects, FootBone), Z_Construct_UEnum_ALS_EAlsFootBone, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootBone_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootBone_MetaData) }; // 2535440393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSkipEffectsWhenInAir_MetaData[] = {
		{ "Category", "Settings|Sound" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSkipEffectsWhenInAir_SetBit(void* Obj)
	{
		((UAlsAnimNotify_FootstepEffects*)Obj)->bSkipEffectsWhenInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSkipEffectsWhenInAir = { "bSkipEffectsWhenInAir", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimNotify_FootstepEffects), &Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSkipEffectsWhenInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSkipEffectsWhenInAir_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSkipEffectsWhenInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnSound_MetaData[] = {
		{ "Category", "Settings|Sound" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnSound_SetBit(void* Obj)
	{
		((UAlsAnimNotify_FootstepEffects*)Obj)->bSpawnSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnSound = { "bSpawnSound", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimNotify_FootstepEffects), &Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnSound_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundVolumeMultiplier_MetaData[] = {
		{ "Category", "Settings|Sound" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundVolumeMultiplier = { "SoundVolumeMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_FootstepEffects, SoundVolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundVolumeMultiplier_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundVolumeMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundPitchMultiplier_MetaData[] = {
		{ "Category", "Settings|Sound" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundPitchMultiplier = { "SoundPitchMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_FootstepEffects, SoundPitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundPitchMultiplier_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundPitchMultiplier_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundType_MetaData[] = {
		{ "Category", "Settings|Sound" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundType = { "SoundType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_FootstepEffects, SoundType), Z_Construct_UEnum_ALS_EAlsFootstepSoundType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundType_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundType_MetaData) }; // 2740389990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bIgnoreFootstepSoundBlockCurve_MetaData[] = {
		{ "Category", "Settings|Sound" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bIgnoreFootstepSoundBlockCurve_SetBit(void* Obj)
	{
		((UAlsAnimNotify_FootstepEffects*)Obj)->bIgnoreFootstepSoundBlockCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bIgnoreFootstepSoundBlockCurve = { "bIgnoreFootstepSoundBlockCurve", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimNotify_FootstepEffects), &Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bIgnoreFootstepSoundBlockCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bIgnoreFootstepSoundBlockCurve_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bIgnoreFootstepSoundBlockCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnDecal_MetaData[] = {
		{ "Category", "Settings|Decal" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnDecal_SetBit(void* Obj)
	{
		((UAlsAnimNotify_FootstepEffects*)Obj)->bSpawnDecal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnDecal = { "bSpawnDecal", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimNotify_FootstepEffects), &Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnDecal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnDecal_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnDecal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnParticleSystem_MetaData[] = {
		{ "Category", "Settings|Particle System" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_FootstepEffects.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnParticleSystem_SetBit(void* Obj)
	{
		((UAlsAnimNotify_FootstepEffects*)Obj)->bSpawnParticleSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnParticleSystem = { "bSpawnParticleSystem", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimNotify_FootstepEffects), &Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnParticleSystem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnParticleSystem_MetaData), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnParticleSystem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootstepEffectsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootBone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_FootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSkipEffectsWhenInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundVolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundPitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_SoundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bIgnoreFootstepSoundBlockCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnDecal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::NewProp_bSpawnParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimNotify_FootstepEffects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::ClassParams = {
		&UAlsAnimNotify_FootstepEffects::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimNotify_FootstepEffects()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimNotify_FootstepEffects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimNotify_FootstepEffects.OuterSingleton, Z_Construct_UClass_UAlsAnimNotify_FootstepEffects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimNotify_FootstepEffects.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsAnimNotify_FootstepEffects>()
	{
		return UAlsAnimNotify_FootstepEffects::StaticClass();
	}
	UAlsAnimNotify_FootstepEffects::UAlsAnimNotify_FootstepEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimNotify_FootstepEffects);
	UAlsAnimNotify_FootstepEffects::~UAlsAnimNotify_FootstepEffects() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::EnumInfo[] = {
		{ EAlsFootBone_StaticEnum, TEXT("EAlsFootBone"), &Z_Registration_Info_UEnum_EAlsFootBone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2535440393U) },
		{ EAlsFootstepSoundType_StaticEnum, TEXT("EAlsFootstepSoundType"), &Z_Registration_Info_UEnum_EAlsFootstepSoundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2740389990U) },
		{ EAlsFootstepSoundSpawnMode_StaticEnum, TEXT("EAlsFootstepSoundSpawnMode"), &Z_Registration_Info_UEnum_EAlsFootstepSoundSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2193136982U) },
		{ EAlsFootstepDecalSpawnMode_StaticEnum, TEXT("EAlsFootstepDecalSpawnMode"), &Z_Registration_Info_UEnum_EAlsFootstepDecalSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 804905398U) },
		{ EAlsFootstepParticleEffectSpawnMode_StaticEnum, TEXT("EAlsFootstepParticleEffectSpawnMode"), &Z_Registration_Info_UEnum_EAlsFootstepParticleEffectSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1471619526U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::ScriptStructInfo[] = {
		{ FAlsFootstepEffectSettings::StaticStruct, Z_Construct_UScriptStruct_FAlsFootstepEffectSettings_Statics::NewStructOps, TEXT("AlsFootstepEffectSettings"), &Z_Registration_Info_UScriptStruct_AlsFootstepEffectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsFootstepEffectSettings), 916061595U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsFootstepEffectsSettings, UAlsFootstepEffectsSettings::StaticClass, TEXT("UAlsFootstepEffectsSettings"), &Z_Registration_Info_UClass_UAlsFootstepEffectsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsFootstepEffectsSettings), 3510706001U) },
		{ Z_Construct_UClass_UAlsAnimNotify_FootstepEffects, UAlsAnimNotify_FootstepEffects::StaticClass, TEXT("UAlsAnimNotify_FootstepEffects"), &Z_Registration_Info_UClass_UAlsAnimNotify_FootstepEffects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimNotify_FootstepEffects), 3370593789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_4084102196(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotify_FootstepEffects_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
