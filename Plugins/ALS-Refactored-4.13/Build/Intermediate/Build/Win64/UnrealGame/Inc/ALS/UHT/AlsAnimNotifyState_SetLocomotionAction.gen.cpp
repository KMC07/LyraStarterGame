// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Notifies/AlsAnimNotifyState_SetLocomotionAction.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimNotifyState_SetLocomotionAction() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	void UAlsAnimNotifyState_SetLocomotionAction::StaticRegisterNativesUAlsAnimNotifyState_SetLocomotionAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimNotifyState_SetLocomotionAction);
	UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_NoRegister()
	{
		return UAlsAnimNotifyState_SetLocomotionAction::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als Set Locomotion Action Animation Notify State" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/AlsAnimNotifyState_SetLocomotionAction.h" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotifyState_SetLocomotionAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::NewProp_LocomotionAction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Notifies/AlsAnimNotifyState_SetLocomotionAction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::NewProp_LocomotionAction = { "LocomotionAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimNotifyState_SetLocomotionAction, LocomotionAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::NewProp_LocomotionAction_MetaData), Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::NewProp_LocomotionAction_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::NewProp_LocomotionAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimNotifyState_SetLocomotionAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::ClassParams = {
		&UAlsAnimNotifyState_SetLocomotionAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimNotifyState_SetLocomotionAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimNotifyState_SetLocomotionAction.OuterSingleton, Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimNotifyState_SetLocomotionAction.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsAnimNotifyState_SetLocomotionAction>()
	{
		return UAlsAnimNotifyState_SetLocomotionAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimNotifyState_SetLocomotionAction);
	UAlsAnimNotifyState_SetLocomotionAction::~UAlsAnimNotifyState_SetLocomotionAction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetLocomotionAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetLocomotionAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimNotifyState_SetLocomotionAction, UAlsAnimNotifyState_SetLocomotionAction::StaticClass, TEXT("UAlsAnimNotifyState_SetLocomotionAction"), &Z_Registration_Info_UClass_UAlsAnimNotifyState_SetLocomotionAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimNotifyState_SetLocomotionAction), 1522610060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetLocomotionAction_h_3356525634(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetLocomotionAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Notifies_AlsAnimNotifyState_SetLocomotionAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
