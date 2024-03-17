// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALS/Public/State/AlsMovementDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlsMovementDirection() {}
// Cross Module References
	ALS_API UEnum* Z_Construct_UEnum_ALS_EAlsMovementDirection();
	ALS_API UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementDirectionCache();
	UPackage* Z_Construct_UPackage__Script_ALS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlsMovementDirection;
	static UEnum* EAlsMovementDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlsMovementDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlsMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ALS_EAlsMovementDirection, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("EAlsMovementDirection"));
		}
		return Z_Registration_Info_UEnum_EAlsMovementDirection.OuterSingleton;
	}
	template<> ALS_API UEnum* StaticEnum<EAlsMovementDirection>()
	{
		return EAlsMovementDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::Enumerators[] = {
		{ "EAlsMovementDirection::Forward", (int64)EAlsMovementDirection::Forward },
		{ "EAlsMovementDirection::Backward", (int64)EAlsMovementDirection::Backward },
		{ "EAlsMovementDirection::Left", (int64)EAlsMovementDirection::Left },
		{ "EAlsMovementDirection::Right", (int64)EAlsMovementDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::Enum_MetaDataParams[] = {
		{ "Backward.Name", "EAlsMovementDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.Name", "EAlsMovementDirection::Forward" },
		{ "Left.Name", "EAlsMovementDirection::Left" },
		{ "ModuleRelativePath", "Public/State/AlsMovementDirection.h" },
		{ "Right.Name", "EAlsMovementDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		"EAlsMovementDirection",
		"EAlsMovementDirection",
		Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ALS_EAlsMovementDirection()
	{
		if (!Z_Registration_Info_UEnum_EAlsMovementDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlsMovementDirection.InnerSingleton, Z_Construct_UEnum_ALS_EAlsMovementDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlsMovementDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache;
class UScriptStruct* FAlsMovementDirectionCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlsMovementDirectionCache, (UObject*)Z_Construct_UPackage__Script_ALS(), TEXT("AlsMovementDirectionCache"));
	}
	return Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache.OuterSingleton;
}
template<> ALS_API UScriptStruct* StaticStruct<FAlsMovementDirectionCache>()
{
	return FAlsMovementDirectionCache::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForward_MetaData[];
#endif
		static void NewProp_bForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBackward_MetaData[];
#endif
		static void NewProp_bBackward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeft_MetaData[];
#endif
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRight_MetaData[];
#endif
		static void NewProp_bRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/State/AlsMovementDirection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlsMovementDirectionCache>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_MovementDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementDirection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAlsMovementDirectionCache, MovementDirection), Z_Construct_UEnum_ALS_EAlsMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_MovementDirection_MetaData), Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_MovementDirection_MetaData) }; // 3444869328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bForward_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementDirection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bForward_SetBit(void* Obj)
	{
		((FAlsMovementDirectionCache*)Obj)->bForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bForward = { "bForward", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMovementDirectionCache), &Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bForward_MetaData), Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bForward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bBackward_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementDirection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bBackward_SetBit(void* Obj)
	{
		((FAlsMovementDirectionCache*)Obj)->bBackward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bBackward = { "bBackward", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMovementDirectionCache), &Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bBackward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bBackward_MetaData), Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bBackward_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bLeft_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementDirection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((FAlsMovementDirectionCache*)Obj)->bLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMovementDirectionCache), &Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bLeft_MetaData), Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bRight_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ALS" },
		{ "ModuleRelativePath", "Public/State/AlsMovementDirection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bRight_SetBit(void* Obj)
	{
		((FAlsMovementDirectionCache*)Obj)->bRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bRight = { "bRight", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAlsMovementDirectionCache), &Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bRight_MetaData), Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bRight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_MovementDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bBackward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewProp_bRight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ALS,
		nullptr,
		&NewStructOps,
		"AlsMovementDirectionCache",
		Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::PropPointers),
		sizeof(FAlsMovementDirectionCache),
		alignof(FAlsMovementDirectionCache),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAlsMovementDirectionCache()
	{
		if (!Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache.InnerSingleton, Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_Statics::EnumInfo[] = {
		{ EAlsMovementDirection_StaticEnum, TEXT("EAlsMovementDirection"), &Z_Registration_Info_UEnum_EAlsMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444869328U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_Statics::ScriptStructInfo[] = {
		{ FAlsMovementDirectionCache::StaticStruct, Z_Construct_UScriptStruct_FAlsMovementDirectionCache_Statics::NewStructOps, TEXT("AlsMovementDirectionCache"), &Z_Registration_Info_UScriptStruct_AlsMovementDirectionCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlsMovementDirectionCache), 452984255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_2586810711(TEXT("/Script/ALS"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ALS_Source_ALS_Public_State_AlsMovementDirection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
