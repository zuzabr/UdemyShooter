// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/ShooterCoreTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCoreTypes() {}
// Cross Module References
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactlData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FDecalData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
// End Cross Module References
class UScriptStruct* FWeaponUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponUIData, Z_Construct_UPackage__Script_Shooter(), TEXT("WeaponUIData"), sizeof(FWeaponUIData), Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash());
	}
	return Singleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FWeaponUIData>()
{
	return FWeaponUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponUIData(FWeaponUIData::StaticStruct, TEXT("/Script/Shooter"), TEXT("WeaponUIData"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_StaticRegisterNativesFWeaponUIData
{
	FScriptStruct_Shooter_StaticRegisterNativesFWeaponUIData()
	{
		UScriptStruct::DeferCppStructOps<FWeaponUIData>(FName(TEXT("WeaponUIData")));
	}
} ScriptStruct_Shooter_StaticRegisterNativesFWeaponUIData;
	struct Z_Construct_UScriptStruct_FWeaponUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWeaponIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainWeaponIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrosshairIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//---------------------Widgets---------------------\n" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
		{ "ToolTip", "---------------------Widgets---------------------" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon = { "MainWeaponIcon", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponUIData, MainWeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon = { "CrosshairIcon", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponUIData, CrosshairIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"WeaponUIData",
		sizeof(FWeaponUIData),
		alignof(FWeaponUIData),
		Z_Construct_UScriptStruct_FWeaponUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponUIData"), sizeof(FWeaponUIData), Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponUIData_Hash() { return 176320849U; }
class UScriptStruct* FImpactlData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FImpactlData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactlData, Z_Construct_UPackage__Script_Shooter(), TEXT("ImpactlData"), sizeof(FImpactlData), Get_Z_Construct_UScriptStruct_FImpactlData_Hash());
	}
	return Singleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FImpactlData>()
{
	return FImpactlData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImpactlData(FImpactlData::StaticStruct, TEXT("/Script/Shooter"), TEXT("ImpactlData"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_StaticRegisterNativesFImpactlData
{
	FScriptStruct_Shooter_StaticRegisterNativesFImpactlData()
	{
		UScriptStruct::DeferCppStructOps<FImpactlData>(FName(TEXT("ImpactlData")));
	}
} ScriptStruct_Shooter_StaticRegisterNativesFImpactlData;
	struct Z_Construct_UScriptStruct_FImpactlData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactlData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactlData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactlData, NiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData = { "DecalData", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactlData, DecalData), Z_Construct_UScriptStruct_FDecalData, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactlData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactlData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"ImpactlData",
		sizeof(FImpactlData),
		alignof(FImpactlData),
		Z_Construct_UScriptStruct_FImpactlData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactlData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactlData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactlData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImpactlData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImpactlData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImpactlData"), sizeof(FImpactlData), Get_Z_Construct_UScriptStruct_FImpactlData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImpactlData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImpactlData_Hash() { return 499022585U; }
class UScriptStruct* FDecalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecalData, Z_Construct_UPackage__Script_Shooter(), TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_Hash());
	}
	return Singleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FDecalData>()
{
	return FDecalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecalData(FDecalData::StaticStruct, TEXT("/Script/Shooter"), TEXT("DecalData"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_StaticRegisterNativesFDecalData
{
	FScriptStruct_Shooter_StaticRegisterNativesFDecalData()
	{
		UScriptStruct::DeferCppStructOps<FDecalData>(FName(TEXT("DecalData")));
	}
} ScriptStruct_Shooter_StaticRegisterNativesFDecalData;
	struct Z_Construct_UScriptStruct_FDecalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, LifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, FadeOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"DecalData",
		sizeof(FDecalData),
		alignof(FDecalData),
		Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash() { return 775759115U; }
class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_Shooter(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash());
	}
	return Singleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/Shooter"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_StaticRegisterNativesFWeaponData
{
	FScriptStruct_Shooter_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps<FWeaponData>(FName(TEXT("WeaponData")));
	}
} ScriptStruct_Shooter_StaticRegisterNativesFWeaponData;
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponClass), Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage = { "ReloadAnimMontage", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, ReloadAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"WeaponData",
		sizeof(FWeaponData),
		alignof(FWeaponData),
		Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_Hash() { return 3310619954U; }
class UScriptStruct* FAmmoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTER_API uint32 Get_Z_Construct_UScriptStruct_FAmmoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoData, Z_Construct_UPackage__Script_Shooter(), TEXT("AmmoData"), sizeof(FAmmoData), Get_Z_Construct_UScriptStruct_FAmmoData_Hash());
	}
	return Singleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FAmmoData>()
{
	return FAmmoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAmmoData(FAmmoData::StaticStruct, TEXT("/Script/Shooter"), TEXT("AmmoData"), false, nullptr, nullptr);
static struct FScriptStruct_Shooter_StaticRegisterNativesFAmmoData
{
	FScriptStruct_Shooter_StaticRegisterNativesFAmmoData()
	{
		UScriptStruct::DeferCppStructOps<FAmmoData>(FName(TEXT("AmmoData")));
	}
} ScriptStruct_Shooter_StaticRegisterNativesFAmmoData;
	struct Z_Construct_UScriptStruct_FAmmoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bullets_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bullets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Clips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfinite_MetaData[];
#endif
		static void NewProp_bInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfinite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoData, Bullets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditCondition", "!bInfinite" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips = { "Clips", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoData, Clips), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_SetBit(void* Obj)
	{
		((FAmmoData*)Obj)->bInfinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite = { "bInfinite", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAmmoData), &Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"AmmoData",
		sizeof(FAmmoData),
		alignof(FAmmoData),
		Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAmmoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAmmoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Shooter();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AmmoData"), sizeof(FAmmoData), Get_Z_Construct_UScriptStruct_FAmmoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAmmoData_Hash() { return 2057222697U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
