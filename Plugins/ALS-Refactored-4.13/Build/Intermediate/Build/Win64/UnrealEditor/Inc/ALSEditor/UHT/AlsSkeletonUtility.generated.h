// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlsSkeletonUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeleton;
struct FAlsBlendProfileEntry;
#ifdef ALSEDITOR_AlsSkeletonUtility_generated_h
#error "AlsSkeletonUtility.generated.h already included, missing '#pragma once' in AlsSkeletonUtility.h"
#endif
#define ALSEDITOR_AlsSkeletonUtility_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsBlendProfileEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALSEDITOR_API UScriptStruct* StaticStruct<struct FAlsBlendProfileEntry>();

#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoneRetargetingMode); \
	DECLARE_FUNCTION(execAddOrReplaceWeightBlendProfile); \
	DECLARE_FUNCTION(execAddOrReplaceSocket); \
	DECLARE_FUNCTION(execAddOrReplaceVirtualBone); \
	DECLARE_FUNCTION(execAddOrReplaceSlot); \
	DECLARE_FUNCTION(execAddAnimationCurves);


#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlsSkeletonUtility(); \
	friend struct Z_Construct_UClass_UAlsSkeletonUtility_Statics; \
public: \
	DECLARE_CLASS(UAlsSkeletonUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ALSEditor"), NO_API) \
	DECLARE_SERIALIZER(UAlsSkeletonUtility)


#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlsSkeletonUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlsSkeletonUtility(UAlsSkeletonUtility&&); \
	NO_API UAlsSkeletonUtility(const UAlsSkeletonUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlsSkeletonUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlsSkeletonUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlsSkeletonUtility) \
	NO_API virtual ~UAlsSkeletonUtility();


#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_21_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSEDITOR_API UClass* StaticClass<class UAlsSkeletonUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALSEditor_Public_AlsSkeletonUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
