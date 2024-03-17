// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlsCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAlsMantlingSettings;
class UAnimMontage;
enum class EAlsMantlingType : uint8;
struct FAlsMantlingParameters;
struct FGameplayTag;
struct FVector_NetQuantize;
#ifdef ALS_AlsCharacter_generated_h
#error "AlsCharacter.generated.h already included, missing '#pragma once' in AlsCharacter.h"
#endif
#define ALS_AlsCharacter_generated_h

#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_SPARSE_DATA
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetRagdollTargetLocation_Implementation(FVector_NetQuantize const& NewTargetLocation); \
	virtual void OnRagdollingEnded_Implementation(); \
	virtual UAnimMontage* SelectGetUpMontage_Implementation(bool bRagdollFacingUpward); \
	virtual void MulticastStopRagdolling_Implementation(); \
	virtual void ServerStopRagdolling_Implementation(); \
	virtual void OnRagdollingStarted_Implementation(); \
	virtual void MulticastStartRagdolling_Implementation(); \
	virtual void ServerStartRagdolling_Implementation(); \
	virtual void OnMantlingEnded_Implementation(); \
	virtual void OnMantlingStarted_Implementation(FAlsMantlingParameters const& Parameters); \
	virtual UAlsMantlingSettings* SelectMantlingSettings_Implementation(EAlsMantlingType MantlingType); \
	virtual void MulticastStartMantling_Implementation(FAlsMantlingParameters const& Parameters); \
	virtual void ServerStartMantling_Implementation(FAlsMantlingParameters const& Parameters); \
	virtual bool IsMantlingAllowedToStart_Implementation() const; \
	virtual void MulticastStartRolling_Implementation(UAnimMontage* Montage, float PlayRate, float InitialYawAngle, float TargetYawAngle); \
	virtual void ServerStartRolling_Implementation(UAnimMontage* Montage, float PlayRate, float InitialYawAngle, float TargetYawAngle); \
	virtual UAnimMontage* SelectRollMontage_Implementation(); \
	virtual void MulticastOnJumpedNetworked_Implementation(); \
	virtual void ServerSetReplicatedViewRotation_Implementation(FRotator const& NewViewRotation); \
	virtual void OnLocomotionActionChanged_Implementation(FGameplayTag const& PreviousLocomotionAction); \
	virtual void OnOverlayModeChanged_Implementation(FGameplayTag const& PreviousOverlayMode); \
	virtual void ServerSetOverlayMode_Implementation(FGameplayTag const& NewOverlayMode); \
	virtual void ClientSetOverlayMode_Implementation(FGameplayTag const& NewOverlayMode); \
	virtual void OnGaitChanged_Implementation(FGameplayTag const& PreviousGait); \
	virtual void ServerSetDesiredGait_Implementation(FGameplayTag const& NewDesiredGait); \
	virtual void ClientSetDesiredGait_Implementation(FGameplayTag const& NewDesiredGait); \
	virtual void OnStanceChanged_Implementation(FGameplayTag const& PreviousStance); \
	virtual void ServerSetDesiredStance_Implementation(FGameplayTag const& NewDesiredStance); \
	virtual void ClientSetDesiredStance_Implementation(FGameplayTag const& NewDesiredStance); \
	virtual void OnRotationModeChanged_Implementation(FGameplayTag const& PreviousRotationMode); \
	virtual void ServerSetDesiredRotationMode_Implementation(FGameplayTag const& NewDesiredRotationMode); \
	virtual void ClientSetDesiredRotationMode_Implementation(FGameplayTag const& NewDesiredRotationMode); \
	virtual void OnDesiredAimingChanged_Implementation(bool bPreviousDesiredAiming); \
	virtual void ServerSetDesiredAiming_Implementation(bool bNewDesiredAiming); \
	virtual void ClientSetDesiredAiming_Implementation(bool bNewDesiredAiming); \
	virtual void OnLocomotionModeChanged_Implementation(FGameplayTag const& PreviousLocomotionMode); \
	virtual void ServerSetViewMode_Implementation(FGameplayTag const& NewViewMode); \
	virtual void ClientSetViewMode_Implementation(FGameplayTag const& NewViewMode); \
 \
	DECLARE_FUNCTION(execServerSetRagdollTargetLocation); \
	DECLARE_FUNCTION(execOnRagdollingEnded); \
	DECLARE_FUNCTION(execSelectGetUpMontage); \
	DECLARE_FUNCTION(execMulticastStopRagdolling); \
	DECLARE_FUNCTION(execServerStopRagdolling); \
	DECLARE_FUNCTION(execStopRagdolling); \
	DECLARE_FUNCTION(execOnRagdollingStarted); \
	DECLARE_FUNCTION(execMulticastStartRagdolling); \
	DECLARE_FUNCTION(execServerStartRagdolling); \
	DECLARE_FUNCTION(execStartRagdolling); \
	DECLARE_FUNCTION(execOnMantlingEnded); \
	DECLARE_FUNCTION(execOnMantlingStarted); \
	DECLARE_FUNCTION(execSelectMantlingSettings); \
	DECLARE_FUNCTION(execMulticastStartMantling); \
	DECLARE_FUNCTION(execServerStartMantling); \
	DECLARE_FUNCTION(execStartMantlingGrounded); \
	DECLARE_FUNCTION(execIsMantlingAllowedToStart); \
	DECLARE_FUNCTION(execMulticastStartRolling); \
	DECLARE_FUNCTION(execServerStartRolling); \
	DECLARE_FUNCTION(execSelectRollMontage); \
	DECLARE_FUNCTION(execStartRolling); \
	DECLARE_FUNCTION(execMulticastOnJumpedNetworked); \
	DECLARE_FUNCTION(execOnReplicated_ReplicatedViewRotation); \
	DECLARE_FUNCTION(execServerSetReplicatedViewRotation); \
	DECLARE_FUNCTION(execOnLocomotionActionChanged); \
	DECLARE_FUNCTION(execOnOverlayModeChanged); \
	DECLARE_FUNCTION(execOnReplicated_OverlayMode); \
	DECLARE_FUNCTION(execServerSetOverlayMode); \
	DECLARE_FUNCTION(execClientSetOverlayMode); \
	DECLARE_FUNCTION(execSetOverlayMode); \
	DECLARE_FUNCTION(execOnGaitChanged); \
	DECLARE_FUNCTION(execServerSetDesiredGait); \
	DECLARE_FUNCTION(execClientSetDesiredGait); \
	DECLARE_FUNCTION(execSetDesiredGait); \
	DECLARE_FUNCTION(execOnStanceChanged); \
	DECLARE_FUNCTION(execServerSetDesiredStance); \
	DECLARE_FUNCTION(execClientSetDesiredStance); \
	DECLARE_FUNCTION(execSetDesiredStance); \
	DECLARE_FUNCTION(execOnRotationModeChanged); \
	DECLARE_FUNCTION(execServerSetDesiredRotationMode); \
	DECLARE_FUNCTION(execClientSetDesiredRotationMode); \
	DECLARE_FUNCTION(execSetDesiredRotationMode); \
	DECLARE_FUNCTION(execOnDesiredAimingChanged); \
	DECLARE_FUNCTION(execOnReplicated_DesiredAiming); \
	DECLARE_FUNCTION(execServerSetDesiredAiming); \
	DECLARE_FUNCTION(execClientSetDesiredAiming); \
	DECLARE_FUNCTION(execSetDesiredAiming); \
	DECLARE_FUNCTION(execOnLocomotionModeChanged); \
	DECLARE_FUNCTION(execServerSetViewMode); \
	DECLARE_FUNCTION(execClientSetViewMode); \
	DECLARE_FUNCTION(execSetViewMode);


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_ACCESSORS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlsCharacter(); \
	friend struct Z_Construct_UClass_AAlsCharacter_Statics; \
public: \
	DECLARE_CLASS(AAlsCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ALS"), NO_API) \
	DECLARE_SERIALIZER(AAlsCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDesiredAiming=NETFIELD_REP_START, \
		DesiredRotationMode, \
		DesiredStance, \
		DesiredGait, \
		ViewMode, \
		OverlayMode, \
		ReplicatedViewRotation, \
		InputDirection, \
		DesiredVelocityYawAngle, \
		RagdollTargetLocation, \
		NETFIELD_REP_END=RagdollTargetLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlsCharacter(AAlsCharacter&&); \
	NO_API AAlsCharacter(const AAlsCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlsCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlsCharacter) \
	NO_API virtual ~AAlsCharacter();


#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_21_PROLOG
#define FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_SPARSE_DATA \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_ACCESSORS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALS_API UClass* StaticClass<class AAlsCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
