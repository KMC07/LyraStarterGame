// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSEditor/Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimationModifier_CreateLayeringCurves() {}
// Cross Module References
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves();
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	UPackage* Z_Construct_UPackage__Script_ALSEditor();
// End Cross Module References
	void UAlsAnimationModifier_CreateLayeringCurves::StaticRegisterNativesUAlsAnimationModifier_CreateLayeringCurves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimationModifier_CreateLayeringCurves);
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_NoRegister()
	{
		return UAlsAnimationModifier_CreateLayeringCurves::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideExistingCurves_MetaData[];
#endif
		static void NewProp_bOverrideExistingCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideExistingCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddKeyOnEachFrame_MetaData[];
#endif
		static void NewProp_bAddKeyOnEachFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddKeyOnEachFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddSlotCurves_MetaData[];
#endif
		static void NewProp_bAddSlotCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSlotCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotCurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlotCurveValue;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotCurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotCurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotCurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als Create Layering Curves Animation Modifier" },
		{ "IncludePath", "Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bOverrideExistingCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bOverrideExistingCurves_SetBit(void* Obj)
	{
		((UAlsAnimationModifier_CreateLayeringCurves*)Obj)->bOverrideExistingCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bOverrideExistingCurves = { "bOverrideExistingCurves", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimationModifier_CreateLayeringCurves), &Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bOverrideExistingCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bOverrideExistingCurves_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bOverrideExistingCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddKeyOnEachFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddKeyOnEachFrame_SetBit(void* Obj)
	{
		((UAlsAnimationModifier_CreateLayeringCurves*)Obj)->bAddKeyOnEachFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddKeyOnEachFrame = { "bAddKeyOnEachFrame", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimationModifier_CreateLayeringCurves), &Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddKeyOnEachFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddKeyOnEachFrame_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddKeyOnEachFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationModifier_CreateLayeringCurves, CurveValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveValue_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveValue_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationModifier_CreateLayeringCurves, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveNames_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddSlotCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddSlotCurves_SetBit(void* Obj)
	{
		((UAlsAnimationModifier_CreateLayeringCurves*)Obj)->bAddSlotCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddSlotCurves = { "bAddSlotCurves", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimationModifier_CreateLayeringCurves), &Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddSlotCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddSlotCurves_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddSlotCurves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveValue = { "SlotCurveValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationModifier_CreateLayeringCurves, SlotCurveValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveValue_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveValue_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveNames_Inner = { "SlotCurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateLayeringCurves.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveNames = { "SlotCurveNames", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationModifier_CreateLayeringCurves, SlotCurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveNames_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bOverrideExistingCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddKeyOnEachFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_CurveNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_bAddSlotCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::NewProp_SlotCurveNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimationModifier_CreateLayeringCurves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::ClassParams = {
		&UAlsAnimationModifier_CreateLayeringCurves::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimationModifier_CreateLayeringCurves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimationModifier_CreateLayeringCurves.OuterSingleton, Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimationModifier_CreateLayeringCurves.OuterSingleton;
	}
	template<> ALSEDITOR_API UClass* StaticClass<UAlsAnimationModifier_CreateLayeringCurves>()
	{
		return UAlsAnimationModifier_CreateLayeringCurves::StaticClass();
	}
	UAlsAnimationModifier_CreateLayeringCurves::UAlsAnimationModifier_CreateLayeringCurves() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimationModifier_CreateLayeringCurves);
	UAlsAnimationModifier_CreateLayeringCurves::~UAlsAnimationModifier_CreateLayeringCurves() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateLayeringCurves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateLayeringCurves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimationModifier_CreateLayeringCurves, UAlsAnimationModifier_CreateLayeringCurves::StaticClass, TEXT("UAlsAnimationModifier_CreateLayeringCurves"), &Z_Registration_Info_UClass_UAlsAnimationModifier_CreateLayeringCurves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimationModifier_CreateLayeringCurves), 1065512269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateLayeringCurves_h_3819714182(TEXT("/Script/ALSEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateLayeringCurves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateLayeringCurves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
