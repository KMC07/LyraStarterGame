// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlsLinkedAnimationInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAlsAnimationInstance;
enum class EAlsHipsDirection : uint8;
#ifdef ALS_AlsLinkedAnimationInstance_generated_h
#error "AlsLinkedAnimationInstance.generated.h already included, missing '#pragma once' in AlsLinkedAnimationInstance.h"
#endif
#define ALS_AlsLinkedAnimationInstance_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetJumped); \
	DECLARE_FUNCTION(execActivatePivot); \
	DECLARE_FUNCTION(execSetHipsDirection); \
	DECLARE_FUNCTION(execResetGroundedEntryMode); \
	DECLARE_FUNCTION(execRefreshLook); \
	DECLARE_FUNCTION(execReinitializeLook); \
	DECLARE_FUNCTION(execGetParentUnsafe);


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlsLinkedAnimationInstance(); \
	friend struct Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics; \
public: \
	DECLARE_CLASS(UAlsLinkedAnimationInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ALS"), NO_API) \
	DECLARE_SERIALIZER(UAlsLinkedAnimationInstance)


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlsLinkedAnimationInstance(UAlsLinkedAnimationInstance&&); \
	NO_API UAlsLinkedAnimationInstance(const UAlsLinkedAnimationInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlsLinkedAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlsLinkedAnimationInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAlsLinkedAnimationInstance) \
	NO_API virtual ~UAlsLinkedAnimationInstance();


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_8_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALS_API UClass* StaticClass<class UAlsLinkedAnimationInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
