// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Nodes/AlsRigUnits.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsRigUnits() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References

static_assert(std::is_polymorphic<FAlsRigVMFunction_Clamp01Float>() == std::is_polymorphic<FRigVMFunction_MathFloatBase>(), "USTRUCT FAlsRigVMFunction_Clamp01Float cannot be polymorphic unless super FRigVMFunction_MathFloatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float;
class UScriptStruct* FAlsRigVMFunction_Clamp01Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRigVMFunction_Clamp01Float"));
		TArray<FRigVMFunctionArgument> Arguments_FAlsRigVMFunction_Clamp01Float_Execute;
		Arguments_FAlsRigVMFunction_Clamp01Float_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FAlsRigVMFunction_Clamp01Float_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FAlsRigVMFunction_Clamp01Float::Execute"), &FAlsRigVMFunction_Clamp01Float::RigVMExecute, Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float.OuterSingleton, Arguments_FAlsRigVMFunction_Clamp01Float_Execute);
	}
	return Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRigVMFunction_Clamp01Float>()
{
	return FAlsRigVMFunction_Clamp01Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ALS" },
		{ "DisplayName", "Clamp 01" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRigVMFunction_Clamp01Float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigVMFunction_Clamp01Float, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigVMFunction_Clamp01Float, Result), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Result_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBase,
		&NewStructOps,
		"AlsRigVMFunction_Clamp01Float",
		Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::PropPointers),
		sizeof(FAlsRigVMFunction_Clamp01Float),
		alignof(FAlsRigVMFunction_Clamp01Float),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float.InnerSingleton, Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float.InnerSingleton;
	}

void FAlsRigVMFunction_Clamp01Float::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FAlsRigVMFunction_Clamp01Float::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}


static_assert(std::is_polymorphic<FAlsRigVMFunction_ExponentialDecayVector>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FAlsRigVMFunction_ExponentialDecayVector cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector;
class UScriptStruct* FAlsRigVMFunction_ExponentialDecayVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRigVMFunction_ExponentialDecayVector"));
		TArray<FRigVMFunctionArgument> Arguments_FAlsRigVMFunction_ExponentialDecayVector_Execute;
		Arguments_FAlsRigVMFunction_ExponentialDecayVector_Execute.Emplace(TEXT("Target"), TEXT("FVector"));
		Arguments_FAlsRigVMFunction_ExponentialDecayVector_Execute.Emplace(TEXT("Lambda"), TEXT("float"));
		Arguments_FAlsRigVMFunction_ExponentialDecayVector_Execute.Emplace(TEXT("Current"), TEXT("FVector"));
		Arguments_FAlsRigVMFunction_ExponentialDecayVector_Execute.Emplace(TEXT("bInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FAlsRigVMFunction_ExponentialDecayVector::Execute"), &FAlsRigVMFunction_ExponentialDecayVector::RigVMExecute, Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector.OuterSingleton, Arguments_FAlsRigVMFunction_ExponentialDecayVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRigVMFunction_ExponentialDecayVector>()
{
	return FAlsRigVMFunction_ExponentialDecayVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lambda_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lambda;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ALS" },
		{ "DisplayName", "Exponential Decay (Vector)" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRigVMFunction_ExponentialDecayVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigVMFunction_ExponentialDecayVector, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Target_MetaData), Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Lambda_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Lambda = { "Lambda", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigVMFunction_ExponentialDecayVector, Lambda), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Lambda_MetaData), Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Lambda_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigVMFunction_ExponentialDecayVector, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Current_MetaData), Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Current_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FAlsRigVMFunction_ExponentialDecayVector*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRigVMFunction_ExponentialDecayVector), &Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_bInitialized_MetaData), Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_bInitialized_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Lambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewProp_bInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"AlsRigVMFunction_ExponentialDecayVector",
		Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::PropPointers),
		sizeof(FAlsRigVMFunction_ExponentialDecayVector),
		alignof(FAlsRigVMFunction_ExponentialDecayVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector.InnerSingleton, Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector.InnerSingleton;
	}

void FAlsRigVMFunction_ExponentialDecayVector::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FAlsRigVMFunction_ExponentialDecayVector::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Target,
		Lambda,
		Current,
		bInitialized
	);
}


