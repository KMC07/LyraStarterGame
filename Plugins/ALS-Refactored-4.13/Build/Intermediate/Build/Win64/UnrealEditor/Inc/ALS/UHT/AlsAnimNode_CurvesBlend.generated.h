// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/AlsAnimNode_CurvesBlend.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALS_AlsAnimNode_CurvesBlend_generated_h
#error "AlsAnimNode_CurvesBlend.generated.h already included, missing '#pragma once' in AlsAnimNode_CurvesBlend.h"
#endif
#define ALS_AlsAnimNode_CurvesBlend_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsAnimNode_CurvesBlend_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsAnimNode_CurvesBlend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsAnimNode_CurvesBlend_h


#define FOREACH_ENUM_EALSCURVESBLENDMODE(op) \
	op(EAlsCurvesBlendMode::BlendByAmount) \
	op(EAlsCurvesBlendMode::Combine) \
	op(EAlsCurvesBlendMode::CombinePreserved) \
	op(EAlsCurvesBlendMode::UseMaxValue) \
	op(EAlsCurvesBlendMode::UseMinValue) \
	op(EAlsCurvesBlendMode::Override) 

enum class EAlsCurvesBlendMode : uint8;
template<> struct TIsUEnumClass<EAlsCurvesBlendMode> { enum { Value = true }; };
template<> ALS_API UEnum* StaticEnum<EAlsCurvesBlendMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
