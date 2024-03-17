// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlsCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMinimalViewInfo;
#ifdef ALSCAMERA_AlsCameraComponent_generated_h
#error "AlsCameraComponent.generated.h already included, missing '#pragma once' in AlsCameraComponent.h"
#endif
#define ALSCAMERA_AlsCameraComponent_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetViewInfo); \
	DECLARE_FUNCTION(execGetThirdPersonTraceStartLocation); \
	DECLARE_FUNCTION(execGetThirdPersonPivotLocation); \
	DECLARE_FUNCTION(execGetFirstPersonCameraLocation); \
	DECLARE_FUNCTION(execSetRightShoulder);


#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlsCameraComponent(); \
	friend struct Z_Construct_UClass_UAlsCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UAlsCameraComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALSCamera"), NO_API) \
	DECLARE_SERIALIZER(UAlsCameraComponent)


#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlsCameraComponent(UAlsCameraComponent&&); \
	NO_API UAlsCameraComponent(const UAlsCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlsCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlsCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAlsCameraComponent) \
	NO_API virtual ~UAlsCameraComponent();


#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_12_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALSCAMERA_API UClass* StaticClass<class UAlsCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALSCamera_Public_AlsCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
