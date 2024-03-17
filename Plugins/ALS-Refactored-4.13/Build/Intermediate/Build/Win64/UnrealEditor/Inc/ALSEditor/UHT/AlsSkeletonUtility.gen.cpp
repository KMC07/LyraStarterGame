// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSEditor/Public/AlsSkeletonUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsSkeletonUtility() {}
// Cross Module References
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsSkeletonUtility();
	ALSEDITOR_API UClass* Z_Construct_UClass_UAlsSkeletonUtility_NoRegister();
	ALSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAlsBlendProfileEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode();
	UPackage* Z_Construct_UPackage__Script_ALSEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry;
class UScriptStruct* FAlsBlendProfileEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsBlendProfileEntry, (UObject*)Z_Construct_UPackage__Script_ALSEditor(), TEXT("AlsBlendProfileEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry.OuterSingleton;
}
template<> ALSEDITOR_API UScriptStruct* StaticStruct<FAlsBlendProfileEntry>()
{
	return FAlsBlendProfileEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeDescendants_MetaData[];
#endif
		static void NewProp_bIncludeDescendants_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDescendants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsBlendProfileEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsBlendProfileEntry, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BoneName_MetaData), Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BlendScale_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BlendScale = { "BlendScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsBlendProfileEntry, BlendScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BlendScale_MetaData), Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BlendScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_bIncludeDescendants_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_bIncludeDescendants_SetBit(void* Obj)
	{
		((FAlsBlendProfileEntry*)Obj)->bIncludeDescendants = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_bIncludeDescendants = { "bIncludeDescendants", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsBlendProfileEntry), &Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_bIncludeDescendants_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_bIncludeDescendants_MetaData), Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_bIncludeDescendants_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_BlendScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewProp_bIncludeDescendants,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
		nullptr,
		&NewStructOps,
		"AlsBlendProfileEntry",
		Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::PropPointers),
		sizeof(FAlsBlendProfileEntry),
		alignof(FAlsBlendProfileEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsBlendProfileEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry.InnerSingleton, Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UAlsSkeletonUtility::execSetBoneRetargetingMode)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_RetargetingMode);
		P_GET_UBOOL(Z_Param_bIncludeDescendants);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsSkeletonUtility::SetBoneRetargetingMode(Z_Param_Skeleton,Z_Param_Out_BoneName,EBoneTranslationRetargetingMode::Type(Z_Param_RetargetingMode),Z_Param_bIncludeDescendants);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsSkeletonUtility::execAddOrReplaceWeightBlendProfile)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_PROPERTY(FNameProperty,Z_Param_BlendProfileName);
		P_GET_TARRAY_REF(FAlsBlendProfileEntry,Z_Param_Out_Entries);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsSkeletonUtility::AddOrReplaceWeightBlendProfile(Z_Param_Skeleton,Z_Param_BlendProfileName,Z_Param_Out_Entries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsSkeletonUtility::execAddOrReplaceSocket)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RelativeLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_RelativeRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsSkeletonUtility::AddOrReplaceSocket(Z_Param_Skeleton,Z_Param_SocketName,Z_Param_Out_BoneName,Z_Param_Out_RelativeLocation,Z_Param_Out_RelativeRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsSkeletonUtility::execAddOrReplaceVirtualBone)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SourceBoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_VirtualBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsSkeletonUtility::AddOrReplaceVirtualBone(Z_Param_Skeleton,Z_Param_Out_SourceBoneName,Z_Param_Out_TargetBoneName,Z_Param_VirtualBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsSkeletonUtility::execAddOrReplaceSlot)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsSkeletonUtility::AddOrReplaceSlot(Z_Param_Skeleton,Z_Param_SlotName,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsSkeletonUtility::execAddAnimationCurves)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_TARRAY_REF(FName,Z_Param_Out_CurveNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsSkeletonUtility::AddAnimationCurves(Z_Param_Skeleton,Z_Param_Out_CurveNames);
		P_NATIVE_END;
	}
	void UAlsSkeletonUtility::StaticRegisterNativesUAlsSkeletonUtility()
	{
		UClass* Class = UAlsSkeletonUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnimationCurves", &UAlsSkeletonUtility::execAddAnimationCurves },
			{ "AddOrReplaceSlot", &UAlsSkeletonUtility::execAddOrReplaceSlot },
			{ "AddOrReplaceSocket", &UAlsSkeletonUtility::execAddOrReplaceSocket },
			{ "AddOrReplaceVirtualBone", &UAlsSkeletonUtility::execAddOrReplaceVirtualBone },
			{ "AddOrReplaceWeightBlendProfile", &UAlsSkeletonUtility::execAddOrReplaceWeightBlendProfile },
			{ "SetBoneRetargetingMode", &UAlsSkeletonUtility::execSetBoneRetargetingMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics
	{
		struct AlsSkeletonUtility_eventAddAnimationCurves_Parms
		{
			USkeleton* Skeleton;
			TArray<FName> CurveNames;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddAnimationCurves_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_CurveNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddAnimationCurves_Parms, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_CurveNames_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_CurveNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::NewProp_CurveNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Skeleton Utility" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsSkeletonUtility, nullptr, "AddAnimationCurves", nullptr, nullptr, Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::AlsSkeletonUtility_eventAddAnimationCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::AlsSkeletonUtility_eventAddAnimationCurves_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics
	{
		struct AlsSkeletonUtility_eventAddOrReplaceSlot_Parms
		{
			USkeleton* Skeleton;
			FName SlotName;
			FName GroupName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSlot_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSlot_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSlot_Parms, GroupName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Skeleton Utility" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsSkeletonUtility, nullptr, "AddOrReplaceSlot", nullptr, nullptr, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::AlsSkeletonUtility_eventAddOrReplaceSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::AlsSkeletonUtility_eventAddOrReplaceSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics
	{
		struct AlsSkeletonUtility_eventAddOrReplaceSocket_Parms
		{
			USkeleton* Skeleton;
			FName SocketName;
			FName BoneName;
			FVector RelativeLocation;
			FRotator RelativeRotation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSocket_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSocket_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSocket_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_BoneName_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_BoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSocket_Parms, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeLocation_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceSocket_Parms, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeRotation_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::NewProp_RelativeRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "BoneName, RelativeLocation, RelativeRotation" },
		{ "Category", "ALS|Skeleton Utility" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsSkeletonUtility, nullptr, "AddOrReplaceSocket", nullptr, nullptr, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::AlsSkeletonUtility_eventAddOrReplaceSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::AlsSkeletonUtility_eventAddOrReplaceSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics
	{
		struct AlsSkeletonUtility_eventAddOrReplaceVirtualBone_Parms
		{
			USkeleton* Skeleton;
			FName SourceBoneName;
			FName TargetBoneName;
			FName VirtualBoneName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceVirtualBone_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_SourceBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceVirtualBone_Parms, SourceBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_SourceBoneName_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_SourceBoneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_TargetBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceVirtualBone_Parms, TargetBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_TargetBoneName_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_TargetBoneName_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_VirtualBoneName = { "VirtualBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceVirtualBone_Parms, VirtualBoneName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_SourceBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_TargetBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::NewProp_VirtualBoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SourceBoneName, TargetBoneName" },
		{ "Category", "ALS|Skeleton Utility" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsSkeletonUtility, nullptr, "AddOrReplaceVirtualBone", nullptr, nullptr, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::AlsSkeletonUtility_eventAddOrReplaceVirtualBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::AlsSkeletonUtility_eventAddOrReplaceVirtualBone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics
	{
		struct AlsSkeletonUtility_eventAddOrReplaceWeightBlendProfile_Parms
		{
			USkeleton* Skeleton;
			FName BlendProfileName;
			TArray<FAlsBlendProfileEntry> Entries;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlendProfileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceWeightBlendProfile_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_BlendProfileName = { "BlendProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceWeightBlendProfile_Parms, BlendProfileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAlsBlendProfileEntry, METADATA_PARAMS(0, nullptr) }; // 2549173457
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Entries_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventAddOrReplaceWeightBlendProfile_Parms, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Entries_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Entries_MetaData) }; // 2549173457
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_BlendProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::NewProp_Entries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Skeleton Utility" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsSkeletonUtility, nullptr, "AddOrReplaceWeightBlendProfile", nullptr, nullptr, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::AlsSkeletonUtility_eventAddOrReplaceWeightBlendProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::AlsSkeletonUtility_eventAddOrReplaceWeightBlendProfile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics
	{
		struct AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms
		{
			USkeleton* Skeleton;
			FName BoneName;
			TEnumAsByte<EBoneTranslationRetargetingMode::Type> RetargetingMode;
			bool bIncludeDescendants;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RetargetingMode;
		static void NewProp_bIncludeDescendants_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDescendants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_BoneName_MetaData), Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_BoneName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_RetargetingMode = { "RetargetingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms, RetargetingMode), Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode, METADATA_PARAMS(0, nullptr) }; // 4015970931
	void Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_bIncludeDescendants_SetBit(void* Obj)
	{
		((AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms*)Obj)->bIncludeDescendants = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_bIncludeDescendants = { "bIncludeDescendants", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms), &Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_bIncludeDescendants_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_RetargetingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::NewProp_bIncludeDescendants,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "BoneName" },
		{ "Category", "ALS|Skeleton Utility" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsSkeletonUtility, nullptr, "SetBoneRetargetingMode", nullptr, nullptr, Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::AlsSkeletonUtility_eventSetBoneRetargetingMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsSkeletonUtility);
	UClass* Z_Construct_UClass_UAlsSkeletonUtility_NoRegister()
	{
		return UAlsSkeletonUtility::StaticClass();
	}
	struct Z_Construct_UClass_UAlsSkeletonUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsSkeletonUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsSkeletonUtility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsSkeletonUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsSkeletonUtility_AddAnimationCurves, "AddAnimationCurves" }, // 2226383591
		{ &Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSlot, "AddOrReplaceSlot" }, // 4127510095
		{ &Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceSocket, "AddOrReplaceSocket" }, // 2707010305
		{ &Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceVirtualBone, "AddOrReplaceVirtualBone" }, // 2071009896
		{ &Z_Construct_UFunction_UAlsSkeletonUtility_AddOrReplaceWeightBlendProfile, "AddOrReplaceWeightBlendProfile" }, // 2865376430
		{ &Z_Construct_UFunction_UAlsSkeletonUtility_SetBoneRetargetingMode, "SetBoneRetargetingMode" }, // 2992903542
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsSkeletonUtility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsSkeletonUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AlsSkeletonUtility.h" },
		{ "ModuleRelativePath", "Public/AlsSkeletonUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsSkeletonUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsSkeletonUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsSkeletonUtility_Statics::ClassParams = {
		&UAlsSkeletonUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsSkeletonUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsSkeletonUtility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAlsSkeletonUtility()
	{
		if (!Z_Registration_Info_UClass_UAlsSkeletonUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsSkeletonUtility.OuterSingleton, Z_Construct_UClass_UAlsSkeletonUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsSkeletonUtility.OuterSingleton;
	}
	template<> ALSEDITOR_API UClass* StaticClass<UAlsSkeletonUtility>()
	{
		return UAlsSkeletonUtility::StaticClass();
	}
	UAlsSkeletonUtility::UAlsSkeletonUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsSkeletonUtility);
	UAlsSkeletonUtility::~UAlsSkeletonUtility() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_Statics::ScriptStructInfo[] = {
		{ FAlsBlendProfileEntry::StaticStruct, Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics::NewStructOps, TEXT("AlsBlendProfileEntry"), &Z_Registration_Info_UScriptStruct_AlsBlendProfileEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsBlendProfileEntry), 2549173457U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsSkeletonUtility, UAlsSkeletonUtility::StaticClass, TEXT("UAlsSkeletonUtility"), &Z_Registration_Info_UClass_UAlsSkeletonUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsSkeletonUtility), 1690973740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_3648383151(TEXT("/Script/ALSEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
