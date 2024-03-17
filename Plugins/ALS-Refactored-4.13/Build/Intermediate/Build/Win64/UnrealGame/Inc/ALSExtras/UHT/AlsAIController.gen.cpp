// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSExtras/Public/AlsAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ALSEXTRAS_API UClass* Z_Construct_UClass_AAlsAIController();
	ALSEXTRAS_API UClass* Z_Construct_UClass_AAlsAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSExtras();
// End Cross Module References
	void AAlsAIController::StaticRegisterNativesAAlsAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAlsAIController);
	UClass* Z_Construct_UClass_AAlsAIController_NoRegister()
	{
		return AAlsAIController::StaticClass();
	}
	struct Z_Construct_UClass_AAlsAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlsAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSExtras,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsAIController_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als AI Controller" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AlsAIController.h" },
		{ "ModuleRelativePath", "Public/AlsAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AlsAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAlsAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsAIController_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_AAlsAIController_Statics::NewProp_BehaviorTree_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAlsAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsAIController_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlsAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlsAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAlsAIController_Statics::ClassParams = {
		&AAlsAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAlsAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAlsAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAlsAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAlsAIController()
	{
		if (!Z_Registration_Info_UClass_AAlsAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAlsAIController.OuterSingleton, Z_Construct_UClass_AAlsAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAlsAIController.OuterSingleton;
	}
	template<> ALSEXTRAS_API UClass* StaticClass<AAlsAIController>()
	{
		return AAlsAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlsAIController);
	AAlsAIController::~AAlsAIController() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSExtras_Public_AlsAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSExtras_Public_AlsAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAlsAIController, AAlsAIController::StaticClass, TEXT("AAlsAIController"), &Z_Registration_Info_UClass_AAlsAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAlsAIController), 686047153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSExtras_Public_AlsAIController_h_897614405(TEXT("/Script/ALSExtras"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSExtras_Public_AlsAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSExtras_Public_AlsAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
