// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "State/AlsMovementDirection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALS_AlsMovementDirection_generated_h
#error "AlsMovementDirection.generated.h already included, missing '#pragma once' in AlsMovementDirection.h"
#endif
#define ALS_AlsMovementDirection_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsMovementDirectionCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h


#define FOREACH_ENUM_EALSMOVEMENTDIRECTION(op) \
	op(EAlsMovementDirection::Forward) \
	op(EAlsMovementDirection::Backward) \
	op(EAlsMovementDirection::Left) \
	op(EAlsMovementDirection::Right) 

enum class EAlsMovementDirection : uint8;
template<> struct TIsUEnumClass<EAlsMovementDirection> { enum { Value = true }; };
template<> ALS_API UEnum* StaticEnum<EAlsMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
