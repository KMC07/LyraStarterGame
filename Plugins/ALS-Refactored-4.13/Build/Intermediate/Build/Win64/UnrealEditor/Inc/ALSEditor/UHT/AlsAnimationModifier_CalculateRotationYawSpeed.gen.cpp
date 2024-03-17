// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSEditor/Public/Modifiers/AlsAnimationModifier_CalculateRotationYawSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimationModifier_CalculateRotationYawSpeed() {}
// Cross Module References
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed();
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	UPackage* Z_Construct_UPackage__Script_ALSEditor();
// End Cross Module References
	void UAlsAnimationModifier_CalculateRotationYawSpeed::StaticRegisterNativesUAlsAnimationModifier_CalculateRotationYawSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimationModifier_CalculateRotationYawSpeed);
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_NoRegister()
	{
		return UAlsAnimationModifier_CalculateRotationYawSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This animation modifier calculates the root rotation speed and is used to create the rotation yaw\n// speed curves for the rotation animations. Each curve value represents the rotation speed from\n// the current and next frame, so it can be applied to the actors rotation to mimic root motion.\n" },
		{ "DisplayName", "Als Calculate Rotation Yaw Speed Animation Modifier" },
		{ "IncludePath", "Modifiers/AlsAnimationModifier_CalculateRotationYawSpeed.h" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CalculateRotationYawSpeed.h" },
		{ "ToolTip", "This animation modifier calculates the root rotation speed and is used to create the rotation yaw\nspeed curves for the rotation animations. Each curve value represents the rotation speed from\nthe current and next frame, so it can be applied to the actors rotation to mimic root motion." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimationModifier_CalculateRotationYawSpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::ClassParams = {
		&UAlsAnimationModifier_CalculateRotationYawSpeed::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed.OuterSingleton, Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed.OuterSingleton;
	}
	template<> ALSEDITOR_API UClass* StaticClass<UAlsAnimationModifier_CalculateRotationYawSpeed>()
	{
		return UAlsAnimationModifier_CalculateRotationYawSpeed::StaticClass();
	}
	UAlsAnimationModifier_CalculateRotationYawSpeed::UAlsAnimationModifier_CalculateRotationYawSpeed() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimationModifier_CalculateRotationYawSpeed);
	UAlsAnimationModifier_CalculateRotationYawSpeed::~UAlsAnimationModifier_CalculateRotationYawSpeed() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CalculateRotationYawSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CalculateRotationYawSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed, UAlsAnimationModifier_CalculateRotationYawSpeed::StaticClass, TEXT("UAlsAnimationModifier_CalculateRotationYawSpeed"), &Z_Registration_Info_UClass_UAlsAnimationModifier_CalculateRotationYawSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimationModifier_CalculateRotationYawSpeed), 254086760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CalculateRotationYawSpeed_h_2445383338(TEXT("/Script/ALSEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CalculateRotationYawSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CalculateRotationYawSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
