// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSCamera/Public/Utility/AlsCameraConstants.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsCameraConstants() {}
// Cross Module References
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraConstants();
	ALSCAMERA_API UClass* Z_Construct_UClass_UAlsCameraConstants_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ALSCamera();
// End Cross Module References
	DEFINE_FUNCTION(UAlsCameraConstants::execCameraTracesDebugDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::CameraTracesDebugDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execCameraShapesDebugDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::CameraShapesDebugDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execCameraCurvesDebugDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::CameraCurvesDebugDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execTraceOverrideCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::TraceOverrideCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execFirstPersonOverrideCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::FirstPersonOverrideCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execRotationLagCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::RotationLagCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execLocationLagZCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::LocationLagZCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execLocationLagYCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::LocationLagYCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execLocationLagXCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::LocationLagXCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execPivotOffsetZCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::PivotOffsetZCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execPivotOffsetYCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::PivotOffsetYCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execPivotOffsetXCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::PivotOffsetXCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execCameraOffsetZCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::CameraOffsetZCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execCameraOffsetYCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::CameraOffsetYCurveName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsCameraConstants::execCameraOffsetXCurveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UAlsCameraConstants::CameraOffsetXCurveName();
		P_NATIVE_END;
	}
	void UAlsCameraConstants::StaticRegisterNativesUAlsCameraConstants()
	{
		UClass* Class = UAlsCameraConstants::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CameraCurvesDebugDisplayName", &UAlsCameraConstants::execCameraCurvesDebugDisplayName },
			{ "CameraOffsetXCurveName", &UAlsCameraConstants::execCameraOffsetXCurveName },
			{ "CameraOffsetYCurveName", &UAlsCameraConstants::execCameraOffsetYCurveName },
			{ "CameraOffsetZCurveName", &UAlsCameraConstants::execCameraOffsetZCurveName },
			{ "CameraShapesDebugDisplayName", &UAlsCameraConstants::execCameraShapesDebugDisplayName },
			{ "CameraTracesDebugDisplayName", &UAlsCameraConstants::execCameraTracesDebugDisplayName },
			{ "FirstPersonOverrideCurveName", &UAlsCameraConstants::execFirstPersonOverrideCurveName },
			{ "LocationLagXCurveName", &UAlsCameraConstants::execLocationLagXCurveName },
			{ "LocationLagYCurveName", &UAlsCameraConstants::execLocationLagYCurveName },
			{ "LocationLagZCurveName", &UAlsCameraConstants::execLocationLagZCurveName },
			{ "PivotOffsetXCurveName", &UAlsCameraConstants::execPivotOffsetXCurveName },
			{ "PivotOffsetYCurveName", &UAlsCameraConstants::execPivotOffsetYCurveName },
			{ "PivotOffsetZCurveName", &UAlsCameraConstants::execPivotOffsetZCurveName },
			{ "RotationLagCurveName", &UAlsCameraConstants::execRotationLagCurveName },
			{ "TraceOverrideCurveName", &UAlsCameraConstants::execTraceOverrideCurveName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics
	{
		struct AlsCameraConstants_eventCameraCurvesDebugDisplayName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventCameraCurvesDebugDisplayName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants" },
		{ "Comment", "// Debug\n" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Display Name" },
		{ "ToolTip", "Debug" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "CameraCurvesDebugDisplayName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::AlsCameraConstants_eventCameraCurvesDebugDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::AlsCameraConstants_eventCameraCurvesDebugDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics
	{
		struct AlsCameraConstants_eventCameraOffsetXCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventCameraOffsetXCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "Comment", "// Animation Curves\n" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
		{ "ToolTip", "Animation Curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "CameraOffsetXCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::AlsCameraConstants_eventCameraOffsetXCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::AlsCameraConstants_eventCameraOffsetXCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics
	{
		struct AlsCameraConstants_eventCameraOffsetYCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventCameraOffsetYCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "CameraOffsetYCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::AlsCameraConstants_eventCameraOffsetYCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::AlsCameraConstants_eventCameraOffsetYCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics
	{
		struct AlsCameraConstants_eventCameraOffsetZCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventCameraOffsetZCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "CameraOffsetZCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::AlsCameraConstants_eventCameraOffsetZCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::AlsCameraConstants_eventCameraOffsetZCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics
	{
		struct AlsCameraConstants_eventCameraShapesDebugDisplayName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventCameraShapesDebugDisplayName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Display Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "CameraShapesDebugDisplayName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::AlsCameraConstants_eventCameraShapesDebugDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::AlsCameraConstants_eventCameraShapesDebugDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics
	{
		struct AlsCameraConstants_eventCameraTracesDebugDisplayName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventCameraTracesDebugDisplayName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Display Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "CameraTracesDebugDisplayName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::AlsCameraConstants_eventCameraTracesDebugDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::AlsCameraConstants_eventCameraTracesDebugDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics
	{
		struct AlsCameraConstants_eventFirstPersonOverrideCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventFirstPersonOverrideCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "FirstPersonOverrideCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::AlsCameraConstants_eventFirstPersonOverrideCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::AlsCameraConstants_eventFirstPersonOverrideCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics
	{
		struct AlsCameraConstants_eventLocationLagXCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventLocationLagXCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "LocationLagXCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::AlsCameraConstants_eventLocationLagXCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::AlsCameraConstants_eventLocationLagXCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics
	{
		struct AlsCameraConstants_eventLocationLagYCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventLocationLagYCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "LocationLagYCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::AlsCameraConstants_eventLocationLagYCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::AlsCameraConstants_eventLocationLagYCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics
	{
		struct AlsCameraConstants_eventLocationLagZCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventLocationLagZCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "LocationLagZCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::AlsCameraConstants_eventLocationLagZCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::AlsCameraConstants_eventLocationLagZCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics
	{
		struct AlsCameraConstants_eventPivotOffsetXCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventPivotOffsetXCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "PivotOffsetXCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::AlsCameraConstants_eventPivotOffsetXCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::AlsCameraConstants_eventPivotOffsetXCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics
	{
		struct AlsCameraConstants_eventPivotOffsetYCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventPivotOffsetYCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "PivotOffsetYCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::AlsCameraConstants_eventPivotOffsetYCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::AlsCameraConstants_eventPivotOffsetYCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics
	{
		struct AlsCameraConstants_eventPivotOffsetZCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventPivotOffsetZCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "PivotOffsetZCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::AlsCameraConstants_eventPivotOffsetZCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::AlsCameraConstants_eventPivotOffsetZCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics
	{
		struct AlsCameraConstants_eventRotationLagCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventRotationLagCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "RotationLagCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::AlsCameraConstants_eventRotationLagCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::AlsCameraConstants_eventRotationLagCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics
	{
		struct AlsCameraConstants_eventTraceOverrideCurveName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCameraConstants_eventTraceOverrideCurveName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Camera Constants|Animation Curves" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
		{ "ReturnDisplayName", "Curve Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsCameraConstants, nullptr, "TraceOverrideCurveName", nullptr, nullptr, Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::AlsCameraConstants_eventTraceOverrideCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::AlsCameraConstants_eventTraceOverrideCurveName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsCameraConstants);
	UClass* Z_Construct_UClass_UAlsCameraConstants_NoRegister()
	{
		return UAlsCameraConstants::StaticClass();
	}
	struct Z_Construct_UClass_UAlsCameraConstants_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsCameraConstants_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraConstants_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsCameraConstants_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsCameraConstants_CameraCurvesDebugDisplayName, "CameraCurvesDebugDisplayName" }, // 2597080994
		{ &Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetXCurveName, "CameraOffsetXCurveName" }, // 1042590537
		{ &Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetYCurveName, "CameraOffsetYCurveName" }, // 1923911680
		{ &Z_Construct_UFunction_UAlsCameraConstants_CameraOffsetZCurveName, "CameraOffsetZCurveName" }, // 2293974790
		{ &Z_Construct_UFunction_UAlsCameraConstants_CameraShapesDebugDisplayName, "CameraShapesDebugDisplayName" }, // 1497405852
		{ &Z_Construct_UFunction_UAlsCameraConstants_CameraTracesDebugDisplayName, "CameraTracesDebugDisplayName" }, // 3586779760
		{ &Z_Construct_UFunction_UAlsCameraConstants_FirstPersonOverrideCurveName, "FirstPersonOverrideCurveName" }, // 3834455223
		{ &Z_Construct_UFunction_UAlsCameraConstants_LocationLagXCurveName, "LocationLagXCurveName" }, // 1048906588
		{ &Z_Construct_UFunction_UAlsCameraConstants_LocationLagYCurveName, "LocationLagYCurveName" }, // 3028333698
		{ &Z_Construct_UFunction_UAlsCameraConstants_LocationLagZCurveName, "LocationLagZCurveName" }, // 68210517
		{ &Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetXCurveName, "PivotOffsetXCurveName" }, // 385291349
		{ &Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetYCurveName, "PivotOffsetYCurveName" }, // 4165424523
		{ &Z_Construct_UFunction_UAlsCameraConstants_PivotOffsetZCurveName, "PivotOffsetZCurveName" }, // 3731356812
		{ &Z_Construct_UFunction_UAlsCameraConstants_RotationLagCurveName, "RotationLagCurveName" }, // 378062763
		{ &Z_Construct_UFunction_UAlsCameraConstants_TraceOverrideCurveName, "TraceOverrideCurveName" }, // 3848866038
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraConstants_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsCameraConstants_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Utility/AlsCameraConstants.h" },
		{ "ModuleRelativePath", "Public/Utility/AlsCameraConstants.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsCameraConstants_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsCameraConstants>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsCameraConstants_Statics::ClassParams = {
		&UAlsCameraConstants::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsCameraConstants_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsCameraConstants_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAlsCameraConstants()
	{
		if (!Z_Registration_Info_UClass_UAlsCameraConstants.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsCameraConstants.OuterSingleton, Z_Construct_UClass_UAlsCameraConstants_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsCameraConstants.OuterSingleton;
	}
	template<> ALSCAMERA_API UClass* StaticClass<UAlsCameraConstants>()
	{
		return UAlsCameraConstants::StaticClass();
	}
	UAlsCameraConstants::UAlsCameraConstants(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsCameraConstants);
	UAlsCameraConstants::~UAlsCameraConstants() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Utility_AlsCameraConstants_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Utility_AlsCameraConstants_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsCameraConstants, UAlsCameraConstants::StaticClass, TEXT("UAlsCameraConstants"), &Z_Registration_Info_UClass_UAlsCameraConstants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsCameraConstants), 1665800652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Utility_AlsCameraConstants_h_925731106(TEXT("/Script/ALSCamera"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Utility_AlsCameraConstants_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_Utility_AlsCameraConstants_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
