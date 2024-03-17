// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSCamera/Public/Notifies/AlsAnimNotify_CameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimNotify_CameraShake() {}
// Cross Module References
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsAnimNotify_CameraShake();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsAnimNotify_CameraShake_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSCamera();
// End Cross Module References
	void UAlsAnimNotify_CameraShake::StaticRegisterNativesUAlsAnimNotify_CameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimNotify_CameraShake);
	UClass* Z_Construct_UClass_UAlsAnimNotify_CameraShake_NoRegister()
	{
		return UAlsAnimNotify_CameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShakeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als Camera Shake Animation Notify" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/AlsAnimNotify_CameraShake.h" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_CameraShake.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_CameraShake.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_CameraShake, CameraShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData), Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotify_CameraShake.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeScale = { "CameraShakeScale", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotify_CameraShake, CameraShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeScale_MetaData), Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::NewProp_CameraShakeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimNotify_CameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::ClassParams = {
		&UAlsAnimNotify_CameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimNotify_CameraShake()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimNotify_CameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimNotify_CameraShake.OuterSingleton, Z_Construct_UClass_UAlsAnimNotify_CameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimNotify_CameraShake.OuterSingleton;
	}
	template<> ALSCAMERA_API UClass* StaticClass<UAlsAnimNotify_CameraShake>()
	{
		return UAlsAnimNotify_CameraShake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimNotify_CameraShake);
	UAlsAnimNotify_CameraShake::~UAlsAnimNotify_CameraShake() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Notifies_AlsAnimNotify_CameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Notifies_AlsAnimNotify_CameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimNotify_CameraShake, UAlsAnimNotify_CameraShake::StaticClass, TEXT("UAlsAnimNotify_CameraShake"), &Z_Registration_Info_UClass_UAlsAnimNotify_CameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimNotify_CameraShake), 2861583289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Notifies_AlsAnimNotify_CameraShake_h_3289526070(TEXT("/Script/ALSCamera"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Notifies_AlsAnimNotify_CameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Notifies_AlsAnimNotify_CameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
