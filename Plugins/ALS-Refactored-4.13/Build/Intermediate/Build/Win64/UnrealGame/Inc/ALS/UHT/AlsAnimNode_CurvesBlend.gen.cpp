// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Nodes/AlsAnimNode_CurvesBlend.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsAnimNode_CurvesBlend() {}
// Cross Module References
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsCurvesBlendMode();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsCurvesBlendMode;
	static UEnum* EAlsCurvesBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsCurvesBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsCurvesBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsCurvesBlendMode, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsCurvesBlendMode"));
		}
		return Z_Registration_Info_UEnum_EAlsCurvesBlendMode.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsCurvesBlendMode>()
	{
		return EAlsCurvesBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::Enumerators[] = {
		{ "EAlsCurvesBlendMode::BlendByAmount", (int64)EAlsCurvesBlendMode::BlendByAmount },
		{ "EAlsCurvesBlendMode::Combine", (int64)EAlsCurvesBlendMode::Combine },
		{ "EAlsCurvesBlendMode::CombinePreserved", (int64)EAlsCurvesBlendMode::CombinePreserved },
		{ "EAlsCurvesBlendMode::UseMaxValue", (int64)EAlsCurvesBlendMode::UseMaxValue },
		{ "EAlsCurvesBlendMode::UseMinValue", (int64)EAlsCurvesBlendMode::UseMinValue },
		{ "EAlsCurvesBlendMode::Override", (int64)EAlsCurvesBlendMode::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "BlendByAmount.Comment", "// Blend poses using blend amount. Same as ECurveBlendOption::BlendByWeight.\n" },
		{ "BlendByAmount.Name", "EAlsCurvesBlendMode::BlendByAmount" },
		{ "BlendByAmount.ToolTip", "Blend poses using blend amount. Same as ECurveBlendOption::BlendByWeight." },
		{ "BlueprintType", "true" },
		{ "Combine.Comment", "// Only set the value if the curves pose has the curve value. Same as ECurveBlendOption::Override.\n" },
		{ "Combine.Name", "EAlsCurvesBlendMode::Combine" },
		{ "Combine.ToolTip", "Only set the value if the curves pose has the curve value. Same as ECurveBlendOption::Override." },
		{ "CombinePreserved.Comment", "// Only set the value if the source pose doesn't have the curve value. Same as ECurveBlendOption::DoNotOverride.\n" },
		{ "CombinePreserved.Name", "EAlsCurvesBlendMode::CombinePreserved" },
		{ "CombinePreserved.ToolTip", "Only set the value if the source pose doesn't have the curve value. Same as ECurveBlendOption::DoNotOverride." },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimNode_CurvesBlend.h" },
		{ "Override.Comment", "// Completely override source pose. Same as ECurveBlendOption::UseBasePose.\n" },
		{ "Override.Name", "EAlsCurvesBlendMode::Override" },
		{ "Override.ToolTip", "Completely override source pose. Same as ECurveBlendOption::UseBasePose." },
		{ "UseMaxValue.Comment", "// Find the highest curve value from multiple poses and use that. Same as ECurveBlendOption::UseMaxValue.\n" },
		{ "UseMaxValue.Name", "EAlsCurvesBlendMode::UseMaxValue" },
		{ "UseMaxValue.ToolTip", "Find the highest curve value from multiple poses and use that. Same as ECurveBlendOption::UseMaxValue." },
		{ "UseMinValue.Comment", "// Find the lowest curve value from multiple poses and use that. Same as  ECurveBlendOption::UseMinValue.\n" },
		{ "UseMinValue.Name", "EAlsCurvesBlendMode::UseMinValue" },
		{ "UseMinValue.ToolTip", "Find the lowest curve value from multiple poses and use that. Same as  ECurveBlendOption::UseMinValue." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsCurvesBlendMode",
		"EAlsCurvesBlendMode",
		Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsCurvesBlendMode()
	{
		if (!Z_Registration_Info_UEnum_EAlsCurvesBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsCurvesBlendMode.InnerSingleton, Z_Construct_UEnum_ALS_EAlsCurvesBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsCurvesBlendMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAlsAnimNode_CurvesBlend>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAlsAnimNode_CurvesBlend cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend;
class UScriptStruct* FAlsAnimNode_CurvesBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsAnimNode_CurvesBlend"));
	}
	return Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsAnimNode_CurvesBlend>()
{
	return FAlsAnimNode_CurvesBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvesPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesPose;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendAmount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimNode_CurvesBlend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsAnimNode_CurvesBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimNode_CurvesBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimNode_CurvesBlend, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_SourcePose_MetaData), Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_SourcePose_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_CurvesPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimNode_CurvesBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_CurvesPose = { "CurvesPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimNode_CurvesBlend, CurvesPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_CurvesPose_MetaData), Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_CurvesPose_MetaData) }; // 1465313103
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimNode_CurvesBlend.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendAmount = { "BlendAmount", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimNode_CurvesBlend, BlendAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendAmount_MetaData), Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendAmount_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsAnimNode_CurvesBlend.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsAnimNode_CurvesBlend, BlendMode), Z_Construct_UEnum_ALS_EAlsCurvesBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendMode_MetaData), Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendMode_MetaData) }; // 2748357763
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_CurvesPose,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewProp_BlendMode,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AlsAnimNode_CurvesBlend",
		Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::PropPointers),
		sizeof(FAlsAnimNode_CurvesBlend),
		alignof(FAlsAnimNode_CurvesBlend),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend.InnerSingleton, Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_Statics::EnumInfo[] = {
		{ EAlsCurvesBlendMode_StaticEnum, TEXT("EAlsCurvesBlendMode"), &Z_Registration_Info_UEnum_EAlsCurvesBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2748357763U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_Statics::ScriptStructInfo[] = {
		{ FAlsAnimNode_CurvesBlend::StaticStruct, Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics::NewStructOps, TEXT("AlsAnimNode_CurvesBlend"), &Z_Registration_Info_UScriptStruct_AlsAnimNode_CurvesBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsAnimNode_CurvesBlend), 3856332194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_3218802138(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
