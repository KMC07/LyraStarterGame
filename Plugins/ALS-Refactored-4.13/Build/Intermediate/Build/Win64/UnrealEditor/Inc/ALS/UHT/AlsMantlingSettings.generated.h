// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/AlsMantlingSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALS_AlsMantlingSettings_generated_h
#error "AlsMantlingSettings.generated.h already included, missing '#pragma once' in AlsMantlingSettings.h"
#endif
#define ALS_AlsMantlingSettings_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsMantlingParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsMantlingParameters>();

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlsMantlingSettings(); \
	friend struct Z_Construct_UClass_UAlsMantlingSettings_Statics; \
public: \
	DECLARE_CLASS(UAlsMantlingSettings, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ALS"), NO_API) \
	DECLARE_SERIALIZER(UAlsMantlingSettings)


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlsMantlingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAlsMantlingSettings(UAlsMantlingSettings&&); \
	NO_API UAlsMantlingSettings(const UAlsMantlingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlsMantlingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlsMantlingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlsMantlingSettings) \
	NO_API virtual ~UAlsMantlingSettings();


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_40_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALS_API UClass* StaticClass<class UAlsMantlingSettings>();

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsMantlingTraceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsMantlingTraceSettings>();

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsGeneralMantlingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsGeneralMantlingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsMantlingSettings_h


#define FOREACH_ENUM_EALSMANTLINGTYPE(op) \
	op(EAlsMantlingType::High) \
	op(EAlsMantlingType::Low) \
	op(EAlsMantlingType::InAir) 

enum class EAlsMantlingType : uint8;
template<> struct TIsUEnumClass<EAlsMantlingType> { enum { Value = true }; };
template<> ALS_API UEnum* StaticEnum<EAlsMantlingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
