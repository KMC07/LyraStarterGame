// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlsAnimationInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAlsAnimationInstanceSettings;
class UAnimSequenceBase;
enum class EAlsHipsDirection : uint8;
struct FAlsControlRigInput;
#ifdef ALS_AlsAnimationInstance_generated_h
#error "AlsAnimationInstance.generated.h already included, missing '#pragma once' in AlsAnimationInstance.h"
#endif
#define ALS_AlsAnimationInstance_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopTransitionAndTurnInPlaceAnimations); \
	DECLARE_FUNCTION(execPlayTransitionRightAnimation); \
	DECLARE_FUNCTION(execPlayTransitionLeftAnimation); \
	DECLARE_FUNCTION(execPlayTransitionAnimation); \
	DECLARE_FUNCTION(execPlayQuickStopAnimation); \
	DECLARE_FUNCTION(execResetJumped); \
	DECLARE_FUNCTION(execActivatePivot); \
	DECLARE_FUNCTION(execSetHipsDirection); \
	DECLARE_FUNCTION(execResetGroundedEntryMode); \
	DECLARE_FUNCTION(execRefreshLook); \
	DECLARE_FUNCTION(execReinitializeLook); \
	DECLARE_FUNCTION(execGetControlRigInput); \
	DECLARE_FUNCTION(execGetSettingsUnsafe);


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlsAnimationInstance(); \
	friend struct Z_Construct_UClass_UAlsAnimationInstance_Statics; \
public: \
	DECLARE_CLASS(UAlsAnimationInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ALS"), NO_API) \
	DECLARE_SERIALIZER(UAlsAnimationInstance)


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlsAnimationInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlsAnimationInstance(UAlsAnimationInstance&&); \
	NO_API UAlsAnimationInstance(const UAlsAnimationInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlsAnimationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlsAnimationInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlsAnimationInstance) \
	NO_API virtual ~UAlsAnimationInstance();


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_26_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALS_API UClass* StaticClass<class UAlsAnimationInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsAnimationInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
