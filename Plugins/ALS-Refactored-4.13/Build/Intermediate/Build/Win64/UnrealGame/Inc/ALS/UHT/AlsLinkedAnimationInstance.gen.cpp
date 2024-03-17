// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/AlsLinkedAnimationInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsLinkedAnimationInstance() {}
// Cross Module References
	ALS_API UClass* Z_Construct_UClass_AAlsCharacter_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsAnimationInstance_NoRegister();
	ALS_API UClass* Z_Construct_UClass_UAlsLinkedAnimationInstance();
	ALS_API UClass* Z_Construct_UClass_UAlsLinkedAnimationInstance_NoRegister();
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsHipsDirection();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	DEFINE_FUNCTION(UAlsLinkedAnimationInstance::execResetJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetJumped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsLinkedAnimationInstance::execActivatePivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsLinkedAnimationInstance::execSetHipsDirection)
	{
		P_GET_ENUM(EAlsHipsDirection,Z_Param_NewHipsDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHipsDirection(EAlsHipsDirection(Z_Param_NewHipsDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsLinkedAnimationInstance::execResetGroundedEntryMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetGroundedEntryMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsLinkedAnimationInstance::execRefreshLook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshLook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsLinkedAnimationInstance::execReinitializeLook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeLook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAlsLinkedAnimationInstance::execGetParentUnsafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAlsAnimationInstance**)Z_Param__Result=P_THIS->GetParentUnsafe();
		P_NATIVE_END;
	}
	void UAlsLinkedAnimationInstance::StaticRegisterNativesUAlsLinkedAnimationInstance()
	{
		UClass* Class = UAlsLinkedAnimationInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePivot", &UAlsLinkedAnimationInstance::execActivatePivot },
			{ "GetParentUnsafe", &UAlsLinkedAnimationInstance::execGetParentUnsafe },
			{ "RefreshLook", &UAlsLinkedAnimationInstance::execRefreshLook },
			{ "ReinitializeLook", &UAlsLinkedAnimationInstance::execReinitializeLook },
			{ "ResetGroundedEntryMode", &UAlsLinkedAnimationInstance::execResetGroundedEntryMode },
			{ "ResetJumped", &UAlsLinkedAnimationInstance::execResetJumped },
			{ "SetHipsDirection", &UAlsLinkedAnimationInstance::execSetHipsDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Linked Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsLinkedAnimationInstance, nullptr, "ActivatePivot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics
	{
		struct AlsLinkedAnimationInstance_eventGetParentUnsafe_Parms
		{
			UAlsAnimationInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsLinkedAnimationInstance_eventGetParentUnsafe_Parms, ReturnValue), Z_Construct_UClass_UAlsAnimationInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Linked Animation Instance" },
		{ "Comment", "// Be very careful when using this function to read your custom variables using the property access system. It is\n// safe to use this function to read variables that change only inside UAlsAnimationInstance::NativeUpdateAnimation()\n// because it is guaranteed that this function will be called before parallel animation evaluation. Reading variables\n// that change in other functions can be dangerous because they can be changed in the game thread at the same\n// time as being read in the worker thread, which can lead to undefined behavior or even a crash. If you're not\n// sure what you're doing, then it's better to access your custom variables through the \"Parent\" variable.\n" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
		{ "ReturnDisplayName", "Parent" },
		{ "ToolTip", "Be very careful when using this function to read your custom variables using the property access system. It is\nsafe to use this function to read variables that change only inside UAlsAnimationInstance::NativeUpdateAnimation()\nbecause it is guaranteed that this function will be called before parallel animation evaluation. Reading variables\nthat change in other functions can be dangerous because they can be changed in the game thread at the same\ntime as being read in the worker thread, which can lead to undefined behavior or even a crash. If you're not\nsure what you're doing, then it's better to access your custom variables through the \"Parent\" variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsLinkedAnimationInstance, nullptr, "GetParentUnsafe", nullptr, nullptr, Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::AlsLinkedAnimationInstance_eventGetParentUnsafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::AlsLinkedAnimationInstance_eventGetParentUnsafe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Linked Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsLinkedAnimationInstance, nullptr, "RefreshLook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Linked Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsLinkedAnimationInstance, nullptr, "ReinitializeLook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Linked Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsLinkedAnimationInstance, nullptr, "ResetGroundedEntryMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Linked Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsLinkedAnimationInstance, nullptr, "ResetJumped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics
	{
		struct AlsLinkedAnimationInstance_eventSetHipsDirection_Parms
		{
			EAlsHipsDirection NewHipsDirection;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewHipsDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewHipsDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection = { "NewHipsDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AlsLinkedAnimationInstance_eventSetHipsDirection_Parms, NewHipsDirection), Z_Construct_UEnum_ALS_EAlsHipsDirection, METADATA_PARAMS(0, nullptr) }; // 3428037698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::NewProp_NewHipsDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "ALS|Linked Animation Instance" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlsLinkedAnimationInstance, nullptr, "SetHipsDirection", nullptr, nullptr, Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::AlsLinkedAnimationInstance_eventSetHipsDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::AlsLinkedAnimationInstance_eventSetHipsDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlsLinkedAnimationInstance);
	UClass* Z_Construct_UClass_UAlsLinkedAnimationInstance_NoRegister()
	{
		return UAlsLinkedAnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlsLinkedAnimationInstance_ActivatePivot, "ActivatePivot" }, // 3820710227
		{ &Z_Construct_UFunction_UAlsLinkedAnimationInstance_GetParentUnsafe, "GetParentUnsafe" }, // 3583125341
		{ &Z_Construct_UFunction_UAlsLinkedAnimationInstance_RefreshLook, "RefreshLook" }, // 211173049
		{ &Z_Construct_UFunction_UAlsLinkedAnimationInstance_ReinitializeLook, "ReinitializeLook" }, // 4076995087
		{ &Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetGroundedEntryMode, "ResetGroundedEntryMode" }, // 3600474142
		{ &Z_Construct_UFunction_UAlsLinkedAnimationInstance_ResetJumped, "ResetJumped" }, // 2717986540
		{ &Z_Construct_UFunction_UAlsLinkedAnimationInstance_SetHipsDirection, "SetHipsDirection" }, // 4233887450
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AlsLinkedAnimationInstance.h" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsLinkedAnimationInstance, Parent), Z_Construct_UClass_UAlsAnimationInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Parent_MetaData), Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Parent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/AlsLinkedAnimationInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0024080000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlsLinkedAnimationInstance, Character), Z_Construct_UClass_AAlsCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Character_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlsLinkedAnimationInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::ClassParams = {
		&UAlsLinkedAnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAlsLinkedAnimationInstance()
	{
		if (!Z_Registration_Info_UClass_UAlsLinkedAnimationInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlsLinkedAnimationInstance.OuterSingleton, Z_Construct_UClass_UAlsLinkedAnimationInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlsLinkedAnimationInstance.OuterSingleton;
	}
	template<> ALS_API UClass* StaticClass<UAlsLinkedAnimationInstance>()
	{
		return UAlsLinkedAnimationInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlsLinkedAnimationInstance);
	UAlsLinkedAnimationInstance::~UAlsLinkedAnimationInstance() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlsLinkedAnimationInstance, UAlsLinkedAnimationInstance::StaticClass, TEXT("UAlsLinkedAnimationInstance"), &Z_Registration_Info_UClass_UAlsLinkedAnimationInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlsLinkedAnimationInstance), 3181316760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_2773356996(TEXT("/Script/ALS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_AlsLinkedAnimationInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
