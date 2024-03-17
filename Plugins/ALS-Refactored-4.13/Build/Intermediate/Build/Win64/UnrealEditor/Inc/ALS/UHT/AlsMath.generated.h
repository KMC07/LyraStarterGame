// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/AlsMath.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAlsMovementDirection : uint8;
struct FAlsSpringFloatState;
struct FAlsSpringVectorState;
#ifdef ALS_AlsMath_generated_h
#error "AlsMath.generated.h already included, missing '#pragma once' in AlsMath.h"
#endif
#define ALS_AlsMath_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsSpringFloatState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsSpringFloatState>();

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsSpringVectorState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsSpringVectorState>();

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryCalculatePoleVector); \
	DECLARE_FUNCTION(execCalculateMovementDirection); \
	DECLARE_FUNCTION(execSlerpSkipNormalization); \
	DECLARE_FUNCTION(execAngleBetweenSkipNormalization); \
	DECLARE_FUNCTION(execPerpendicularCounterClockwiseXY); \
	DECLARE_FUNCTION(execPerpendicularClockwiseXY); \
	DECLARE_FUNCTION(execDirectionToAngleXY); \
	DECLARE_FUNCTION(execDirectionToAngle); \
	DECLARE_FUNCTION(execAngleToDirectionXY); \
	DECLARE_FUNCTION(execAngleToDirection); \
	DECLARE_FUNCTION(execRadianToDirectionXY); \
	DECLARE_FUNCTION(execRadianToDirection); \
	DECLARE_FUNCTION(execClampMagnitude012D); \
	DECLARE_FUNCTION(execClampMagnitude01); \
	DECLARE_FUNCTION(execSpringDampVector); \
	DECLARE_FUNCTION(execSpringDampFloat); \
	DECLARE_FUNCTION(execInterpolateAngleConstant); \
	DECLARE_FUNCTION(execExponentialDecayRotator); \
	DECLARE_FUNCTION(execDampRotator); \
	DECLARE_FUNCTION(execExponentialDecayAngle); \
	DECLARE_FUNCTION(execDampAngle); \
	DECLARE_FUNCTION(execExponentialDecay); \
	DECLARE_FUNCTION(execDamp); \
	DECLARE_FUNCTION(execLerpRotator); \
	DECLARE_FUNCTION(execLerpAngle); \
	DECLARE_FUNCTION(execLerpClamped); \
	DECLARE_FUNCTION(execClamp01);


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlsMath(); \
	friend struct Z_Construct_UClass_UAlsMath_Statics; \
public: \
	DECLARE_CLASS(UAlsMath, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ALS"), NO_API) \
	DECLARE_SERIALIZER(UAlsMath)


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlsMath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlsMath(UAlsMath&&); \
	NO_API UAlsMath(const UAlsMath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlsMath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlsMath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlsMath) \
	NO_API virtual ~UAlsMath();


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_40_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALS_API UClass* StaticClass<class UAlsMath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsMath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
