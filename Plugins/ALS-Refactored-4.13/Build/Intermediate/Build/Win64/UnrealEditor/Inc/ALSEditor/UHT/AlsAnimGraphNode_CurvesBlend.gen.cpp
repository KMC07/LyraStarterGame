// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSEditor/Public/Nodes/AlsAnimGraphNode_CurvesBlend.h"
#include "ALS/Public/Nodes/AlsAnimNode_CurvesBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimGraphNode_CurvesBlend() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend();
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend();
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_ALSEditor();
// End Cross Module References
	void UAlsAnimGraphNode_CurvesBlend::StaticRegisterNativesUAlsAnimGraphNode_CurvesBlend()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsAnimGraphNode_CurvesBlend);
	UClass* Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_NoRegister()
	{
		return UAlsAnimGraphNode_CurvesBlend::StaticClass();
	}
	struct Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/AlsAnimGraphNode_CurvesBlend.h" },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimGraphNode_CurvesBlend.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimGraphNode_CurvesBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsAnimGraphNode_CurvesBlend, Node), Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::NewProp_Node_MetaData) }; // 3856332194
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsAnimGraphNode_CurvesBlend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::ClassParams = {
		&UAlsAnimGraphNode_CurvesBlend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend()
	{
		if (!Z_Registration_Info_UClass_UAlsAnimGraphNode_CurvesBlend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsAnimGraphNode_CurvesBlend.OuterSingleton, Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsAnimGraphNode_CurvesBlend.OuterSingleton;
	}
	template<> ALSEDITOR_API UClass* StaticClass<UAlsAnimGraphNode_CurvesBlend>()
	{
		return UAlsAnimGraphNode_CurvesBlend::StaticClass();
	}
	UAlsAnimGraphNode_CurvesBlend::UAlsAnimGraphNode_CurvesBlend(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsAnimGraphNode_CurvesBlend);
	UAlsAnimGraphNode_CurvesBlend::~UAlsAnimGraphNode_CurvesBlend() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Nodes_AlsAnimGraphNode_CurvesBlend_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Nodes_AlsAnimGraphNode_CurvesBlend_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsAnimGraphNode_CurvesBlend, UAlsAnimGraphNode_CurvesBlend::StaticClass, TEXT("UAlsAnimGraphNode_CurvesBlend"), &Z_Registration_Info_UClass_UAlsAnimGraphNode_CurvesBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsAnimGraphNode_CurvesBlend), 2833722702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Nodes_AlsAnimGraphNode_CurvesBlend_h_1000189887(TEXT("/Script/ALSEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Nodes_AlsAnimGraphNode_CurvesBlend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_Nodes_AlsAnimGraphNode_CurvesBlend_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
