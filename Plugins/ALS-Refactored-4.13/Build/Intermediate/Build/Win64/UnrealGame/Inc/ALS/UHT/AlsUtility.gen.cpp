// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/Utility/AlsUtility.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsUtility() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_UAlsUtility();
	ALS_API UClass* Z_Construct_UClass_UAlsUtility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	DEFINE_FUNCTION(UAlsUtility::execDrawDebugSweepSingleCapsuleAlternative)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_UBOOL(Z_Param_bHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SweepColor);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_HitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawDebugSweepSingleCapsuleAlternative(Z_Param_WorldContext,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_bHit,Z_Param_Out_Hit,Z_Param_Out_SweepColor,Z_Param_Out_HitColor,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execDrawDebugSweepSingleCapsule)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_UBOOL(Z_Param_bHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SweepColor);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_HitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawDebugSweepSingleCapsule(Z_Param_WorldContext,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Out_Rotation,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_bHit,Z_Param_Out_Hit,Z_Param_Out_SweepColor,Z_Param_Out_HitColor,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execDrawDebugSweepSingleSphere)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_SweepColor);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_HitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawDebugSweepSingleSphere(Z_Param_WorldContext,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Radius,Z_Param_bHit,Z_Param_Out_Hit,Z_Param_Out_SweepColor,Z_Param_Out_HitColor,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execDrawDebugLineTraceSingle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_UBOOL(Z_Param_bHit);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_TraceColor);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_HitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawDebugLineTraceSingle(Z_Param_WorldContext,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_bHit,Z_Param_Out_Hit,Z_Param_Out_TraceColor,Z_Param_Out_HitColor,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execDrawDebugSweepSphere)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawDebugSweepSphere(Z_Param_WorldContext,Z_Param_Out_Start,Z_Param_Out_End,Z_Param_Radius,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execDrawDebugSphereAlternative)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawDebugSphereAlternative(Z_Param_WorldContext,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Radius,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execDrawQuarterCircle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_XAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_YAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawQuarterCircle(Z_Param_WorldContext,Z_Param_Out_Location,Z_Param_Out_XAxis,Z_Param_Out_YAxis,Z_Param_Radius,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execDrawHalfCircle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_XAxis);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_YAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_PROPERTY(FByteProperty,Z_Param_DepthPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAlsUtility::DrawHalfCircle(Z_Param_WorldContext,Z_Param_Out_Location,Z_Param_Out_XAxis,Z_Param_Out_YAxis,Z_Param_Radius,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness,Z_Param_DepthPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execShouldDisplayDebugForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAlsUtility::ShouldDisplayDebugForActor(Z_Param_Actor,Z_Param_Out_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execExtractLastRootTransformFromMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAlsUtility::ExtractLastRootTransformFromMontage(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execExtractRootTransformFromMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAlsUtility::ExtractRootTransformFromMontage(Z_Param_Montage,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execGetFirstPlayerPingSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsUtility::GetFirstPlayerPingSeconds(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execGetSimpleTagName)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsUtility::GetSimpleTagName(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execGetChildTags)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UAlsUtility::GetChildTags(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execGetAnimationCurveValueFromCharacter)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAlsUtility::GetAnimationCurveValueFromCharacter(Z_Param_Character,Z_Param_Out_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsUtility::execNameToDisplayString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_UBOOL(Z_Param_bNameIsBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAlsUtility::NameToDisplayString(Z_Param_Out_Name,Z_Param_bNameIsBool);
		P_NATIVE_END;
	}
	void UAlsUtility::StaticRegisterNativesUAlsUtility()
	{
		UClass* Class = UAlsUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugLineTraceSingle", &UAlsUtility::execDrawDebugLineTraceSingle },
			{ "DrawDebugSphereAlternative", &UAlsUtility::execDrawDebugSphereAlternative },
			{ "DrawDebugSweepSingleCapsule", &UAlsUtility::execDrawDebugSweepSingleCapsule },
			{ "DrawDebugSweepSingleCapsuleAlternative", &UAlsUtility::execDrawDebugSweepSingleCapsuleAlternative },
			{ "DrawDebugSweepSingleSphere", &UAlsUtility::execDrawDebugSweepSingleSphere },
			{ "DrawDebugSweepSphere", &UAlsUtility::execDrawDebugSweepSphere },
			{ "DrawHalfCircle", &UAlsUtility::execDrawHalfCircle },
			{ "DrawQuarterCircle", &UAlsUtility::execDrawQuarterCircle },
			{ "ExtractLastRootTransformFromMontage", &UAlsUtility::execExtractLastRootTransformFromMontage },
			{ "ExtractRootTransformFromMontage", &UAlsUtility::execExtractRootTransformFromMontage },
			{ "GetAnimationCurveValueFromCharacter", &UAlsUtility::execGetAnimationCurveValueFromCharacter },
			{ "GetChildTags", &UAlsUtility::execGetChildTags },
			{ "GetFirstPlayerPingSeconds", &UAlsUtility::execGetFirstPlayerPingSeconds },
			{ "GetSimpleTagName", &UAlsUtility::execGetSimpleTagName },
			{ "NameToDisplayString", &UAlsUtility::execNameToDisplayString },
			{ "ShouldDisplayDebugForActor", &UAlsUtility::execShouldDisplayDebugForActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics
	{
		struct AlsUtility_eventDrawDebugLineTraceSingle_Parms
		{
			const UObject* WorldContext;
			FVector Start;
			FVector End;
			bool bHit;
			FHitResult Hit;
			FLinearColor TraceColor;
			FLinearColor HitColor;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_End_MetaData) };
	void Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((AlsUtility_eventDrawDebugLineTraceSingle_Parms*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsUtility_eventDrawDebugLineTraceSingle_Parms), &Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Hit_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_TraceColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_TraceColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_TraceColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_HitColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_HitColor = { "HitColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, HitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_HitColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_HitColor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugLineTraceSingle_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_HitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Start, End, TraceColor, HitColor" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawDebugLineTraceSingle", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::AlsUtility_eventDrawDebugLineTraceSingle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::AlsUtility_eventDrawDebugLineTraceSingle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics
	{
		struct AlsUtility_eventDrawDebugSphereAlternative_Parms
		{
			const UObject* WorldContext;
			FVector Location;
			FRotator Rotation;
			float Radius;
			FLinearColor Color;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Rotation_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, Radius), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Color_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSphereAlternative_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Location, Rotation, Color" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawDebugSphereAlternative", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::AlsUtility_eventDrawDebugSphereAlternative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::AlsUtility_eventDrawDebugSphereAlternative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics
	{
		struct AlsUtility_eventDrawDebugSweepSingleCapsule_Parms
		{
			const UObject* WorldContext;
			FVector Start;
			FVector End;
			FRotator Rotation;
			float Radius;
			float HalfHeight;
			bool bHit;
			FHitResult Hit;
			FLinearColor SweepColor;
			FLinearColor HitColor;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_End_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Rotation_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Rotation_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((AlsUtility_eventDrawDebugSweepSingleCapsule_Parms*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms), &Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Hit_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_SweepColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_SweepColor = { "SweepColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, SweepColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_SweepColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_SweepColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_HitColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_HitColor = { "HitColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, HitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_HitColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_HitColor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsule_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_SweepColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_HitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Start, End, Rotation, SweepColor, HitColor" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawDebugSweepSingleCapsule", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::AlsUtility_eventDrawDebugSweepSingleCapsule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::AlsUtility_eventDrawDebugSweepSingleCapsule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics
	{
		struct AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms
		{
			const UObject* WorldContext;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			bool bHit;
			FHitResult Hit;
			FLinearColor SweepColor;
			FLinearColor HitColor;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_End_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms), &Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Hit_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_SweepColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_SweepColor = { "SweepColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, SweepColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_SweepColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_SweepColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_HitColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_HitColor = { "HitColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, HitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_HitColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_HitColor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_SweepColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_HitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Start, End, SweepColor, HitColor" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawDebugSweepSingleCapsuleAlternative", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::AlsUtility_eventDrawDebugSweepSingleCapsuleAlternative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics
	{
		struct AlsUtility_eventDrawDebugSweepSingleSphere_Parms
		{
			const UObject* WorldContext;
			FVector Start;
			FVector End;
			float Radius;
			bool bHit;
			FHitResult Hit;
			FLinearColor SweepColor;
			FLinearColor HitColor;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_End_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((AlsUtility_eventDrawDebugSweepSingleSphere_Parms*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsUtility_eventDrawDebugSweepSingleSphere_Parms), &Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Hit_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_SweepColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_SweepColor = { "SweepColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, SweepColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_SweepColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_SweepColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_HitColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_HitColor = { "HitColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, HitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_HitColor_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_HitColor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSingleSphere_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_SweepColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_HitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Start, End, SweepColor, HitColor" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawDebugSweepSingleSphere", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::AlsUtility_eventDrawDebugSweepSingleSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::AlsUtility_eventDrawDebugSweepSingleSphere_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics
	{
		struct AlsUtility_eventDrawDebugSweepSphere_Parms
		{
			const UObject* WorldContext;
			FVector Start;
			FVector End;
			float Radius;
			FLinearColor Color;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Start_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_End_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_End_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Color_MetaData), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawDebugSweepSphere_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Start, End, Color" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawDebugSweepSphere", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::AlsUtility_eventDrawDebugSweepSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::AlsUtility_eventDrawDebugSweepSphere_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics
	{
		struct AlsUtility_eventDrawHalfCircle_Parms
		{
			const UObject* WorldContext;
			FVector Location;
			FVector XAxis;
			FVector YAxis;
			float Radius;
			FLinearColor Color;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_XAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_XAxis_MetaData), Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_XAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_YAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_YAxis_MetaData), Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_YAxis_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Color_MetaData), Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawHalfCircle_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_XAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_YAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Location, XAxis, YAxis, Color" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawHalfCircle", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::AlsUtility_eventDrawHalfCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::AlsUtility_eventDrawHalfCircle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawHalfCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawHalfCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics
	{
		struct AlsUtility_eventDrawQuarterCircle_Parms
		{
			const UObject* WorldContext;
			FVector Location;
			FVector XAxis;
			FVector YAxis;
			float Radius;
			FLinearColor Color;
			float Duration;
			float Thickness;
			uint8 DepthPriority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_WorldContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_XAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, XAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_XAxis_MetaData), Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_XAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_YAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, YAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_YAxis_MetaData), Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_YAxis_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Color_MetaData), Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventDrawQuarterCircle_Parms, DepthPriority), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_XAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_YAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::NewProp_DepthPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Location, XAxis, YAxis, Color" },
		{ "Category", "ALS|Utility" },
		{ "CPP_Default_DepthPriority", "0" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "DrawQuarterCircle", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::AlsUtility_eventDrawQuarterCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::AlsUtility_eventDrawQuarterCircle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics
	{
		struct AlsUtility_eventExtractLastRootTransformFromMontage_Parms
		{
			const UAnimMontage* Montage;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventExtractLastRootTransformFromMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::NewProp_Montage_MetaData), Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::NewProp_Montage_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventExtractLastRootTransformFromMontage_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "ExtractLastRootTransformFromMontage", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::AlsUtility_eventExtractLastRootTransformFromMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::AlsUtility_eventExtractLastRootTransformFromMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics
	{
		struct AlsUtility_eventExtractRootTransformFromMontage_Parms
		{
			const UAnimMontage* Montage;
			float Time;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_Montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventExtractRootTransformFromMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_Montage_MetaData), Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_Montage_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventExtractRootTransformFromMontage_Parms, Time), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventExtractRootTransformFromMontage_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "ExtractRootTransformFromMontage", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::AlsUtility_eventExtractRootTransformFromMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::AlsUtility_eventExtractRootTransformFromMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics
	{
		struct AlsUtility_eventGetAnimationCurveValueFromCharacter_Parms
		{
			const ACharacter* Character;
			FName CurveName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetAnimationCurveValueFromCharacter_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_Character_MetaData), Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetAnimationCurveValueFromCharacter_Parms, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_CurveName_MetaData), Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_CurveName_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetAnimationCurveValueFromCharacter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CurveName" },
		{ "Category", "ALS|Utility" },
		{ "DefaultToSelf", "Character" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Curve Value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "GetAnimationCurveValueFromCharacter", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::AlsUtility_eventGetAnimationCurveValueFromCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::AlsUtility_eventGetAnimationCurveValueFromCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics
	{
		struct AlsUtility_eventGetChildTags_Parms
		{
			FGameplayTag Tag;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetChildTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetChildTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Child Tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "GetChildTags", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::AlsUtility_eventGetChildTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::AlsUtility_eventGetChildTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_GetChildTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_GetChildTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics
	{
		struct AlsUtility_eventGetFirstPlayerPingSeconds_Parms
		{
			const UObject* WorldContext;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetFirstPlayerPingSeconds_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::NewProp_WorldContext_MetaData), Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::NewProp_WorldContext_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetFirstPlayerPingSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Ping" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "GetFirstPlayerPingSeconds", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::AlsUtility_eventGetFirstPlayerPingSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::AlsUtility_eventGetFirstPlayerPingSeconds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics
	{
		struct AlsUtility_eventGetSimpleTagName_Parms
		{
			FGameplayTag Tag;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetSimpleTagName_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::NewProp_Tag_MetaData) }; // 2083603574
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventGetSimpleTagName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Tag" },
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Tag Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "GetSimpleTagName", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::AlsUtility_eventGetSimpleTagName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::AlsUtility_eventGetSimpleTagName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_GetSimpleTagName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_GetSimpleTagName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics
	{
		struct AlsUtility_eventNameToDisplayString_Parms
		{
			FName Name;
			bool bNameIsBool;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_bNameIsBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNameIsBool;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventNameToDisplayString_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_Name_MetaData) };
	void Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_bNameIsBool_SetBit(void* Obj)
	{
		((AlsUtility_eventNameToDisplayString_Parms*)Obj)->bNameIsBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_bNameIsBool = { "bNameIsBool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsUtility_eventNameToDisplayString_Parms), &Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_bNameIsBool_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventNameToDisplayString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_bNameIsBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Name" },
		{ "Category", "ALS|Utility" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Display String" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "NameToDisplayString", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::AlsUtility_eventNameToDisplayString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::AlsUtility_eventNameToDisplayString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_NameToDisplayString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_NameToDisplayString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics
	{
		struct AlsUtility_eventShouldDisplayDebugForActor_Parms
		{
			const AActor* Actor;
			FName DisplayName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventShouldDisplayDebugForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_Actor_MetaData), Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsUtility_eventShouldDisplayDebugForActor_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_DisplayName_MetaData), Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_DisplayName_MetaData) };
	void Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AlsUtility_eventShouldDisplayDebugForActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsUtility_eventShouldDisplayDebugForActor_Parms), &Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DisplayName" },
		{ "Category", "ALS|Utility" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
		{ "ReturnDisplayName", "Value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsUtility, nullptr, "ShouldDisplayDebugForActor", nullptr, nullptr, Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::AlsUtility_eventShouldDisplayDebugForActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::AlsUtility_eventShouldDisplayDebugForActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsUtility);
	UClass* Z_Construct_UClass_UAlsUtility_NoRegister()
	{
		return UAlsUtility::StaticClass();
	}
	struct Z_Construct_UClass_UAlsUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsUtility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsUtility_DrawDebugLineTraceSingle, "DrawDebugLineTraceSingle" }, // 204685983
		{ &Z_Construct_UFunction_UAlsUtility_DrawDebugSphereAlternative, "DrawDebugSphereAlternative" }, // 1943051704
		{ &Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsule, "DrawDebugSweepSingleCapsule" }, // 3013911047
		{ &Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleCapsuleAlternative, "DrawDebugSweepSingleCapsuleAlternative" }, // 802503420
		{ &Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSingleSphere, "DrawDebugSweepSingleSphere" }, // 3137254525
		{ &Z_Construct_UFunction_UAlsUtility_DrawDebugSweepSphere, "DrawDebugSweepSphere" }, // 2687860383
		{ &Z_Construct_UFunction_UAlsUtility_DrawHalfCircle, "DrawHalfCircle" }, // 196053519
		{ &Z_Construct_UFunction_UAlsUtility_DrawQuarterCircle, "DrawQuarterCircle" }, // 3710293714
		{ &Z_Construct_UFunction_UAlsUtility_ExtractLastRootTransformFromMontage, "ExtractLastRootTransformFromMontage" }, // 885003399
		{ &Z_Construct_UFunction_UAlsUtility_ExtractRootTransformFromMontage, "ExtractRootTransformFromMontage" }, // 882541120
		{ &Z_Construct_UFunction_UAlsUtility_GetAnimationCurveValueFromCharacter, "GetAnimationCurveValueFromCharacter" }, // 904099640
		{ &Z_Construct_UFunction_UAlsUtility_GetChildTags, "GetChildTags" }, // 80185497
		{ &Z_Construct_UFunction_UAlsUtility_GetFirstPlayerPingSeconds, "GetFirstPlayerPingSeconds" }, // 1059091618
		{ &Z_Construct_UFunction_UAlsUtility_GetSimpleTagName, "GetSimpleTagName" }, // 3879353822
		{ &Z_Construct_UFunction_UAlsUtility_NameToDisplayString, "NameToDisplayString" }, // 2412683575
		{ &Z_Construct_UFunction_UAlsUtility_ShouldDisplayDebugForActor, "ShouldDisplayDebugForActor" }, // 594788051
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsUtility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsUtility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/AlsUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/AlsUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsUtility_Statics::ClassParams = {
		&UAlsUtility::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsUtility_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAlsUtility()
	{
		if (!Z_Registration_Info_UClass_UAlsUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsUtility.OuterSingleton, Z_Construct_UClass_UAlsUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsUtility.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsUtility>()
	{
		return UAlsUtility::StaticClass();
	}
	UAlsUtility::UAlsUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsUtility);
	UAlsUtility::~UAlsUtility() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsUtility, UAlsUtility::StaticClass, TEXT("UAlsUtility"), &Z_Registration_Info_UClass_UAlsUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsUtility), 4244451204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_3698821682(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
