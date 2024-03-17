// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSCamera/Public/AlsCameraAnimationInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsCameraAnimationInstance() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_AAlsCharacter_NoRegister();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraAnimationInstance();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraAnimationInstance_NoRegister();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ALSCamera();
// End Cross Module References
	void UAlsCameraAnimationInstance::StaticRegisterNativesUAlsCameraAnimationInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsCameraAnimationInstance);
	UClass* Z_Construct_UClass_UAlsCameraAnimationInstance_NoRegister()
	{
		return UAlsCameraAnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAlsCameraAnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRightShoulder_MetaData[];
#endif
		static void NewProp_bRightShoulder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRightShoulder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AlsCameraAnimationInstance.h" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, Character), Z_Construct_UClass_AAlsCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "State" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00240800000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, Camera), Z_Construct_UClass_UAlsCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, ViewMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_ViewMode_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_ViewMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionMode = { "LocomotionMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, LocomotionMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionMode_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, RotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_RotationMode_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_RotationMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Stance_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, Stance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Stance_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Stance_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, Gait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Gait_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionAction_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionAction = { "LocomotionAction", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsCameraAnimationInstance, LocomotionAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionAction_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_bRightShoulder_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsCameraAnimationInstance.h" },
	};
#endif
	void Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_bRightShoulder_SetBit(void* Obj)
	{
		((UAlsCameraAnimationInstance*)Obj)->bRightShoulder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_bRightShoulder = { "bRightShoulder", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsCameraAnimationInstance), &Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_bRightShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_bRightShoulder_MetaData), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_bRightShoulder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_LocomotionAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::NewProp_bRightShoulder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsCameraAnimationInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::ClassParams = {
		&UAlsCameraAnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsCameraAnimationInstance()
	{
		if (!Z_Registration_Info_UClass_UAlsCameraAnimationInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsCameraAnimationInstance.OuterSingleton, Z_Construct_UClass_UAlsCameraAnimationInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsCameraAnimationInstance.OuterSingleton;
	}
	template<> ALSCAMERA_API UClass* StaticClass<UAlsCameraAnimationInstance>()
	{
		return UAlsCameraAnimationInstance::StaticClass();
	}
	UAlsCameraAnimationInstance::UAlsCameraAnimationInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsCameraAnimationInstance);
	UAlsCameraAnimationInstance::~UAlsCameraAnimationInstance() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraAnimationInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraAnimationInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsCameraAnimationInstance, UAlsCameraAnimationInstance::StaticClass, TEXT("UAlsCameraAnimationInstance"), &Z_Registration_Info_UClass_UAlsCameraAnimationInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsCameraAnimationInstance), 2432677762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraAnimationInstance_h_3819564538(TEXT("/Script/ALSCamera"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraAnimationInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraAnimationInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
