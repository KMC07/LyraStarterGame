// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/AlsUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UAnimMontage;
class UObject;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FHitResult;
struct FLinearColor;
#ifdef ALS_AlsUtility_generated_h
#error "AlsUtility.generated.h already included, missing '#pragma once' in AlsUtility.h"
#endif
#define ALS_AlsUtility_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawDebugSweepSingleCapsuleAlternative); \
	DECLARE_FUNCTION(execDrawDebugSweepSingleCapsule); \
	DECLARE_FUNCTION(execDrawDebugSweepSingleSphere); \
	DECLARE_FUNCTION(execDrawDebugLineTraceSingle); \
	DECLARE_FUNCTION(execDrawDebugSweepSphere); \
	DECLARE_FUNCTION(execDrawDebugSphereAlternative); \
	DECLARE_FUNCTION(execDrawQuarterCircle); \
	DECLARE_FUNCTION(execDrawHalfCircle); \
	DECLARE_FUNCTION(execShouldDisplayDebugForActor); \
	DECLARE_FUNCTION(execExtractLastRootTransformFromMontage); \
	DECLARE_FUNCTION(execExtractRootTransformFromMontage); \
	DECLARE_FUNCTION(execGetFirstPlayerPingSeconds); \
	DECLARE_FUNCTION(execGetSimpleTagName); \
	DECLARE_FUNCTION(execGetChildTags); \
	DECLARE_FUNCTION(execGetAnimationCurveValueFromCharacter); \
	DECLARE_FUNCTION(execNameToDisplayString);


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlsUtility(); \
	friend struct Z_Construct_UClass_UAlsUtility_Statics; \
public: \
	DECLARE_CLASS(UAlsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ALS"), NO_API) \
	DECLARE_SERIALIZER(UAlsUtility)


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlsUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlsUtility(UAlsUtility&&); \
	NO_API UAlsUtility(const UAlsUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlsUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlsUtility) \
	NO_API virtual ~UAlsUtility();


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_10_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALS_API UClass* StaticClass<class UAlsUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_Utility_AlsUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