static_assert(std::is_polymorphic<FAlsRigUnit_CalculatePoleVector>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FAlsRigUnit_CalculatePoleVector cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector;
class UScriptStruct* FAlsRigUnit_CalculatePoleVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRigUnit_CalculatePoleVector"));
		TArray<FRigVMFunctionArgument> Arguments_FAlsRigUnit_CalculatePoleVector_Execute;
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("ItemA"), TEXT("FRigElementKey"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("ItemB"), TEXT("FRigElementKey"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("ItemC"), TEXT("FRigElementKey"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("bSuccess"), TEXT("bool"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("ItemBLocation"), TEXT("FVector"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("ItemBProjectionLocation"), TEXT("FVector"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("Direction"), TEXT("FVector"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("bInitialized"), TEXT("bool"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("CachedItemA"), TEXT("FCachedRigElement"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("CachedItemB"), TEXT("FCachedRigElement"));
		Arguments_FAlsRigUnit_CalculatePoleVector_Execute.Emplace(TEXT("CachedItemC"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FAlsRigUnit_CalculatePoleVector::Execute"), &FAlsRigUnit_CalculatePoleVector::RigVMExecute, Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector.OuterSingleton, Arguments_FAlsRigUnit_CalculatePoleVector_Execute);
	}
	return Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRigUnit_CalculatePoleVector>()
{
	return FAlsRigUnit_CalculatePoleVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemBLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBProjectionLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemBProjectionLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItemA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItemA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItemB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItemB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItemC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItemC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Calculates the projection location and direction of the perpendicular to AC through B.\n" },
		{ "DisplayName", "Calculate Pole Vector" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "NodeColor", "0.05 0.25 0.05" },
		{ "ToolTip", "Calculates the projection location and direction of the perpendicular to AC through B." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRigUnit_CalculatePoleVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemA_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, ItemA), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemA_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemA_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemB_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, ItemB), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemB_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemB_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemC_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemC = { "ItemC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, ItemC), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemC_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemC_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FAlsRigUnit_CalculatePoleVector*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRigUnit_CalculatePoleVector), &Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitial_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FAlsRigUnit_CalculatePoleVector*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRigUnit_CalculatePoleVector), &Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bSuccess_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bSuccess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBLocation_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Item B Location" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBLocation = { "ItemBLocation", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, ItemBLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBLocation_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBProjectionLocation_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Item B Projection Location" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBProjectionLocation = { "ItemBProjectionLocation", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, ItemBProjectionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBProjectionLocation_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBProjectionLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_Direction_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_Direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FAlsRigUnit_CalculatePoleVector*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRigUnit_CalculatePoleVector), &Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitialized_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitialized_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemA = { "CachedItemA", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, CachedItemA), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemA_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemA_MetaData) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemB = { "CachedItemB", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, CachedItemB), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemB_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemB_MetaData) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemC = { "CachedItemC", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_CalculatePoleVector, CachedItemC), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemC_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemC_MetaData) }; // 968212372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_ItemBProjectionLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_bInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewProp_CachedItemC,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"AlsRigUnit_CalculatePoleVector",
		Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::PropPointers),
		sizeof(FAlsRigUnit_CalculatePoleVector),
		alignof(FAlsRigUnit_CalculatePoleVector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector.InnerSingleton, Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector.InnerSingleton;
	}

void FAlsRigUnit_CalculatePoleVector::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FAlsRigUnit_CalculatePoleVector::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		ItemA,
		ItemB,
		ItemC,
		bInitial,
		bSuccess,
		ItemBLocation,
		ItemBProjectionLocation,
		Direction,
		bInitialized,
		CachedItemA,
		CachedItemB,
		CachedItemC
	);
}


static_assert(std::is_polymorphic<FAlsRigUnit_HandIkRetargeting>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FAlsRigUnit_HandIkRetargeting cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting;
class UScriptStruct* FAlsRigUnit_HandIkRetargeting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsRigUnit_HandIkRetargeting"));
		TArray<FRigVMFunctionArgument> Arguments_FAlsRigUnit_HandIkRetargeting_Execute;
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("LeftHandBone"), TEXT("FRigElementKey"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("LeftHandIkBone"), TEXT("FRigElementKey"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("RightHandBone"), TEXT("FRigElementKey"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("RightHandIkBone"), TEXT("FRigElementKey"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("BonesToMove"), TEXT("TArray<FRigElementKey>"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("RetargetingWeight"), TEXT("float"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("bInitialized"), TEXT("bool"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("CachedLeftHandBone"), TEXT("FCachedRigElement"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("CachedLeftHandIkBone"), TEXT("FCachedRigElement"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("CachedRightHandBone"), TEXT("FCachedRigElement"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("CachedRightHandIkBone"), TEXT("FCachedRigElement"));
		Arguments_FAlsRigUnit_HandIkRetargeting_Execute.Emplace(TEXT("CachedBonesToMove"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FAlsRigUnit_HandIkRetargeting::Execute"), &FAlsRigUnit_HandIkRetargeting::RigVMExecute, Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting.OuterSingleton, Arguments_FAlsRigUnit_HandIkRetargeting_Execute);
	}
	return Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsRigUnit_HandIkRetargeting>()
{
	return FAlsRigUnit_HandIkRetargeting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIkBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandIkBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandIkBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandIkBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BonesToMove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesToMove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetingWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RetargetingWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLeftHandBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLeftHandBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLeftHandIkBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLeftHandIkBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRightHandBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRightHandBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRightHandIkBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRightHandIkBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBonesToMove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBonesToMove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedBonesToMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::Struct_MetaDataParams[] = {
		{ "Category", "ALS" },
		{ "DisplayName", "Hand Ik Retargeting" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "NodeColor", "0 0.36 1.0" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsRigUnit_HandIkRetargeting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandBone = { "LeftHandBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, LeftHandBone), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandBone_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandIkBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandIkBone = { "LeftHandIkBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, LeftHandIkBone), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandIkBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandIkBone_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandBone = { "RightHandBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, RightHandBone), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandBone_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandIkBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandIkBone = { "RightHandIkBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, RightHandIkBone), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandIkBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandIkBone_MetaData) }; // 422817336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_BonesToMove_Inner = { "BonesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(0, nullptr) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_BonesToMove_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_BonesToMove = { "BonesToMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, BonesToMove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_BonesToMove_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_BonesToMove_MetaData) }; // 422817336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RetargetingWeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Which hand to favor. 0.5 is equal weight for both, 1 - right hand, 0 - left hand.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
		{ "ToolTip", "Which hand to favor. 0.5 is equal weight for both, 1 - right hand, 0 - left hand." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RetargetingWeight = { "RetargetingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, RetargetingWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RetargetingWeight_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RetargetingWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FAlsRigUnit_HandIkRetargeting*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRigUnit_HandIkRetargeting), &Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bPropagateToChildren_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bPropagateToChildren_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FAlsRigUnit_HandIkRetargeting*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsRigUnit_HandIkRetargeting), &Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bInitialized_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bInitialized_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandBone = { "CachedLeftHandBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, CachedLeftHandBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandBone_MetaData) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandIkBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandIkBone = { "CachedLeftHandIkBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, CachedLeftHandIkBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandIkBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandIkBone_MetaData) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandBone = { "CachedRightHandBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, CachedRightHandBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandBone_MetaData) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandIkBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandIkBone = { "CachedRightHandIkBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, CachedRightHandIkBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandIkBone_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandIkBone_MetaData) }; // 968212372
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedBonesToMove_Inner = { "CachedBonesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(0, nullptr) }; // 968212372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedBonesToMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/AlsRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedBonesToMove = { "CachedBonesToMove", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsRigUnit_HandIkRetargeting, CachedBonesToMove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedBonesToMove_MetaData), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedBonesToMove_MetaData) }; // 968212372
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_LeftHandIkBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RightHandIkBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_BonesToMove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_BonesToMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_RetargetingWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_bInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedLeftHandIkBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedRightHandIkBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedBonesToMove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewProp_CachedBonesToMove,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"AlsRigUnit_HandIkRetargeting",
		Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::PropPointers),
		sizeof(FAlsRigUnit_HandIkRetargeting),
		alignof(FAlsRigUnit_HandIkRetargeting),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting.InnerSingleton, Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting.InnerSingleton;
	}

void FAlsRigUnit_HandIkRetargeting::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FAlsRigUnit_HandIkRetargeting::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> BonesToMove_4_Array(BonesToMove);
	
	StaticExecute(
		InExecuteContext,
		LeftHandBone,
		LeftHandIkBone,
		RightHandBone,
		RightHandIkBone,
		BonesToMove_4_Array,
		RetargetingWeight,
		Weight,
		bPropagateToChildren,
		bInitialized,
		CachedLeftHandBone,
		CachedLeftHandIkBone,
		CachedRightHandBone,
		CachedRightHandIkBone,
		CachedBonesToMove
	);
}

	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_Statics::ScriptStructInfo[] = {
		{ FAlsRigVMFunction_Clamp01Float::StaticStruct, Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics::NewStructOps, TEXT("AlsRigVMFunction_Clamp01Float"), &Z_Registration_Info_UScriptStruct_AlsRigVMFunction_Clamp01Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRigVMFunction_Clamp01Float), 2001326665U) },
		{ FAlsRigVMFunction_ExponentialDecayVector::StaticStruct, Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics::NewStructOps, TEXT("AlsRigVMFunction_ExponentialDecayVector"), &Z_Registration_Info_UScriptStruct_AlsRigVMFunction_ExponentialDecayVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRigVMFunction_ExponentialDecayVector), 3113049173U) },
		{ FAlsRigUnit_CalculatePoleVector::StaticStruct, Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics::NewStructOps, TEXT("AlsRigUnit_CalculatePoleVector"), &Z_Registration_Info_UScriptStruct_AlsRigUnit_CalculatePoleVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRigUnit_CalculatePoleVector), 877973142U) },
		{ FAlsRigUnit_HandIkRetargeting::StaticStruct, Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics::NewStructOps, TEXT("AlsRigUnit_HandIkRetargeting"), &Z_Registration_Info_UScriptStruct_AlsRigUnit_HandIkRetargeting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsRigUnit_HandIkRetargeting), 2963886107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_1138331770(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
