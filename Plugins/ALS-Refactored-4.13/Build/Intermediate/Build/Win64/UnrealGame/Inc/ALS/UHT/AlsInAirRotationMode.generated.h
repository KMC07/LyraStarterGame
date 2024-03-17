// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/AlsInAirRotationMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALS_AlsInAirRotationMode_generated_h
#error "AlsInAirRotationMode.generated.h already included, missing '#pragma once' in AlsInAirRotationMode.h"
#endif
#define ALS_AlsInAirRotationMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_Settings_AlsInAirRotationMode_h


#define FOREACH_ENUM_EALSINAIRROTATIONMODE(op) \
	op(EAlsInAirRotationMode::RotateToVelocityOnJump) \
	op(EAlsInAirRotationMode::KeepRelativeRotation) \
	op(EAlsInAirRotationMode::KeepWorldRotation) 

enum class EAlsInAirRotationMode : uint8;
template<> struct TIsUEnumClass<EAlsInAirRotationMode> { enum { Value = true }; };
template<> ALS_API UEnum* StaticEnum<EAlsInAirRotationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
