// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "State/AlsGroundedState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALS_AlsGroundedState_generated_h
#error "AlsGroundedState.generated.h already included, missing '#pragma once' in AlsGroundedState.h"
#endif
#define ALS_AlsGroundedState_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsVelocityBlendState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsVelocityBlendState>();

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsRotationYawOffsetsState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsRotationYawOffsetsState>();

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsGroundedState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsGroundedState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsGroundedState_h


#define FOREACH_ENUM_EALSHIPSDIRECTION(op) \
	op(EAlsHipsDirection::Forward) \
	op(EAlsHipsDirection::Backward) \
	op(EAlsHipsDirection::LeftForward) \
	op(EAlsHipsDirection::LeftBackward) \
	op(EAlsHipsDirection::RightForward) \
	op(EAlsHipsDirection::RightBackward) 

enum class EAlsHipsDirection : uint8;
template<> struct TIsUEnumClass<EAlsHipsDirection> { enum { Value = true }; };
template<> ALS_API UEnum* StaticEnum<EAlsHipsDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
