// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsFeetState.h"
#include "ALS/Public/Utility/AlsMath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsFeetState() {}
// Cross Module References
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFeetState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsFootState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsSpringFloatState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsFootState;
class UScriptStruct* FAlsFootState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsFootState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsFootState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsFootState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsFootState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsFootState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsFootState>()
{
	return FAlsFootState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsFootState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IkAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockComponentRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockComponentRelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockComponentRelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockComponentRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockMovementBaseRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockMovementBaseRelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockMovementBaseRelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockMovementBaseRelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTargetLocationZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetTargetLocationZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetSpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetSpringState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetLocationZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetLocationZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IkLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IkRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsFootState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsFootState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkAmount = { "IkAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, IkAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkAmount_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockAmount = { "LockAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, LockAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockAmount_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetLocation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, TargetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetRotation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockLocation = { "LockLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, LockLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockLocation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockRotation = { "LockRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, LockRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockRotation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeLocation = { "LockComponentRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, LockComponentRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeLocation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeRotation = { "LockComponentRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, LockComponentRelativeRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeRotation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeLocation = { "LockMovementBaseRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, LockMovementBaseRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeLocation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeRotation = { "LockMovementBaseRelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, LockMovementBaseRelativeRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeRotation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetLocationZ_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetLocationZ = { "OffsetTargetLocationZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, OffsetTargetLocationZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetLocationZ_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetLocationZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetRotation = { "OffsetTargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, OffsetTargetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetRotation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetSpringState_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetSpringState = { "OffsetSpringState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, OffsetSpringState), Z_Construct_UScriptStruct_FAlsSpringFloatState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetSpringState_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetSpringState_MetaData) }; // 2979361345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetLocationZ_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetLocationZ = { "OffsetLocationZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, OffsetLocationZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetLocationZ_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetLocationZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, OffsetRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetRotation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkLocation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkLocation = { "IkLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, IkLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkLocation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkRotation_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkRotation = { "IkRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFootState, IkRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkRotation_MetaData), Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsFootState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_TargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockComponentRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_LockMovementBaseRelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetLocationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetTargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetSpringState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetLocationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_OffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFootState_Statics::NewProp_IkRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsFootState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsFootState",
		Z_Construct_UScriptStruct_FAlsFootState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::PropPointers),
		sizeof(FAlsFootState),
		alignof(FAlsFootState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsFootState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFootState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsFootState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsFootState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsFootState.InnerSingleton, Z_Construct_UScriptStruct_FAlsFootState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsFootState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsFeetState;
class UScriptStruct* FAlsFeetState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsFeetState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsFeetState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsFeetState, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsFeetState"));
	}
	return Z_Registration_Info_UScriptStruct_AlsFeetState.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsFeetState>()
{
	return FAlsFeetState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsFeetState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootPlantedAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootPlantedAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetCrossingAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FeetCrossingAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMaxPelvisOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinMaxPelvisOffsetZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsFeetState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FootPlantedAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Choose whether a foot is planted or about to plant when stopping using the foot planted animation\n// curve. A value less than 0.5 means the foot is planted and a value more than 0.5 means the\n// foot is still in the air. The foot planted curve also determines which foot is planted (or\n// about to plant). Positive values mean the right foot is planted, negative values mean the left.\n" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
		{ "ToolTip", "Choose whether a foot is planted or about to plant when stopping using the foot planted animation\ncurve. A value less than 0.5 means the foot is planted and a value more than 0.5 means the\nfoot is still in the air. The foot planted curve also determines which foot is planted (or\nabout to plant). Positive values mean the right foot is planted, negative values mean the left." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FootPlantedAmount = { "FootPlantedAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetState, FootPlantedAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FootPlantedAmount_MetaData), Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FootPlantedAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FeetCrossingAmount_MetaData[] = {
		{ "Category", "ALS" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FeetCrossingAmount = { "FeetCrossingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetState, FeetCrossingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FeetCrossingAmount_MetaData), Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FeetCrossingAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetState, Left), Z_Construct_UScriptStruct_FAlsFootState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Left_MetaData), Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Left_MetaData) }; // 677091869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetState, Right), Z_Construct_UScriptStruct_FAlsFootState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Right_MetaData), Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Right_MetaData) }; // 677091869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_MinMaxPelvisOffsetZ_MetaData[] = {
		{ "Category", "ALS" },
		{ "Comment", "// Pelvis\n" },
		{ "ModuleRelativePath", "Public/State/AlsFeetState.h" },
		{ "ToolTip", "Pelvis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_MinMaxPelvisOffsetZ = { "MinMaxPelvisOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsFeetState, MinMaxPelvisOffsetZ), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_MinMaxPelvisOffsetZ_MetaData), Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_MinMaxPelvisOffsetZ_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsFeetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FootPlantedAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_FeetCrossingAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewProp_MinMaxPelvisOffsetZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsFeetState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsFeetState",
		Z_Construct_UScriptStruct_FAlsFeetState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::PropPointers),
		sizeof(FAlsFeetState),
		alignof(FAlsFeetState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsFeetState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsFeetState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsFeetState()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsFeetState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsFeetState.InnerSingleton, Z_Construct_UScriptStruct_FAlsFeetState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsFeetState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsFeetState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsFeetState_h_Statics::ScriptStructInfo[] = {
		{ FAlsFootState::StaticStruct, Z_Construct_UScriptStruct_FAlsFootState_Statics::NewStructOps, TEXT("AlsFootState"), &Z_Registration_Info_UScriptStruct_AlsFootState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsFootState), 677091869U) },
		{ FAlsFeetState::StaticStruct, Z_Construct_UScriptStruct_FAlsFeetState_Statics::NewStructOps, TEXT("AlsFeetState"), &Z_Registration_Info_UScriptStruct_AlsFeetState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsFeetState), 3384027495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsFeetState_h_2478502330(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsFeetState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsFeetState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
