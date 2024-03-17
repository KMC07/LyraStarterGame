// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSEditor/Public/Modifiers/AlsAnimationModifier_CreateCurves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimationModifier_CreateCurves() {}
// Cross Module References
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateCurves();
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_NoRegister();
	ALSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAlsAnimationCurve();
	ALSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAlsAnimationCurveKey();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	UPackage* Z_Construct_UPackage__Script_ALSEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey;
class UScriptStruct* FAlsAnimationCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsAnimationCurveKey, (UObject*)Z_Construct_UPackage__Script_ALSEditor(), TEXT("AlsAnimationCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey.OuterSingleton;
}
template<> ALSEDITOR_API UScriptStruct* StaticStruct<FAlsAnimationCurveKey>()
{
	return FAlsAnimationCurveKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsAnimationCurveKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Frame_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimationCurveKey, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Frame_MetaData), Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Frame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimationCurveKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
		nullptr,
		&NewStructOps,
		"AlsAnimationCurveKey",
		Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::PropPointers),
		sizeof(FAlsAnimationCurveKey),
		alignof(FAlsAnimationCurveKey),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsAnimationCurveKey()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsAnimationCurve;
class UScriptStruct* FAlsAnimationCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsAnimationCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsAnimationCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsAnimationCurve, (UObject*)Z_Construct_UPackage__Script_ALSEditor(), TEXT("AlsAnimationCurve"));
	}
	return Z_Registration_Info_UScriptStruct_AlsAnimationCurve.OuterSingleton;
}
template<> ALSEDITOR_API UScriptStruct* StaticStruct<FAlsAnimationCurve>()
{
	return FAlsAnimationCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddKeyOnEachFrame_MetaData[];
#endif
		static void NewProp_bAddKeyOnEachFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddKeyOnEachFrame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsAnimationCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimationCurve, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_bAddKeyOnEachFrame_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_bAddKeyOnEachFrame_SetBit(void* Obj)
	{
		((FAlsAnimationCurve*)Obj)->bAddKeyOnEachFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_bAddKeyOnEachFrame = { "bAddKeyOnEachFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsAnimationCurve), &Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_bAddKeyOnEachFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_bAddKeyOnEachFrame_MetaData), Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_bAddKeyOnEachFrame_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAlsAnimationCurveKey, METADATA_PARAMS(0, nullptr) }; // 4091383996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimationCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Keys_MetaData), Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Keys_MetaData) }; // 4091383996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_bAddKeyOnEachFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewProp_Keys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
		nullptr,
		&NewStructOps,
		"AlsAnimationCurve",
		Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::PropPointers),
		sizeof(FAlsAnimationCurve),
		alignof(FAlsAnimationCurve),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsAnimationCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsAnimationCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsAnimationCurve.InnerSingleton, Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsAnimationCurve.InnerSingleton;
	}
	void UAlsAnimationModifier_CreateCurves::StaticRegisterNativesUAlsAnimationModifier_CreateCurves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimationModifier_CreateCurves);
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_NoRegister()
	{
		return UAlsAnimationModifier_CreateCurves::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Als Create Curves Animation Modifier" },
		{ "IncludePath", "Modifiers/AlsAnimationModifier_CreateCurves.h" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_bOverrideExistingCurves_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	void Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_bOverrideExistingCurves_SetBit(void* Obj)
	{
		((UAlsAnimationModifier_CreateCurves*)Obj)->bOverrideExistingCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_bOverrideExistingCurves = { "bOverrideExistingCurves", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlsAnimationModifier_CreateCurves), &Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_bOverrideExistingCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_bOverrideExistingCurves_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_bOverrideExistingCurves_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAlsAnimationCurve, METADATA_PARAMS(0, nullptr) }; // 1520132807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_Curves_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/AlsAnimationModifier_CreateCurves.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimationModifier_CreateCurves, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_Curves_MetaData), Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_Curves_MetaData) }; // 1520132807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_bOverrideExistingCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::NewProp_Curves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimationModifier_CreateCurves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::ClassParams = {
		&UAlsAnimationModifier_CreateCurves::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimationModifier_CreateCurves()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimationModifier_CreateCurves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimationModifier_CreateCurves.OuterSingleton, Z_Construct_UClass_UAlsAnimationModifier_CreateCurves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimationModifier_CreateCurves.OuterSingleton;
	}
	template<> ALSEDITOR_API UClass* StaticClass<UAlsAnimationModifier_CreateCurves>()
	{
		return UAlsAnimationModifier_CreateCurves::StaticClass();
	}
	UAlsAnimationModifier_CreateCurves::UAlsAnimationModifier_CreateCurves() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimationModifier_CreateCurves);
	UAlsAnimationModifier_CreateCurves::~UAlsAnimationModifier_CreateCurves() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_Statics::ScriptStructInfo[] = {
		{ FAlsAnimationCurveKey::StaticStruct, Z_Construct_UScriptStruct_FAlsAnimationCurveKey_Statics::NewStructOps, TEXT("AlsAnimationCurveKey"), &Z_Registration_Info_UScriptStruct_AlsAnimationCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsAnimationCurveKey), 4091383996U) },
		{ FAlsAnimationCurve::StaticStruct, Z_Construct_UScriptStruct_FAlsAnimationCurve_Statics::NewStructOps, TEXT("AlsAnimationCurve"), &Z_Registration_Info_UScriptStruct_AlsAnimationCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsAnimationCurve), 1520132807U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimationModifier_CreateCurves, UAlsAnimationModifier_CreateCurves::StaticClass, TEXT("UAlsAnimationModifier_CreateCurves"), &Z_Registration_Info_UClass_UAlsAnimationModifier_CreateCurves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimationModifier_CreateCurves), 4192140653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_3665123884(TEXT("/Script/ALSEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Modifiers_AlsAnimationModifier_CreateCurves_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
