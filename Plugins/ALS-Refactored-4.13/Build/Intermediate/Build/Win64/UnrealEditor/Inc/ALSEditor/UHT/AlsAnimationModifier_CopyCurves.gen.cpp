// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSEditor/Public/Modifiers/AlsAnimationModifier_CopyCurves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimationModifier_CopyCurves() {}
// Cross Module References
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CopyCurves();
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ALSEditor();
// End Cross Module References
	void UAlsAnimationModifier_CopyCurves::StaticRegisterNativesUAlsAnimationModifier_CopyCurves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimationModifier_CopyCurves);
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_NoRegister()
	{
		return UAlsAnimationModifier_CopyCurves::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSequence_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyAllCurves_MetaData[];
#endif
		static void NewProp_bCopyAllCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyAllCurves;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als Copy Curves Animation Modifier" },
		{ "IncludePath", "Modifiers/AlsAnimationModifier_CopyCurves.h" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CopyCurves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_SourceSequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CopyCurves.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_SourceSequence = { "SourceSequence", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationModifier_CopyCurves, SourceSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_SourceSequence_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_SourceSequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_bCopyAllCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CopyCurves.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_bCopyAllCurves_SetBit(void* Obj)
	{
		((UAlsAnimationModifier_CopyCurves*)Obj)->bCopyAllCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_bCopyAllCurves = { "bCopyAllCurves", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimationModifier_CopyCurves), &Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_bCopyAllCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_bCopyAllCurves_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_bCopyAllCurves_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_CurveNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bCopyAllCurves" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CopyCurves.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationModifier_CopyCurves, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_CurveNames_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_CurveNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_SourceSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_bCopyAllCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::NewProp_CurveNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimationModifier_CopyCurves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::ClassParams = {
		&UAlsAnimationModifier_CopyCurves::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CopyCurves()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimationModifier_CopyCurves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimationModifier_CopyCurves.OuterSingleton, Z_Construct_UClass_UAlsAnimationModifier_CopyCurves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimationModifier_CopyCurves.OuterSingleton;
	}
	template<> ALSEDITOR_API UClass* StaticClass<UAlsAnimationModifier_CopyCurves>()
	{
		return UAlsAnimationModifier_CopyCurves::StaticClass();
	}
	UAlsAnimationModifier_CopyCurves::UAlsAnimationModifier_CopyCurves() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimationModifier_CopyCurves);
	UAlsAnimationModifier_CopyCurves::~UAlsAnimationModifier_CopyCurves() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CopyCurves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CopyCurves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimationModifier_CopyCurves, UAlsAnimationModifier_CopyCurves::StaticClass, TEXT("UAlsAnimationModifier_CopyCurves"), &Z_Registration_Info_UClass_UAlsAnimationModifier_CopyCurves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimationModifier_CopyCurves), 1765027917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CopyCurves_h_3381437419(TEXT("/Script/ALSEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CopyCurves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CopyCurves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
