// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/AlsRigUnits.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALS_AlsRigUnits_generated_h
#error "AlsRigUnits.generated.h already included, missing '#pragma once' in AlsRigUnits.h"
#endif
#define ALS_AlsRigUnits_generated_h


#define FAlsRigVMFunction_Clamp01Float_Execute() \
	void FAlsRigVMFunction_Clamp01Float::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsRigVMFunction_Clamp01Float_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsRigVMFunction_Clamp01Float>();


#define FAlsRigVMFunction_ExponentialDecayVector_Execute() \
	void FAlsRigVMFunction_ExponentialDecayVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Lambda, \
		FVector& Current, \
		bool& bInitialized \
	)

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsRigVMFunction_ExponentialDecayVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Target, \
		const float Lambda, \
		FVector& Current, \
		bool& bInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Lambda = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Current = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		bool& bInitialized = *(bool*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Target, \
			Lambda, \
			Current, \
			bInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsRigVMFunction_ExponentialDecayVector>();


#define FAlsRigUnit_CalculatePoleVector_Execute() \
	void FAlsRigUnit_CalculatePoleVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ItemA, \
		const FRigElementKey& ItemB, \
		const FRigElementKey& ItemC, \
		const bool bInitial, \
		bool& bSuccess, \
		FVector& ItemBLocation, \
		FVector& ItemBProjectionLocation, \
		FVector& Direction, \
		bool& bInitialized, \
		FCachedRigElement& CachedItemA, \
		FCachedRigElement& CachedItemB, \
		FCachedRigElement& CachedItemC \
	)

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsRigUnit_CalculatePoleVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ItemA, \
		const FRigElementKey& ItemB, \
		const FRigElementKey& ItemC, \
		const bool bInitial, \
		bool& bSuccess, \
		FVector& ItemBLocation, \
		FVector& ItemBProjectionLocation, \
		FVector& Direction, \
		bool& bInitialized, \
		FCachedRigElement& CachedItemA, \
		FCachedRigElement& CachedItemB, \
		FCachedRigElement& CachedItemC \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& ItemA = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& ItemB = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& ItemC = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		bool& bSuccess = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FVector& ItemBLocation = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& ItemBProjectionLocation = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		FVector& Direction = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		bool& bInitialized = *(bool*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedItemA = *(FCachedRigElement*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedItemB = *(FCachedRigElement*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedItemC = *(FCachedRigElement*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ItemA, \
			ItemB, \
			ItemC, \
			bInitial, \
			bSuccess, \
			ItemBLocation, \
			ItemBProjectionLocation, \
			Direction, \
			bInitialized, \
			CachedItemA, \
			CachedItemB, \
			CachedItemC \
		); \
	} \
	typedef FRigUnit Super;


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsRigUnit_CalculatePoleVector>();


#define FAlsRigUnit_HandIkRetargeting_Execute() \
	void FAlsRigUnit_HandIkRetargeting::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& LeftHandBone, \
		const FRigElementKey& LeftHandIkBone, \
		const FRigElementKey& RightHandBone, \
		const FRigElementKey& RightHandIkBone, \
		const TArrayView<const FRigElementKey>& BonesToMove, \
		const float RetargetingWeight, \
		const float Weight, \
		const bool bPropagateToChildren, \
		bool& bInitialized, \
		FCachedRigElement& CachedLeftHandBone, \
		FCachedRigElement& CachedLeftHandIkBone, \
		FCachedRigElement& CachedRightHandBone, \
		FCachedRigElement& CachedRightHandIkBone, \
		TArray<FCachedRigElement>& CachedBonesToMove \
	)

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlsRigUnit_HandIkRetargeting_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& LeftHandBone, \
		const FRigElementKey& LeftHandIkBone, \
		const FRigElementKey& RightHandBone, \
		const FRigElementKey& RightHandIkBone, \
		const TArrayView<const FRigElementKey>& BonesToMove, \
		const float RetargetingWeight, \
		const float Weight, \
		const bool bPropagateToChildren, \
		bool& bInitialized, \
		FCachedRigElement& CachedLeftHandBone, \
		FCachedRigElement& CachedLeftHandIkBone, \
		FCachedRigElement& CachedRightHandBone, \
		FCachedRigElement& CachedRightHandIkBone, \
		TArray<FCachedRigElement>& CachedBonesToMove \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& LeftHandBone = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& LeftHandIkBone = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& RightHandBone = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKey& RightHandIkBone = *(FRigElementKey*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FRigElementKey>& BonesToMove = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetData(false); \
		const float RetargetingWeight = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		bool& bInitialized = *(bool*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedLeftHandBone = *(FCachedRigElement*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedLeftHandIkBone = *(FCachedRigElement*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedRightHandBone = *(FCachedRigElement*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedRightHandIkBone = *(FCachedRigElement*)RigVMMemoryHandles[12].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FCachedRigElement>& CachedBonesToMove = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			LeftHandBone, \
			LeftHandIkBone, \
			RightHandBone, \
			RightHandIkBone, \
			BonesToMove, \
			RetargetingWeight, \
			Weight, \
			bPropagateToChildren, \
			bInitialized, \
			CachedLeftHandBone, \
			CachedLeftHandIkBone, \
			CachedRightHandBone, \
			CachedRightHandIkBone, \
			CachedBonesToMove \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> ALS_API UScriptStruct* StaticStruct<struct FAlsRigUnit_HandIkRetargeting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_Nodes_AlsRigUnits_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
