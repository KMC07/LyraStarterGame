// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/AlsCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "ALS/Public/Settings/AlsMantlingSettings.h"
#include "ALS/Public/State/AlsLocomotionState.h"
#include "ALS/Public/State/AlsMantlingState.h"
#include "ALS/Public/State/AlsMovementBaseState.h"
#include "ALS/Public/State/AlsRagdollingState.h"
#include "ALS/Public/State/AlsRollingState.h"
#include "ALS/Public/State/AlsViewState.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsCharacter() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_AAlsCharacter();
	ALS_API UClass* Z_Construct_UClass_AAlsCharacter_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimationInstance_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsCharacterMovementComponent_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsCharacterSettings_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsMantlingSettings_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsMovementSettings_NoRegister();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsMantlingType();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsLocomotionState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingParameters();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMantlingState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementBaseState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRagdollingState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsRollingState();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsViewState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	DEFINE_FUNCTION(AAlsCharacter::execServerSetRagdollTargetLocation)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewTargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetRagdollTargetLocation_Implementation(Z_Param_NewTargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnRagdollingEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRagdollingEnded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSelectGetUpMontage)
	{
		P_GET_UBOOL(Z_Param_bRagdollFacingUpward);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->SelectGetUpMontage_Implementation(Z_Param_bRagdollFacingUpward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execMulticastStopRagdolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastStopRagdolling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerStopRagdolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStopRagdolling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execStopRagdolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopRagdolling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnRagdollingStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRagdollingStarted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execMulticastStartRagdolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastStartRagdolling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerStartRagdolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartRagdolling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execStartRagdolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRagdolling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnMantlingEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMantlingEnded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnMantlingStarted)
	{
		P_GET_STRUCT_REF(FAlsMantlingParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMantlingStarted_Implementation(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSelectMantlingSettings)
	{
		P_GET_ENUM(EAlsMantlingType,Z_Param_MantlingType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAlsMantlingSettings**)Z_Param__Result=P_THIS->SelectMantlingSettings_Implementation(EAlsMantlingType(Z_Param_MantlingType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execMulticastStartMantling)
	{
		P_GET_STRUCT(FAlsMantlingParameters,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastStartMantling_Implementation(Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerStartMantling)
	{
		P_GET_STRUCT(FAlsMantlingParameters,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartMantling_Implementation(Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execStartMantlingGrounded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartMantlingGrounded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execIsMantlingAllowedToStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMantlingAllowedToStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execMulticastStartRolling)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InitialYawAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetYawAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastStartRolling_Implementation(Z_Param_Montage,Z_Param_PlayRate,Z_Param_InitialYawAngle,Z_Param_TargetYawAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerStartRolling)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InitialYawAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetYawAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartRolling_Implementation(Z_Param_Montage,Z_Param_PlayRate,Z_Param_InitialYawAngle,Z_Param_TargetYawAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSelectRollMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->SelectRollMontage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execStartRolling)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRolling(Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execMulticastOnJumpedNetworked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnJumpedNetworked_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnReplicated_ReplicatedViewRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplicated_ReplicatedViewRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerSetReplicatedViewRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewViewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetReplicatedViewRotation_Implementation(Z_Param_NewViewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnLocomotionActionChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PreviousLocomotionAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionActionChanged_Implementation(Z_Param_Out_PreviousLocomotionAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnOverlayModeChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PreviousOverlayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlayModeChanged_Implementation(Z_Param_Out_PreviousOverlayMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnReplicated_OverlayMode)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PreviousOverlayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplicated_OverlayMode(Z_Param_Out_PreviousOverlayMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerSetOverlayMode)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewOverlayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetOverlayMode_Implementation(Z_Param_NewOverlayMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execClientSetOverlayMode)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewOverlayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetOverlayMode_Implementation(Z_Param_NewOverlayMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSetOverlayMode)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewOverlayMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayMode(Z_Param_Out_NewOverlayMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnGaitChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PreviousGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGaitChanged_Implementation(Z_Param_Out_PreviousGait);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerSetDesiredGait)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewDesiredGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetDesiredGait_Implementation(Z_Param_NewDesiredGait);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execClientSetDesiredGait)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewDesiredGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetDesiredGait_Implementation(Z_Param_NewDesiredGait);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSetDesiredGait)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewDesiredGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredGait(Z_Param_Out_NewDesiredGait);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnStanceChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PreviousStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStanceChanged_Implementation(Z_Param_Out_PreviousStance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerSetDesiredStance)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewDesiredStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetDesiredStance_Implementation(Z_Param_NewDesiredStance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execClientSetDesiredStance)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewDesiredStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetDesiredStance_Implementation(Z_Param_NewDesiredStance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSetDesiredStance)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewDesiredStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredStance(Z_Param_Out_NewDesiredStance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnRotationModeChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PreviousRotationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRotationModeChanged_Implementation(Z_Param_Out_PreviousRotationMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerSetDesiredRotationMode)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewDesiredRotationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetDesiredRotationMode_Implementation(Z_Param_NewDesiredRotationMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execClientSetDesiredRotationMode)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewDesiredRotationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetDesiredRotationMode_Implementation(Z_Param_NewDesiredRotationMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSetDesiredRotationMode)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewDesiredRotationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredRotationMode(Z_Param_Out_NewDesiredRotationMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnDesiredAimingChanged)
	{
		P_GET_UBOOL(Z_Param_bPreviousDesiredAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDesiredAimingChanged_Implementation(Z_Param_bPreviousDesiredAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnReplicated_DesiredAiming)
	{
		P_GET_UBOOL(Z_Param_bPreviousDesiredAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplicated_DesiredAiming(Z_Param_bPreviousDesiredAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerSetDesiredAiming)
	{
		P_GET_UBOOL(Z_Param_bNewDesiredAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetDesiredAiming_Implementation(Z_Param_bNewDesiredAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execClientSetDesiredAiming)
	{
		P_GET_UBOOL(Z_Param_bNewDesiredAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetDesiredAiming_Implementation(Z_Param_bNewDesiredAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSetDesiredAiming)
	{
		P_GET_UBOOL(Z_Param_bNewDesiredAiming);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredAiming(Z_Param_bNewDesiredAiming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execOnLocomotionModeChanged)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PreviousLocomotionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionModeChanged_Implementation(Z_Param_Out_PreviousLocomotionMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execServerSetViewMode)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetViewMode_Implementation(Z_Param_NewViewMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execClientSetViewMode)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_NewViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetViewMode_Implementation(Z_Param_NewViewMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAlsCharacter::execSetViewMode)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewMode(Z_Param_Out_NewViewMode);
		P_NATIVE_END;
	}
	struct AlsCharacter_eventClientSetDesiredAiming_Parms
	{
		bool bNewDesiredAiming;
	};
	struct AlsCharacter_eventClientSetDesiredGait_Parms
	{
		FGameplayTag NewDesiredGait;
	};
	struct AlsCharacter_eventClientSetDesiredRotationMode_Parms
	{
		FGameplayTag NewDesiredRotationMode;
	};
	struct AlsCharacter_eventClientSetDesiredStance_Parms
	{
		FGameplayTag NewDesiredStance;
	};
	struct AlsCharacter_eventClientSetOverlayMode_Parms
	{
		FGameplayTag NewOverlayMode;
	};
	struct AlsCharacter_eventClientSetViewMode_Parms
	{
		FGameplayTag NewViewMode;
	};
	struct AlsCharacter_eventIsMantlingAllowedToStart_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AlsCharacter_eventIsMantlingAllowedToStart_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AlsCharacter_eventMulticastStartMantling_Parms
	{
		FAlsMantlingParameters Parameters;
	};
	struct AlsCharacter_eventMulticastStartRolling_Parms
	{
		UAnimMontage* Montage;
		float PlayRate;
		float InitialYawAngle;
		float TargetYawAngle;
	};
	struct AlsCharacter_eventOnDesiredAimingChanged_Parms
	{
		bool bPreviousDesiredAiming;
	};
	struct AlsCharacter_eventOnGaitChanged_Parms
	{
		FGameplayTag PreviousGait;
	};
	struct AlsCharacter_eventOnLocomotionActionChanged_Parms
	{
		FGameplayTag PreviousLocomotionAction;
	};
	struct AlsCharacter_eventOnLocomotionModeChanged_Parms
	{
		FGameplayTag PreviousLocomotionMode;
	};
	struct AlsCharacter_eventOnMantlingStarted_Parms
	{
		FAlsMantlingParameters Parameters;
	};
	struct AlsCharacter_eventOnOverlayModeChanged_Parms
	{
		FGameplayTag PreviousOverlayMode;
	};
	struct AlsCharacter_eventOnRotationModeChanged_Parms
	{
		FGameplayTag PreviousRotationMode;
	};
	struct AlsCharacter_eventOnStanceChanged_Parms
	{
		FGameplayTag PreviousStance;
	};
	struct AlsCharacter_eventSelectGetUpMontage_Parms
	{
		bool bRagdollFacingUpward;
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		AlsCharacter_eventSelectGetUpMontage_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AlsCharacter_eventSelectMantlingSettings_Parms
	{
		EAlsMantlingType MantlingType;
		UAlsMantlingSettings* ReturnValue;

		/** Constructor, initializes return property only **/
		AlsCharacter_eventSelectMantlingSettings_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AlsCharacter_eventSelectRollMontage_Parms
	{
		UAnimMontage* ReturnValue;

		/** Constructor, initializes return property only **/
		AlsCharacter_eventSelectRollMontage_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AlsCharacter_eventServerSetDesiredAiming_Parms
	{
		bool bNewDesiredAiming;
	};
	struct AlsCharacter_eventServerSetDesiredGait_Parms
	{
		FGameplayTag NewDesiredGait;
	};
	struct AlsCharacter_eventServerSetDesiredRotationMode_Parms
	{
		FGameplayTag NewDesiredRotationMode;
	};
	struct AlsCharacter_eventServerSetDesiredStance_Parms
	{
		FGameplayTag NewDesiredStance;
	};
	struct AlsCharacter_eventServerSetOverlayMode_Parms
	{
		FGameplayTag NewOverlayMode;
	};
	struct AlsCharacter_eventServerSetRagdollTargetLocation_Parms
	{
		FVector_NetQuantize NewTargetLocation;
	};
	struct AlsCharacter_eventServerSetReplicatedViewRotation_Parms
	{
		FRotator NewViewRotation;
	};
	struct AlsCharacter_eventServerSetViewMode_Parms
	{
		FGameplayTag NewViewMode;
	};
	struct AlsCharacter_eventServerStartMantling_Parms
	{
		FAlsMantlingParameters Parameters;
	};
	struct AlsCharacter_eventServerStartRolling_Parms
	{
		UAnimMontage* Montage;
		float PlayRate;
		float InitialYawAngle;
		float TargetYawAngle;
	};
	static FName NAME_AAlsCharacter_ClientSetDesiredAiming = FName(TEXT("ClientSetDesiredAiming"));
	void AAlsCharacter::ClientSetDesiredAiming(bool bNewDesiredAiming)
	{
		AlsCharacter_eventClientSetDesiredAiming_Parms Parms;
		Parms.bNewDesiredAiming=bNewDesiredAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ClientSetDesiredAiming),&Parms);
	}
	static FName NAME_AAlsCharacter_ClientSetDesiredGait = FName(TEXT("ClientSetDesiredGait"));
	void AAlsCharacter::ClientSetDesiredGait(FGameplayTag const& NewDesiredGait)
	{
		AlsCharacter_eventClientSetDesiredGait_Parms Parms;
		Parms.NewDesiredGait=NewDesiredGait;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ClientSetDesiredGait),&Parms);
	}
	static FName NAME_AAlsCharacter_ClientSetDesiredRotationMode = FName(TEXT("ClientSetDesiredRotationMode"));
	void AAlsCharacter::ClientSetDesiredRotationMode(FGameplayTag const& NewDesiredRotationMode)
	{
		AlsCharacter_eventClientSetDesiredRotationMode_Parms Parms;
		Parms.NewDesiredRotationMode=NewDesiredRotationMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ClientSetDesiredRotationMode),&Parms);
	}
	static FName NAME_AAlsCharacter_ClientSetDesiredStance = FName(TEXT("ClientSetDesiredStance"));
	void AAlsCharacter::ClientSetDesiredStance(FGameplayTag const& NewDesiredStance)
	{
		AlsCharacter_eventClientSetDesiredStance_Parms Parms;
		Parms.NewDesiredStance=NewDesiredStance;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ClientSetDesiredStance),&Parms);
	}
	static FName NAME_AAlsCharacter_ClientSetOverlayMode = FName(TEXT("ClientSetOverlayMode"));
	void AAlsCharacter::ClientSetOverlayMode(FGameplayTag const& NewOverlayMode)
	{
		AlsCharacter_eventClientSetOverlayMode_Parms Parms;
		Parms.NewOverlayMode=NewOverlayMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ClientSetOverlayMode),&Parms);
	}
	static FName NAME_AAlsCharacter_ClientSetViewMode = FName(TEXT("ClientSetViewMode"));
	void AAlsCharacter::ClientSetViewMode(FGameplayTag const& NewViewMode)
	{
		AlsCharacter_eventClientSetViewMode_Parms Parms;
		Parms.NewViewMode=NewViewMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ClientSetViewMode),&Parms);
	}
	static FName NAME_AAlsCharacter_IsMantlingAllowedToStart = FName(TEXT("IsMantlingAllowedToStart"));
	bool AAlsCharacter::IsMantlingAllowedToStart() const
	{
		AlsCharacter_eventIsMantlingAllowedToStart_Parms Parms;
		const_cast<AAlsCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_IsMantlingAllowedToStart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AAlsCharacter_MulticastOnJumpedNetworked = FName(TEXT("MulticastOnJumpedNetworked"));
	void AAlsCharacter::MulticastOnJumpedNetworked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_MulticastOnJumpedNetworked),NULL);
	}
	static FName NAME_AAlsCharacter_MulticastStartMantling = FName(TEXT("MulticastStartMantling"));
	void AAlsCharacter::MulticastStartMantling(FAlsMantlingParameters const& Parameters)
	{
		AlsCharacter_eventMulticastStartMantling_Parms Parms;
		Parms.Parameters=Parameters;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_MulticastStartMantling),&Parms);
	}
	static FName NAME_AAlsCharacter_MulticastStartRagdolling = FName(TEXT("MulticastStartRagdolling"));
	void AAlsCharacter::MulticastStartRagdolling()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_MulticastStartRagdolling),NULL);
	}
	static FName NAME_AAlsCharacter_MulticastStartRolling = FName(TEXT("MulticastStartRolling"));
	void AAlsCharacter::MulticastStartRolling(UAnimMontage* Montage, float PlayRate, float InitialYawAngle, float TargetYawAngle)
	{
		AlsCharacter_eventMulticastStartRolling_Parms Parms;
		Parms.Montage=Montage;
		Parms.PlayRate=PlayRate;
		Parms.InitialYawAngle=InitialYawAngle;
		Parms.TargetYawAngle=TargetYawAngle;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_MulticastStartRolling),&Parms);
	}
	static FName NAME_AAlsCharacter_MulticastStopRagdolling = FName(TEXT("MulticastStopRagdolling"));
	void AAlsCharacter::MulticastStopRagdolling()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_MulticastStopRagdolling),NULL);
	}
	static FName NAME_AAlsCharacter_OnDesiredAimingChanged = FName(TEXT("OnDesiredAimingChanged"));
	void AAlsCharacter::OnDesiredAimingChanged(bool bPreviousDesiredAiming)
	{
		AlsCharacter_eventOnDesiredAimingChanged_Parms Parms;
		Parms.bPreviousDesiredAiming=bPreviousDesiredAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnDesiredAimingChanged),&Parms);
	}
	static FName NAME_AAlsCharacter_OnGaitChanged = FName(TEXT("OnGaitChanged"));
	void AAlsCharacter::OnGaitChanged(FGameplayTag const& PreviousGait)
	{
		AlsCharacter_eventOnGaitChanged_Parms Parms;
		Parms.PreviousGait=PreviousGait;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnGaitChanged),&Parms);
	}
	static FName NAME_AAlsCharacter_OnLocomotionActionChanged = FName(TEXT("OnLocomotionActionChanged"));
	void AAlsCharacter::OnLocomotionActionChanged(FGameplayTag const& PreviousLocomotionAction)
	{
		AlsCharacter_eventOnLocomotionActionChanged_Parms Parms;
		Parms.PreviousLocomotionAction=PreviousLocomotionAction;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnLocomotionActionChanged),&Parms);
	}
	static FName NAME_AAlsCharacter_OnLocomotionModeChanged = FName(TEXT("OnLocomotionModeChanged"));
	void AAlsCharacter::OnLocomotionModeChanged(FGameplayTag const& PreviousLocomotionMode)
	{
		AlsCharacter_eventOnLocomotionModeChanged_Parms Parms;
		Parms.PreviousLocomotionMode=PreviousLocomotionMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnLocomotionModeChanged),&Parms);
	}
	static FName NAME_AAlsCharacter_OnMantlingEnded = FName(TEXT("OnMantlingEnded"));
	void AAlsCharacter::OnMantlingEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnMantlingEnded),NULL);
	}
	static FName NAME_AAlsCharacter_OnMantlingStarted = FName(TEXT("OnMantlingStarted"));
	void AAlsCharacter::OnMantlingStarted(FAlsMantlingParameters const& Parameters)
	{
		AlsCharacter_eventOnMantlingStarted_Parms Parms;
		Parms.Parameters=Parameters;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnMantlingStarted),&Parms);
	}
	static FName NAME_AAlsCharacter_OnOverlayModeChanged = FName(TEXT("OnOverlayModeChanged"));
	void AAlsCharacter::OnOverlayModeChanged(FGameplayTag const& PreviousOverlayMode)
	{
		AlsCharacter_eventOnOverlayModeChanged_Parms Parms;
		Parms.PreviousOverlayMode=PreviousOverlayMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnOverlayModeChanged),&Parms);
	}
	static FName NAME_AAlsCharacter_OnRagdollingEnded = FName(TEXT("OnRagdollingEnded"));
	void AAlsCharacter::OnRagdollingEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnRagdollingEnded),NULL);
	}
	static FName NAME_AAlsCharacter_OnRagdollingStarted = FName(TEXT("OnRagdollingStarted"));
	void AAlsCharacter::OnRagdollingStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnRagdollingStarted),NULL);
	}
	static FName NAME_AAlsCharacter_OnRotationModeChanged = FName(TEXT("OnRotationModeChanged"));
	void AAlsCharacter::OnRotationModeChanged(FGameplayTag const& PreviousRotationMode)
	{
		AlsCharacter_eventOnRotationModeChanged_Parms Parms;
		Parms.PreviousRotationMode=PreviousRotationMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnRotationModeChanged),&Parms);
	}
	static FName NAME_AAlsCharacter_OnStanceChanged = FName(TEXT("OnStanceChanged"));
	void AAlsCharacter::OnStanceChanged(FGameplayTag const& PreviousStance)
	{
		AlsCharacter_eventOnStanceChanged_Parms Parms;
		Parms.PreviousStance=PreviousStance;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_OnStanceChanged),&Parms);
	}
	static FName NAME_AAlsCharacter_SelectGetUpMontage = FName(TEXT("SelectGetUpMontage"));
	UAnimMontage* AAlsCharacter::SelectGetUpMontage(bool bRagdollFacingUpward)
	{
		AlsCharacter_eventSelectGetUpMontage_Parms Parms;
		Parms.bRagdollFacingUpward=bRagdollFacingUpward ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_SelectGetUpMontage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAlsCharacter_SelectMantlingSettings = FName(TEXT("SelectMantlingSettings"));
	UAlsMantlingSettings* AAlsCharacter::SelectMantlingSettings(EAlsMantlingType MantlingType)
	{
		AlsCharacter_eventSelectMantlingSettings_Parms Parms;
		Parms.MantlingType=MantlingType;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_SelectMantlingSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAlsCharacter_SelectRollMontage = FName(TEXT("SelectRollMontage"));
	UAnimMontage* AAlsCharacter::SelectRollMontage()
	{
		AlsCharacter_eventSelectRollMontage_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_SelectRollMontage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AAlsCharacter_ServerSetDesiredAiming = FName(TEXT("ServerSetDesiredAiming"));
	void AAlsCharacter::ServerSetDesiredAiming(bool bNewDesiredAiming)
	{
		AlsCharacter_eventServerSetDesiredAiming_Parms Parms;
		Parms.bNewDesiredAiming=bNewDesiredAiming ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetDesiredAiming),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerSetDesiredGait = FName(TEXT("ServerSetDesiredGait"));
	void AAlsCharacter::ServerSetDesiredGait(FGameplayTag const& NewDesiredGait)
	{
		AlsCharacter_eventServerSetDesiredGait_Parms Parms;
		Parms.NewDesiredGait=NewDesiredGait;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetDesiredGait),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerSetDesiredRotationMode = FName(TEXT("ServerSetDesiredRotationMode"));
	void AAlsCharacter::ServerSetDesiredRotationMode(FGameplayTag const& NewDesiredRotationMode)
	{
		AlsCharacter_eventServerSetDesiredRotationMode_Parms Parms;
		Parms.NewDesiredRotationMode=NewDesiredRotationMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetDesiredRotationMode),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerSetDesiredStance = FName(TEXT("ServerSetDesiredStance"));
	void AAlsCharacter::ServerSetDesiredStance(FGameplayTag const& NewDesiredStance)
	{
		AlsCharacter_eventServerSetDesiredStance_Parms Parms;
		Parms.NewDesiredStance=NewDesiredStance;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetDesiredStance),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerSetOverlayMode = FName(TEXT("ServerSetOverlayMode"));
	void AAlsCharacter::ServerSetOverlayMode(FGameplayTag const& NewOverlayMode)
	{
		AlsCharacter_eventServerSetOverlayMode_Parms Parms;
		Parms.NewOverlayMode=NewOverlayMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetOverlayMode),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerSetRagdollTargetLocation = FName(TEXT("ServerSetRagdollTargetLocation"));
	void AAlsCharacter::ServerSetRagdollTargetLocation(FVector_NetQuantize const& NewTargetLocation)
	{
		AlsCharacter_eventServerSetRagdollTargetLocation_Parms Parms;
		Parms.NewTargetLocation=NewTargetLocation;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetRagdollTargetLocation),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerSetReplicatedViewRotation = FName(TEXT("ServerSetReplicatedViewRotation"));
	void AAlsCharacter::ServerSetReplicatedViewRotation(FRotator const& NewViewRotation)
	{
		AlsCharacter_eventServerSetReplicatedViewRotation_Parms Parms;
		Parms.NewViewRotation=NewViewRotation;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetReplicatedViewRotation),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerSetViewMode = FName(TEXT("ServerSetViewMode"));
	void AAlsCharacter::ServerSetViewMode(FGameplayTag const& NewViewMode)
	{
		AlsCharacter_eventServerSetViewMode_Parms Parms;
		Parms.NewViewMode=NewViewMode;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerSetViewMode),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerStartMantling = FName(TEXT("ServerStartMantling"));
	void AAlsCharacter::ServerStartMantling(FAlsMantlingParameters const& Parameters)
	{
		AlsCharacter_eventServerStartMantling_Parms Parms;
		Parms.Parameters=Parameters;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerStartMantling),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerStartRagdolling = FName(TEXT("ServerStartRagdolling"));
	void AAlsCharacter::ServerStartRagdolling()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerStartRagdolling),NULL);
	}
	static FName NAME_AAlsCharacter_ServerStartRolling = FName(TEXT("ServerStartRolling"));
	void AAlsCharacter::ServerStartRolling(UAnimMontage* Montage, float PlayRate, float InitialYawAngle, float TargetYawAngle)
	{
		AlsCharacter_eventServerStartRolling_Parms Parms;
		Parms.Montage=Montage;
		Parms.PlayRate=PlayRate;
		Parms.InitialYawAngle=InitialYawAngle;
		Parms.TargetYawAngle=TargetYawAngle;
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerStartRolling),&Parms);
	}
	static FName NAME_AAlsCharacter_ServerStopRagdolling = FName(TEXT("ServerStopRagdolling"));
	void AAlsCharacter::ServerStopRagdolling()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAlsCharacter_ServerStopRagdolling),NULL);
	}
	void AAlsCharacter::StaticRegisterNativesAAlsCharacter()
	{
		UClass* Class = AAlsCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientSetDesiredAiming", &AAlsCharacter::execClientSetDesiredAiming },
			{ "ClientSetDesiredGait", &AAlsCharacter::execClientSetDesiredGait },
			{ "ClientSetDesiredRotationMode", &AAlsCharacter::execClientSetDesiredRotationMode },
			{ "ClientSetDesiredStance", &AAlsCharacter::execClientSetDesiredStance },
			{ "ClientSetOverlayMode", &AAlsCharacter::execClientSetOverlayMode },
			{ "ClientSetViewMode", &AAlsCharacter::execClientSetViewMode },
			{ "IsMantlingAllowedToStart", &AAlsCharacter::execIsMantlingAllowedToStart },
			{ "MulticastOnJumpedNetworked", &AAlsCharacter::execMulticastOnJumpedNetworked },
			{ "MulticastStartMantling", &AAlsCharacter::execMulticastStartMantling },
			{ "MulticastStartRagdolling", &AAlsCharacter::execMulticastStartRagdolling },
			{ "MulticastStartRolling", &AAlsCharacter::execMulticastStartRolling },
			{ "MulticastStopRagdolling", &AAlsCharacter::execMulticastStopRagdolling },
			{ "OnDesiredAimingChanged", &AAlsCharacter::execOnDesiredAimingChanged },
			{ "OnGaitChanged", &AAlsCharacter::execOnGaitChanged },
			{ "OnLocomotionActionChanged", &AAlsCharacter::execOnLocomotionActionChanged },
			{ "OnLocomotionModeChanged", &AAlsCharacter::execOnLocomotionModeChanged },
			{ "OnMantlingEnded", &AAlsCharacter::execOnMantlingEnded },
			{ "OnMantlingStarted", &AAlsCharacter::execOnMantlingStarted },
			{ "OnOverlayModeChanged", &AAlsCharacter::execOnOverlayModeChanged },
			{ "OnRagdollingEnded", &AAlsCharacter::execOnRagdollingEnded },
			{ "OnRagdollingStarted", &AAlsCharacter::execOnRagdollingStarted },
			{ "OnReplicated_DesiredAiming", &AAlsCharacter::execOnReplicated_DesiredAiming },
			{ "OnReplicated_OverlayMode", &AAlsCharacter::execOnReplicated_OverlayMode },
			{ "OnReplicated_ReplicatedViewRotation", &AAlsCharacter::execOnReplicated_ReplicatedViewRotation },
			{ "OnRotationModeChanged", &AAlsCharacter::execOnRotationModeChanged },
			{ "OnStanceChanged", &AAlsCharacter::execOnStanceChanged },
			{ "SelectGetUpMontage", &AAlsCharacter::execSelectGetUpMontage },
			{ "SelectMantlingSettings", &AAlsCharacter::execSelectMantlingSettings },
			{ "SelectRollMontage", &AAlsCharacter::execSelectRollMontage },
			{ "ServerSetDesiredAiming", &AAlsCharacter::execServerSetDesiredAiming },
			{ "ServerSetDesiredGait", &AAlsCharacter::execServerSetDesiredGait },
			{ "ServerSetDesiredRotationMode", &AAlsCharacter::execServerSetDesiredRotationMode },
			{ "ServerSetDesiredStance", &AAlsCharacter::execServerSetDesiredStance },
			{ "ServerSetOverlayMode", &AAlsCharacter::execServerSetOverlayMode },
			{ "ServerSetRagdollTargetLocation", &AAlsCharacter::execServerSetRagdollTargetLocation },
			{ "ServerSetReplicatedViewRotation", &AAlsCharacter::execServerSetReplicatedViewRotation },
			{ "ServerSetViewMode", &AAlsCharacter::execServerSetViewMode },
			{ "ServerStartMantling", &AAlsCharacter::execServerStartMantling },
			{ "ServerStartRagdolling", &AAlsCharacter::execServerStartRagdolling },
			{ "ServerStartRolling", &AAlsCharacter::execServerStartRolling },
			{ "ServerStopRagdolling", &AAlsCharacter::execServerStopRagdolling },
			{ "SetDesiredAiming", &AAlsCharacter::execSetDesiredAiming },
			{ "SetDesiredGait", &AAlsCharacter::execSetDesiredGait },
			{ "SetDesiredRotationMode", &AAlsCharacter::execSetDesiredRotationMode },
			{ "SetDesiredStance", &AAlsCharacter::execSetDesiredStance },
			{ "SetOverlayMode", &AAlsCharacter::execSetOverlayMode },
			{ "SetViewMode", &AAlsCharacter::execSetViewMode },
			{ "StartMantlingGrounded", &AAlsCharacter::execStartMantlingGrounded },
			{ "StartRagdolling", &AAlsCharacter::execStartRagdolling },
			{ "StartRolling", &AAlsCharacter::execStartRolling },
			{ "StopRagdolling", &AAlsCharacter::execStopRagdolling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics
	{
		static void NewProp_bNewDesiredAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDesiredAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::NewProp_bNewDesiredAiming_SetBit(void* Obj)
	{
		((AlsCharacter_eventClientSetDesiredAiming_Parms*)Obj)->bNewDesiredAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::NewProp_bNewDesiredAiming = { "bNewDesiredAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventClientSetDesiredAiming_Parms), &Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::NewProp_bNewDesiredAiming_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::NewProp_bNewDesiredAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ClientSetDesiredAiming", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::PropPointers), sizeof(AlsCharacter_eventClientSetDesiredAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventClientSetDesiredAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredGait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::NewProp_NewDesiredGait = { "NewDesiredGait", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventClientSetDesiredGait_Parms, NewDesiredGait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData), Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::NewProp_NewDesiredGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ClientSetDesiredGait", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::PropPointers), sizeof(AlsCharacter_eventClientSetDesiredGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventClientSetDesiredGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredRotationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode = { "NewDesiredRotationMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventClientSetDesiredRotationMode_Parms, NewDesiredRotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData), Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ClientSetDesiredRotationMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::PropPointers), sizeof(AlsCharacter_eventClientSetDesiredRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventClientSetDesiredRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredStance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::NewProp_NewDesiredStance = { "NewDesiredStance", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventClientSetDesiredStance_Parms, NewDesiredStance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData), Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::NewProp_NewDesiredStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ClientSetDesiredStance", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::PropPointers), sizeof(AlsCharacter_eventClientSetDesiredStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventClientSetDesiredStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOverlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewOverlayMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::NewProp_NewOverlayMode = { "NewOverlayMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventClientSetOverlayMode_Parms, NewOverlayMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData), Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::NewProp_NewOverlayMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ClientSetOverlayMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::PropPointers), sizeof(AlsCharacter_eventClientSetOverlayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventClientSetOverlayMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::NewProp_NewViewMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventClientSetViewMode_Parms, NewViewMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::NewProp_NewViewMode_MetaData), Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::NewProp_NewViewMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::NewProp_NewViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ClientSetViewMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::PropPointers), sizeof(AlsCharacter_eventClientSetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventClientSetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AlsCharacter_eventIsMantlingAllowedToStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventIsMantlingAllowedToStart_Parms), &Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "IsMantlingAllowedToStart", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::PropPointers), sizeof(AlsCharacter_eventIsMantlingAllowedToStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventIsMantlingAllowedToStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "MulticastOnJumpedNetworked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventMulticastStartMantling_Parms, Parameters), Z_Construct_UScriptStruct_FAlsMantlingParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::NewProp_Parameters_MetaData), Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::NewProp_Parameters_MetaData) }; // 2188665798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "MulticastStartMantling", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::PropPointers), sizeof(AlsCharacter_eventMulticastStartMantling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventMulticastStartMantling_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "MulticastStartRagdolling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialYawAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetYawAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventMulticastStartRolling_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventMulticastStartRolling_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_InitialYawAngle = { "InitialYawAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventMulticastStartRolling_Parms, InitialYawAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_TargetYawAngle = { "TargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventMulticastStartRolling_Parms, TargetYawAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_InitialYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::NewProp_TargetYawAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "MulticastStartRolling", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::PropPointers), sizeof(AlsCharacter_eventMulticastStartRolling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventMulticastStartRolling_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "MulticastStopRagdolling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics
	{
		static void NewProp_bPreviousDesiredAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousDesiredAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::NewProp_bPreviousDesiredAiming_SetBit(void* Obj)
	{
		((AlsCharacter_eventOnDesiredAimingChanged_Parms*)Obj)->bPreviousDesiredAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::NewProp_bPreviousDesiredAiming = { "bPreviousDesiredAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventOnDesiredAimingChanged_Parms), &Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::NewProp_bPreviousDesiredAiming_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::NewProp_bPreviousDesiredAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnDesiredAimingChanged", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::PropPointers), sizeof(AlsCharacter_eventOnDesiredAimingChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnDesiredAimingChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousGait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::NewProp_PreviousGait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::NewProp_PreviousGait = { "PreviousGait", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnGaitChanged_Parms, PreviousGait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::NewProp_PreviousGait_MetaData), Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::NewProp_PreviousGait_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::NewProp_PreviousGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnGaitChanged", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::PropPointers), sizeof(AlsCharacter_eventOnGaitChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnGaitChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnGaitChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnGaitChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousLocomotionAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousLocomotionAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::NewProp_PreviousLocomotionAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::NewProp_PreviousLocomotionAction = { "PreviousLocomotionAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnLocomotionActionChanged_Parms, PreviousLocomotionAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::NewProp_PreviousLocomotionAction_MetaData), Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::NewProp_PreviousLocomotionAction_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::NewProp_PreviousLocomotionAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnLocomotionActionChanged", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::PropPointers), sizeof(AlsCharacter_eventOnLocomotionActionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnLocomotionActionChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousLocomotionMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousLocomotionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::NewProp_PreviousLocomotionMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::NewProp_PreviousLocomotionMode = { "PreviousLocomotionMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnLocomotionModeChanged_Parms, PreviousLocomotionMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::NewProp_PreviousLocomotionMode_MetaData), Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::NewProp_PreviousLocomotionMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::NewProp_PreviousLocomotionMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnLocomotionModeChanged", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::PropPointers), sizeof(AlsCharacter_eventOnLocomotionModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnLocomotionModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnMantlingEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnMantlingStarted_Parms, Parameters), Z_Construct_UScriptStruct_FAlsMantlingParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::NewProp_Parameters_MetaData), Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::NewProp_Parameters_MetaData) }; // 2188665798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnMantlingStarted", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::PropPointers), sizeof(AlsCharacter_eventOnMantlingStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnMantlingStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousOverlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousOverlayMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::NewProp_PreviousOverlayMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::NewProp_PreviousOverlayMode = { "PreviousOverlayMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnOverlayModeChanged_Parms, PreviousOverlayMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::NewProp_PreviousOverlayMode_MetaData), Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::NewProp_PreviousOverlayMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::NewProp_PreviousOverlayMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnOverlayModeChanged", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::PropPointers), sizeof(AlsCharacter_eventOnOverlayModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnOverlayModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnRagdollingEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnRagdollingStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics
	{
		struct AlsCharacter_eventOnReplicated_DesiredAiming_Parms
		{
			bool bPreviousDesiredAiming;
		};
		static void NewProp_bPreviousDesiredAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousDesiredAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::NewProp_bPreviousDesiredAiming_SetBit(void* Obj)
	{
		((AlsCharacter_eventOnReplicated_DesiredAiming_Parms*)Obj)->bPreviousDesiredAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::NewProp_bPreviousDesiredAiming = { "bPreviousDesiredAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventOnReplicated_DesiredAiming_Parms), &Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::NewProp_bPreviousDesiredAiming_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::NewProp_bPreviousDesiredAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnReplicated_DesiredAiming", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::AlsCharacter_eventOnReplicated_DesiredAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::AlsCharacter_eventOnReplicated_DesiredAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics
	{
		struct AlsCharacter_eventOnReplicated_OverlayMode_Parms
		{
			FGameplayTag PreviousOverlayMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousOverlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousOverlayMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::NewProp_PreviousOverlayMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::NewProp_PreviousOverlayMode = { "PreviousOverlayMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnReplicated_OverlayMode_Parms, PreviousOverlayMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::NewProp_PreviousOverlayMode_MetaData), Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::NewProp_PreviousOverlayMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::NewProp_PreviousOverlayMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnReplicated_OverlayMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::AlsCharacter_eventOnReplicated_OverlayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::AlsCharacter_eventOnReplicated_OverlayMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnReplicated_ReplicatedViewRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousRotationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::NewProp_PreviousRotationMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::NewProp_PreviousRotationMode = { "PreviousRotationMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnRotationModeChanged_Parms, PreviousRotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::NewProp_PreviousRotationMode_MetaData), Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::NewProp_PreviousRotationMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::NewProp_PreviousRotationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnRotationModeChanged", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::PropPointers), sizeof(AlsCharacter_eventOnRotationModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnRotationModeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousStance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::NewProp_PreviousStance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::NewProp_PreviousStance = { "PreviousStance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventOnStanceChanged_Parms, PreviousStance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::NewProp_PreviousStance_MetaData), Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::NewProp_PreviousStance_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::NewProp_PreviousStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "OnStanceChanged", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::PropPointers), sizeof(AlsCharacter_eventOnStanceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventOnStanceChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_OnStanceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_OnStanceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics
	{
		static void NewProp_bRagdollFacingUpward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollFacingUpward;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::NewProp_bRagdollFacingUpward_SetBit(void* Obj)
	{
		((AlsCharacter_eventSelectGetUpMontage_Parms*)Obj)->bRagdollFacingUpward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::NewProp_bRagdollFacingUpward = { "bRagdollFacingUpward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventSelectGetUpMontage_Parms), &Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::NewProp_bRagdollFacingUpward_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSelectGetUpMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::NewProp_bRagdollFacingUpward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SelectGetUpMontage", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::PropPointers), sizeof(AlsCharacter_eventSelectGetUpMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventSelectGetUpMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_MantlingType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MantlingType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::NewProp_MantlingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::NewProp_MantlingType = { "MantlingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSelectMantlingSettings_Parms, MantlingType), Z_Construct_UEnum_ALS_EAlsMantlingType, METADATA_PARAMS(0, nullptr) }; // 268936725
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSelectMantlingSettings_Parms, ReturnValue), Z_Construct_UClass_UAlsMantlingSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::NewProp_MantlingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::NewProp_MantlingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SelectMantlingSettings", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::PropPointers), sizeof(AlsCharacter_eventSelectMantlingSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventSelectMantlingSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSelectRollMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SelectRollMontage", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::PropPointers), sizeof(AlsCharacter_eventSelectRollMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventSelectRollMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SelectRollMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SelectRollMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics
	{
		static void NewProp_bNewDesiredAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDesiredAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::NewProp_bNewDesiredAiming_SetBit(void* Obj)
	{
		((AlsCharacter_eventServerSetDesiredAiming_Parms*)Obj)->bNewDesiredAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::NewProp_bNewDesiredAiming = { "bNewDesiredAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventServerSetDesiredAiming_Parms), &Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::NewProp_bNewDesiredAiming_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::NewProp_bNewDesiredAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetDesiredAiming", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetDesiredAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetDesiredAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredGait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::NewProp_NewDesiredGait = { "NewDesiredGait", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerSetDesiredGait_Parms, NewDesiredGait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::NewProp_NewDesiredGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetDesiredGait", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetDesiredGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetDesiredGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredRotationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode = { "NewDesiredRotationMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerSetDesiredRotationMode_Parms, NewDesiredRotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetDesiredRotationMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetDesiredRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetDesiredRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredStance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::NewProp_NewDesiredStance = { "NewDesiredStance", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerSetDesiredStance_Parms, NewDesiredStance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::NewProp_NewDesiredStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetDesiredStance", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetDesiredStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetDesiredStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOverlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewOverlayMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::NewProp_NewOverlayMode = { "NewOverlayMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerSetOverlayMode_Parms, NewOverlayMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::NewProp_NewOverlayMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetOverlayMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetOverlayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetOverlayMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::NewProp_NewTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::NewProp_NewTargetLocation = { "NewTargetLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerSetRagdollTargetLocation_Parms, NewTargetLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::NewProp_NewTargetLocation_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::NewProp_NewTargetLocation_MetaData) }; // 561190916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::NewProp_NewTargetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetRagdollTargetLocation", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetRagdollTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetRagdollTargetLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewViewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::NewProp_NewViewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::NewProp_NewViewRotation = { "NewViewRotation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerSetReplicatedViewRotation_Parms, NewViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::NewProp_NewViewRotation_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::NewProp_NewViewRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::NewProp_NewViewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetReplicatedViewRotation", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetReplicatedViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A40C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetReplicatedViewRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::NewProp_NewViewMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerSetViewMode_Parms, NewViewMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::NewProp_NewViewMode_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::NewProp_NewViewMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::NewProp_NewViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerSetViewMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::PropPointers), sizeof(AlsCharacter_eventServerSetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerSetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerStartMantling_Parms, Parameters), Z_Construct_UScriptStruct_FAlsMantlingParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::NewProp_Parameters_MetaData), Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::NewProp_Parameters_MetaData) }; // 2188665798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerStartMantling", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::PropPointers), sizeof(AlsCharacter_eventServerStartMantling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerStartMantling_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerStartMantling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerStartMantling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerStartRagdolling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialYawAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetYawAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerStartRolling_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerStartRolling_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_InitialYawAngle = { "InitialYawAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerStartRolling_Parms, InitialYawAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_TargetYawAngle = { "TargetYawAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventServerStartRolling_Parms, TargetYawAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_InitialYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::NewProp_TargetYawAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerStartRolling", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::PropPointers), sizeof(AlsCharacter_eventServerStartRolling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::PropPointers) < 2048);
	static_assert(sizeof(AlsCharacter_eventServerStartRolling_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerStartRolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerStartRolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "ServerStopRagdolling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics
	{
		struct AlsCharacter_eventSetDesiredAiming_Parms
		{
			bool bNewDesiredAiming;
		};
		static void NewProp_bNewDesiredAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDesiredAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::NewProp_bNewDesiredAiming_SetBit(void* Obj)
	{
		((AlsCharacter_eventSetDesiredAiming_Parms*)Obj)->bNewDesiredAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::NewProp_bNewDesiredAiming = { "bNewDesiredAiming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventSetDesiredAiming_Parms), &Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::NewProp_bNewDesiredAiming_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::NewProp_bNewDesiredAiming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SetDesiredAiming", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::AlsCharacter_eventSetDesiredAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::AlsCharacter_eventSetDesiredAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics
	{
		struct AlsCharacter_eventSetDesiredGait_Parms
		{
			FGameplayTag NewDesiredGait;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredGait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::NewProp_NewDesiredGait = { "NewDesiredGait", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSetDesiredGait_Parms, NewDesiredGait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData), Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::NewProp_NewDesiredGait_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::NewProp_NewDesiredGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NewDesiredGait" },
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SetDesiredGait", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::AlsCharacter_eventSetDesiredGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::AlsCharacter_eventSetDesiredGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SetDesiredGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SetDesiredGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics
	{
		struct AlsCharacter_eventSetDesiredRotationMode_Parms
		{
			FGameplayTag NewDesiredRotationMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredRotationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode = { "NewDesiredRotationMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSetDesiredRotationMode_Parms, NewDesiredRotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData), Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::NewProp_NewDesiredRotationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NewDesiredRotationMode" },
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SetDesiredRotationMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::AlsCharacter_eventSetDesiredRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::AlsCharacter_eventSetDesiredRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics
	{
		struct AlsCharacter_eventSetDesiredStance_Parms
		{
			FGameplayTag NewDesiredStance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDesiredStance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::NewProp_NewDesiredStance = { "NewDesiredStance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSetDesiredStance_Parms, NewDesiredStance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData), Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::NewProp_NewDesiredStance_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::NewProp_NewDesiredStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NewDesiredStance" },
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SetDesiredStance", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::AlsCharacter_eventSetDesiredStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::AlsCharacter_eventSetDesiredStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SetDesiredStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SetDesiredStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics
	{
		struct AlsCharacter_eventSetOverlayMode_Parms
		{
			FGameplayTag NewOverlayMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOverlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewOverlayMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::NewProp_NewOverlayMode = { "NewOverlayMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSetOverlayMode_Parms, NewOverlayMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData), Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::NewProp_NewOverlayMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::NewProp_NewOverlayMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NewOverlayMode" },
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SetOverlayMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::AlsCharacter_eventSetOverlayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::AlsCharacter_eventSetOverlayMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SetOverlayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SetOverlayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics
	{
		struct AlsCharacter_eventSetViewMode_Parms
		{
			FGameplayTag NewViewMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::NewProp_NewViewMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventSetViewMode_Parms, NewViewMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::NewProp_NewViewMode_MetaData), Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::NewProp_NewViewMode_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::NewProp_NewViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NewViewMode" },
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "SetViewMode", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::AlsCharacter_eventSetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::AlsCharacter_eventSetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_SetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_SetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics
	{
		struct AlsCharacter_eventStartMantlingGrounded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AlsCharacter_eventStartMantlingGrounded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventStartMantlingGrounded_Parms), &Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "StartMantlingGrounded", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::AlsCharacter_eventStartMantlingGrounded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::AlsCharacter_eventStartMantlingGrounded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_StartRagdolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_StartRagdolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_StartRagdolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "StartRagdolling", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StartRagdolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_StartRagdolling_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAlsCharacter_StartRagdolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_StartRagdolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics
	{
		struct AlsCharacter_eventStartRolling_Parms
		{
			float PlayRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsCharacter_eventStartRolling_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "StartRolling", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::AlsCharacter_eventStartRolling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::AlsCharacter_eventStartRolling_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_StartRolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_StartRolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics
	{
		struct AlsCharacter_eventStopRagdolling_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AlsCharacter_eventStopRagdolling_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AlsCharacter_eventStopRagdolling_Parms), &Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS|Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAlsCharacter, nullptr, "StopRagdolling", nullptr, nullptr, Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::AlsCharacter_eventStopRagdolling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::AlsCharacter_eventStopRagdolling_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAlsCharacter_StopRagdolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAlsCharacter_StopRagdolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAlsCharacter);
	UClass* Z_Construct_UClass_AAlsCharacter_NoRegister()
	{
		return AAlsCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAlsCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlsCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AlsCharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDesiredAiming_MetaData[];
#endif
		static void NewProp_bDesiredAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDesiredAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredStance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredStance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredGait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInstance_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnimationInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedViewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedViewRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredVelocityYawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredVelocityYawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantlingState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantlingState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollingState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollingState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollingState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollingState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlsCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAlsCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredAiming, "ClientSetDesiredAiming" }, // 2265764659
		{ &Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredGait, "ClientSetDesiredGait" }, // 2296984070
		{ &Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredRotationMode, "ClientSetDesiredRotationMode" }, // 203863879
		{ &Z_Construct_UFunction_AAlsCharacter_ClientSetDesiredStance, "ClientSetDesiredStance" }, // 231977813
		{ &Z_Construct_UFunction_AAlsCharacter_ClientSetOverlayMode, "ClientSetOverlayMode" }, // 1799464921
		{ &Z_Construct_UFunction_AAlsCharacter_ClientSetViewMode, "ClientSetViewMode" }, // 3890859871
		{ &Z_Construct_UFunction_AAlsCharacter_IsMantlingAllowedToStart, "IsMantlingAllowedToStart" }, // 3845702869
		{ &Z_Construct_UFunction_AAlsCharacter_MulticastOnJumpedNetworked, "MulticastOnJumpedNetworked" }, // 3304038731
		{ &Z_Construct_UFunction_AAlsCharacter_MulticastStartMantling, "MulticastStartMantling" }, // 3378323014
		{ &Z_Construct_UFunction_AAlsCharacter_MulticastStartRagdolling, "MulticastStartRagdolling" }, // 768957068
		{ &Z_Construct_UFunction_AAlsCharacter_MulticastStartRolling, "MulticastStartRolling" }, // 1666340165
		{ &Z_Construct_UFunction_AAlsCharacter_MulticastStopRagdolling, "MulticastStopRagdolling" }, // 3888756214
		{ &Z_Construct_UFunction_AAlsCharacter_OnDesiredAimingChanged, "OnDesiredAimingChanged" }, // 3301588790
		{ &Z_Construct_UFunction_AAlsCharacter_OnGaitChanged, "OnGaitChanged" }, // 912296982
		{ &Z_Construct_UFunction_AAlsCharacter_OnLocomotionActionChanged, "OnLocomotionActionChanged" }, // 535522271
		{ &Z_Construct_UFunction_AAlsCharacter_OnLocomotionModeChanged, "OnLocomotionModeChanged" }, // 3701799520
		{ &Z_Construct_UFunction_AAlsCharacter_OnMantlingEnded, "OnMantlingEnded" }, // 448486005
		{ &Z_Construct_UFunction_AAlsCharacter_OnMantlingStarted, "OnMantlingStarted" }, // 3096974589
		{ &Z_Construct_UFunction_AAlsCharacter_OnOverlayModeChanged, "OnOverlayModeChanged" }, // 3419900097
		{ &Z_Construct_UFunction_AAlsCharacter_OnRagdollingEnded, "OnRagdollingEnded" }, // 380381459
		{ &Z_Construct_UFunction_AAlsCharacter_OnRagdollingStarted, "OnRagdollingStarted" }, // 2886789704
		{ &Z_Construct_UFunction_AAlsCharacter_OnReplicated_DesiredAiming, "OnReplicated_DesiredAiming" }, // 858618675
		{ &Z_Construct_UFunction_AAlsCharacter_OnReplicated_OverlayMode, "OnReplicated_OverlayMode" }, // 816574673
		{ &Z_Construct_UFunction_AAlsCharacter_OnReplicated_ReplicatedViewRotation, "OnReplicated_ReplicatedViewRotation" }, // 3484769527
		{ &Z_Construct_UFunction_AAlsCharacter_OnRotationModeChanged, "OnRotationModeChanged" }, // 789535058
		{ &Z_Construct_UFunction_AAlsCharacter_OnStanceChanged, "OnStanceChanged" }, // 3190316315
		{ &Z_Construct_UFunction_AAlsCharacter_SelectGetUpMontage, "SelectGetUpMontage" }, // 3346218453
		{ &Z_Construct_UFunction_AAlsCharacter_SelectMantlingSettings, "SelectMantlingSettings" }, // 66011740
		{ &Z_Construct_UFunction_AAlsCharacter_SelectRollMontage, "SelectRollMontage" }, // 3709891880
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredAiming, "ServerSetDesiredAiming" }, // 2074202775
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredGait, "ServerSetDesiredGait" }, // 891582675
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredRotationMode, "ServerSetDesiredRotationMode" }, // 925972754
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetDesiredStance, "ServerSetDesiredStance" }, // 2419899128
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetOverlayMode, "ServerSetOverlayMode" }, // 16628687
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetRagdollTargetLocation, "ServerSetRagdollTargetLocation" }, // 2927450775
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetReplicatedViewRotation, "ServerSetReplicatedViewRotation" }, // 3630508441
		{ &Z_Construct_UFunction_AAlsCharacter_ServerSetViewMode, "ServerSetViewMode" }, // 78393752
		{ &Z_Construct_UFunction_AAlsCharacter_ServerStartMantling, "ServerStartMantling" }, // 1686946203
		{ &Z_Construct_UFunction_AAlsCharacter_ServerStartRagdolling, "ServerStartRagdolling" }, // 3254923137
		{ &Z_Construct_UFunction_AAlsCharacter_ServerStartRolling, "ServerStartRolling" }, // 2790415677
		{ &Z_Construct_UFunction_AAlsCharacter_ServerStopRagdolling, "ServerStopRagdolling" }, // 345618735
		{ &Z_Construct_UFunction_AAlsCharacter_SetDesiredAiming, "SetDesiredAiming" }, // 3376733740
		{ &Z_Construct_UFunction_AAlsCharacter_SetDesiredGait, "SetDesiredGait" }, // 3714148351
		{ &Z_Construct_UFunction_AAlsCharacter_SetDesiredRotationMode, "SetDesiredRotationMode" }, // 3170425488
		{ &Z_Construct_UFunction_AAlsCharacter_SetDesiredStance, "SetDesiredStance" }, // 2363826543
		{ &Z_Construct_UFunction_AAlsCharacter_SetOverlayMode, "SetOverlayMode" }, // 2529248598
		{ &Z_Construct_UFunction_AAlsCharacter_SetViewMode, "SetViewMode" }, // 333728268
		{ &Z_Construct_UFunction_AAlsCharacter_StartMantlingGrounded, "StartMantlingGrounded" }, // 668096941
		{ &Z_Construct_UFunction_AAlsCharacter_StartRagdolling, "StartRagdolling" }, // 2933855619
		{ &Z_Construct_UFunction_AAlsCharacter_StartRolling, "StartRolling" }, // 3032494382
		{ &Z_Construct_UFunction_AAlsCharacter_StopRagdolling, "StopRagdolling" }, // 13852778
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings|Als Character Settings|Als Character|Desired State State|Als Character" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AlsCharacter.h" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AlsCharacterMovement_MetaData[] = {
		{ "Category", "Als Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AlsCharacterMovement = { "AlsCharacterMovement", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, AlsCharacterMovement), Z_Construct_UClass_UAlsCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AlsCharacterMovement_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AlsCharacterMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, Settings), Z_Construct_UClass_UAlsCharacterSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Settings_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Settings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementSettings_MetaData[] = {
		{ "Category", "Settings|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementSettings = { "MovementSettings", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, MovementSettings), Z_Construct_UClass_UAlsMovementSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementSettings_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_bDesiredAiming_MetaData[] = {
		{ "Category", "Settings|Als Character|Desired State" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AAlsCharacter_Statics::NewProp_bDesiredAiming_SetBit(void* Obj)
	{
		((AAlsCharacter*)Obj)->bDesiredAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_bDesiredAiming = { "bDesiredAiming", "OnReplicated_DesiredAiming", (EPropertyFlags)0x0020080100000035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAlsCharacter), &Z_Construct_UClass_AAlsCharacter_Statics::NewProp_bDesiredAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_bDesiredAiming_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_bDesiredAiming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredRotationMode_MetaData[] = {
		{ "Category", "Settings|Als Character|Desired State" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredRotationMode = { "DesiredRotationMode", nullptr, (EPropertyFlags)0x0020080000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, DesiredRotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredRotationMode_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredRotationMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredStance_MetaData[] = {
		{ "Category", "Settings|Als Character|Desired State" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredStance = { "DesiredStance", nullptr, (EPropertyFlags)0x0020080000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, DesiredStance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredStance_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredStance_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredGait_MetaData[] = {
		{ "Category", "Settings|Als Character|Desired State" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredGait = { "DesiredGait", nullptr, (EPropertyFlags)0x0020080000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, DesiredGait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredGait_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredGait_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "Settings|Als Character|Desired State" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0020080000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, ViewMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewMode_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_OverlayMode_MetaData[] = {
		{ "Category", "Settings|Als Character|Desired State" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_OverlayMode = { "OverlayMode", "OnReplicated_OverlayMode", (EPropertyFlags)0x0020080100000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, OverlayMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_OverlayMode_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_OverlayMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AnimationInstance_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AnimationInstance = { "AnimationInstance", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, AnimationInstance), Z_Construct_UClass_UAlsAnimationInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AnimationInstance_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AnimationInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionMode_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionMode = { "LocomotionMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, LocomotionMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionMode_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, RotationMode), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RotationMode_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RotationMode_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Stance_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, Stance), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Stance_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Stance_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, Gait), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Gait_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionAction_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionAction = { "LocomotionAction", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, LocomotionAction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionAction_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionAction_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementBase_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementBase = { "MovementBase", nullptr, (EPropertyFlags)0x0020088000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, MovementBase), Z_Construct_UScriptStruct_FAlsMovementBaseState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementBase_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementBase_MetaData) }; // 2138106074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ReplicatedViewRotation_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "Comment", "// Replicated raw view rotation. Depending on the context, this rotation can be in world space, or in movement\n// base space. In most cases, it is better to use FAlsViewState::Rotation to take advantage of network smoothing.\n" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
		{ "ToolTip", "Replicated raw view rotation. Depending on the context, this rotation can be in world space, or in movement\nbase space. In most cases, it is better to use FAlsViewState::Rotation to take advantage of network smoothing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ReplicatedViewRotation = { "ReplicatedViewRotation", "OnReplicated_ReplicatedViewRotation", (EPropertyFlags)0x0020080100022035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, ReplicatedViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ReplicatedViewRotation_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ReplicatedViewRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewState_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewState = { "ViewState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, ViewState), Z_Construct_UScriptStruct_FAlsViewState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewState_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewState_MetaData) }; // 1203690569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_InputDirection_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_InputDirection = { "InputDirection", nullptr, (EPropertyFlags)0x0020080000022035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, InputDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_InputDirection_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_InputDirection_MetaData) }; // 1419749565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredVelocityYawAngle_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredVelocityYawAngle = { "DesiredVelocityYawAngle", nullptr, (EPropertyFlags)0x0020080000022035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, DesiredVelocityYawAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredVelocityYawAngle_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredVelocityYawAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionState_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionState = { "LocomotionState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, LocomotionState), Z_Construct_UScriptStruct_FAlsLocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionState_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionState_MetaData) }; // 1854894870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MantlingState_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MantlingState = { "MantlingState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, MantlingState), Z_Construct_UScriptStruct_FAlsMantlingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MantlingState_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MantlingState_MetaData) }; // 4274059339
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollTargetLocation_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollTargetLocation = { "RagdollTargetLocation", nullptr, (EPropertyFlags)0x0020080000022035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, RagdollTargetLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollTargetLocation_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollTargetLocation_MetaData) }; // 561190916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollingState_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollingState = { "RagdollingState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, RagdollingState), Z_Construct_UScriptStruct_FAlsRagdollingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollingState_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollingState_MetaData) }; // 2143258262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RollingState_MetaData[] = {
		{ "Category", "State|Als Character" },
		{ "ModuleRelativePath", "Public/AlsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RollingState = { "RollingState", nullptr, (EPropertyFlags)0x0020080000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlsCharacter, RollingState), Z_Construct_UScriptStruct_FAlsRollingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RollingState_MetaData), Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RollingState_MetaData) }; // 451177450
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAlsCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AlsCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_bDesiredAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredStance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_OverlayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_AnimationInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Stance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MovementBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ReplicatedViewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_ViewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_InputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_DesiredVelocityYawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_LocomotionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_MantlingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RagdollingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlsCharacter_Statics::NewProp_RollingState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlsCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlsCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAlsCharacter_Statics::ClassParams = {
		&AAlsCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAlsCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAlsCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlsCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAlsCharacter()
	{
		if (!Z_Registration_Info_UClass_AAlsCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAlsCharacter.OuterSingleton, Z_Construct_UClass_AAlsCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAlsCharacter.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<AAlsCharacter>()
	{
		return AAlsCharacter::StaticClass();
	}

	void AAlsCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bDesiredAiming(TEXT("bDesiredAiming"));
		static const FName Name_DesiredRotationMode(TEXT("DesiredRotationMode"));
		static const FName Name_DesiredStance(TEXT("DesiredStance"));
		static const FName Name_DesiredGait(TEXT("DesiredGait"));
		static const FName Name_ViewMode(TEXT("ViewMode"));
		static const FName Name_OverlayMode(TEXT("OverlayMode"));
		static const FName Name_ReplicatedViewRotation(TEXT("ReplicatedViewRotation"));
		static const FName Name_InputDirection(TEXT("InputDirection"));
		static const FName Name_DesiredVelocityYawAngle(TEXT("DesiredVelocityYawAngle"));
		static const FName Name_RagdollTargetLocation(TEXT("RagdollTargetLocation"));

		const bool bIsValid = true
			&& Name_bDesiredAiming == ClassReps[(int32)ENetFields_Private::bDesiredAiming].Property->GetFName()
			&& Name_DesiredRotationMode == ClassReps[(int32)ENetFields_Private::DesiredRotationMode].Property->GetFName()
			&& Name_DesiredStance == ClassReps[(int32)ENetFields_Private::DesiredStance].Property->GetFName()
			&& Name_DesiredGait == ClassReps[(int32)ENetFields_Private::DesiredGait].Property->GetFName()
			&& Name_ViewMode == ClassReps[(int32)ENetFields_Private::ViewMode].Property->GetFName()
			&& Name_OverlayMode == ClassReps[(int32)ENetFields_Private::OverlayMode].Property->GetFName()
			&& Name_ReplicatedViewRotation == ClassReps[(int32)ENetFields_Private::ReplicatedViewRotation].Property->GetFName()
			&& Name_InputDirection == ClassReps[(int32)ENetFields_Private::InputDirection].Property->GetFName()
			&& Name_DesiredVelocityYawAngle == ClassReps[(int32)ENetFields_Private::DesiredVelocityYawAngle].Property->GetFName()
			&& Name_RagdollTargetLocation == ClassReps[(int32)ENetFields_Private::RagdollTargetLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAlsCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlsCharacter);
	AAlsCharacter::~AAlsCharacter() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAlsCharacter, AAlsCharacter::StaticClass, TEXT("AAlsCharacter"), &Z_Registration_Info_UClass_AAlsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAlsCharacter), 715585829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_2419058590(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
