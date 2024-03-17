// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Notifies/AlsAnimNotifyState_SetRootMotionScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimNotifyState_SetRootMotionScale() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	void UAlsAnimNotifyState_SetRootMotionScale::StaticRegisterNativesUAlsAnimNotifyState_SetRootMotionScale()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimNotifyState_SetRootMotionScale);
	UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_NoRegister()
	{
		return UAlsAnimNotifyState_SetRootMotionScale::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als Set Root Motion Scale Animation Notify State" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/AlsAnimNotifyState_SetRootMotionScale.h" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotifyState_SetRootMotionScale.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::NewProp_TranslationScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotifyState_SetRootMotionScale.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::NewProp_TranslationScale = { "TranslationScale", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotifyState_SetRootMotionScale, TranslationScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::NewProp_TranslationScale_MetaData), Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::NewProp_TranslationScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::NewProp_TranslationScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimNotifyState_SetRootMotionScale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::ClassParams = {
		&UAlsAnimNotifyState_SetRootMotionScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimNotifyState_SetRootMotionScale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimNotifyState_SetRootMotionScale.OuterSingleton, Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimNotifyState_SetRootMotionScale.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsAnimNotifyState_SetRootMotionScale>()
	{
		return UAlsAnimNotifyState_SetRootMotionScale::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimNotifyState_SetRootMotionScale);
	UAlsAnimNotifyState_SetRootMotionScale::~UAlsAnimNotifyState_SetRootMotionScale() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetRootMotionScale_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetRootMotionScale_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimNotifyState_SetRootMotionScale, UAlsAnimNotifyState_SetRootMotionScale::StaticClass, TEXT("UAlsAnimNotifyState_SetRootMotionScale"), &Z_Registration_Info_UClass_UAlsAnimNotifyState_SetRootMotionScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimNotifyState_SetRootMotionScale), 3257485879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetRootMotionScale_h_1375492563(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetRootMotionScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetRootMotionScale_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
