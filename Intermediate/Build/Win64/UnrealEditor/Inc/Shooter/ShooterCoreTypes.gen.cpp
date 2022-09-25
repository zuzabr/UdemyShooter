// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/ShooterCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCoreTypes() {}
// Cross Module References
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FDecalData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactlData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_EMatchState();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmmoData;
class UScriptStruct* FAmmoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmmoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmmoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoData, Z_Construct_UPackage__Script_Shooter(), TEXT("AmmoData"));
	}
	return Z_Registration_Info_UScriptStruct_AmmoData.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FAmmoData>()
{
	return FAmmoData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAmmoData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bullets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bullets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Clips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInfinite_MetaData[];
#endif
		static void NewProp_bInfinite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfinite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmoData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoData, Bullets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditCondition", "!bInfinite" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips = { "Clips", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoData, Clips), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_SetBit(void* Obj)
	{
		((FAmmoData*)Obj)->bInfinite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite = { "bInfinite", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAmmoData), &Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_bInfinite,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_AmmoData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmmoData.InnerSingleton, Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AmmoData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_Shooter(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, WeaponClass), Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage = { "ReloadAnimMontage", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponData, ReloadAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ReloadAnimMontage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DecalData;
class UScriptStruct* FDecalData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DecalData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DecalData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecalData, Z_Construct_UPackage__Script_Shooter(), TEXT("DecalData"));
	}
	return Z_Registration_Info_UScriptStruct_DecalData.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FDecalData>()
{
	return FDecalData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDecalData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecalData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, LifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, FadeOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_LifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_DecalData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DecalData.InnerSingleton, Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DecalData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImpactlData;
class UScriptStruct* FImpactlData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImpactlData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImpactlData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImpactlData, Z_Construct_UPackage__Script_Shooter(), TEXT("ImpactlData"));
	}
	return Z_Registration_Info_UScriptStruct_ImpactlData.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FImpactlData>()
{
	return FImpactlData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImpactlData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactlData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImpactlData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImpactlData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactlData, NiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData = { "DecalData", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImpactlData, DecalData), Z_Construct_UScriptStruct_FDecalData, METADATA_PARAMS(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData_MetaData)) }; // 2694734361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImpactlData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_NiagaraEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImpactlData_Statics::NewProp_DecalData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImpactlData_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_ImpactlData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImpactlData.InnerSingleton, Z_Construct_UScriptStruct_FImpactlData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImpactlData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponUIData;
class UScriptStruct* FWeaponUIData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponUIData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponUIData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponUIData, Z_Construct_UPackage__Script_Shooter(), TEXT("WeaponUIData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponUIData.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FWeaponUIData>()
{
	return FWeaponUIData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponUIData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWeaponIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWeaponIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::Struct_MetaDataParams[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon = { "MainWeaponIcon", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponUIData, MainWeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon = { "CrosshairIcon", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponUIData, CrosshairIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_MainWeaponIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewProp_CrosshairIcon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponUIData_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_WeaponUIData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponUIData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponUIData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponUIData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameData;
class UScriptStruct* FGameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameData, Z_Construct_UPackage__Script_Shooter(), TEXT("GameData"));
	}
	return Z_Registration_Info_UScriptStruct_GameData.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FGameData>()
{
	return FGameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoundNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoundTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTeamColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTeamColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TeamColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RespawnTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//--------------------GameMode---------------------\n" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
		{ "ToolTip", "--------------------GameMode---------------------" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_PlayersNum_MetaData[] = {
		{ "Category", "Game" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_PlayersNum = { "PlayersNum", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, PlayersNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_PlayersNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_PlayersNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundNum_MetaData[] = {
		{ "Category", "Game" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundNum = { "RoundNum", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, RoundNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundTime_MetaData[] = {
		{ "Category", "Game" },
		{ "ClampMax", "100" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundTime = { "RoundTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, RoundTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DefaultTeamColor_MetaData[] = {
		{ "Category", "GameData" },
		{ "Comment", "//In Seconds\n" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
		{ "ToolTip", "In Seconds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DefaultTeamColor = { "DefaultTeamColor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, DefaultTeamColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DefaultTeamColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DefaultTeamColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_TeamColors_Inner = { "TeamColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_TeamColors_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_TeamColors = { "TeamColors", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, TeamColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_TeamColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_TeamColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Game" },
		{ "ClampMax", "20" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameData, RespawnTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RespawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RespawnTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_PlayersNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RoundTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_DefaultTeamColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_TeamColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_TeamColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameData_Statics::NewProp_RespawnTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"GameData",
		sizeof(FGameData),
		alignof(FGameData),
		Z_Construct_UScriptStruct_FGameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameData.InnerSingleton, Z_Construct_UScriptStruct_FGameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMatchState;
	static UEnum* EMatchState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMatchState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMatchState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Shooter_EMatchState, Z_Construct_UPackage__Script_Shooter(), TEXT("EMatchState"));
		}
		return Z_Registration_Info_UEnum_EMatchState.OuterSingleton;
	}
	template<> SHOOTER_API UEnum* StaticEnum<EMatchState>()
	{
		return EMatchState_StaticEnum();
	}
	struct Z_Construct_UEnum_Shooter_EMatchState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Shooter_EMatchState_Statics::Enumerators[] = {
		{ "EMatchState::WaitingToStart", (int64)EMatchState::WaitingToStart },
		{ "EMatchState::InProgress", (int64)EMatchState::InProgress },
		{ "EMatchState::Pause", (int64)EMatchState::Pause },
		{ "EMatchState::GameOver", (int64)EMatchState::GameOver },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Shooter_EMatchState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GameOver.Name", "EMatchState::GameOver" },
		{ "InProgress.Name", "EMatchState::InProgress" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
		{ "Pause.Name", "EMatchState::Pause" },
		{ "WaitingToStart.Name", "EMatchState::WaitingToStart" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Shooter_EMatchState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		"EMatchState",
		"EMatchState",
		Z_Construct_UEnum_Shooter_EMatchState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Shooter_EMatchState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Shooter_EMatchState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Shooter_EMatchState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Shooter_EMatchState()
	{
		if (!Z_Registration_Info_UEnum_EMatchState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMatchState.InnerSingleton, Z_Construct_UEnum_Shooter_EMatchState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMatchState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelData;
class UScriptStruct* FLevelData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelData, Z_Construct_UPackage__Script_Shooter(), TEXT("LevelData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelData.OuterSingleton;
}
template<> SHOOTER_API UScriptStruct* StaticStruct<FLevelData>()
{
	return FLevelData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelThumb_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelThumb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//--------------------GameMode---------------------\n" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
		{ "ToolTip", "--------------------GameMode---------------------" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelData, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelDisplayName_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelDisplayName = { "LevelDisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelData, LevelDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelThumb_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShooterCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelThumb = { "LevelThumb", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelData, LevelThumb), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelThumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelThumb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelData_Statics::NewProp_LevelThumb,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
		nullptr,
		&NewStructOps,
		"LevelData",
		sizeof(FLevelData),
		alignof(FLevelData),
		Z_Construct_UScriptStruct_FLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelData()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelData.InnerSingleton, Z_Construct_UScriptStruct_FLevelData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_Statics::EnumInfo[] = {
		{ EMatchState_StaticEnum, TEXT("EMatchState"), &Z_Registration_Info_UEnum_EMatchState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4228247019U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_Statics::ScriptStructInfo[] = {
		{ FAmmoData::StaticStruct, Z_Construct_UScriptStruct_FAmmoData_Statics::NewStructOps, TEXT("AmmoData"), &Z_Registration_Info_UScriptStruct_AmmoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmmoData), 2012568362U) },
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_WeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 1452695389U) },
		{ FDecalData::StaticStruct, Z_Construct_UScriptStruct_FDecalData_Statics::NewStructOps, TEXT("DecalData"), &Z_Registration_Info_UScriptStruct_DecalData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDecalData), 2694734361U) },
		{ FImpactlData::StaticStruct, Z_Construct_UScriptStruct_FImpactlData_Statics::NewStructOps, TEXT("ImpactlData"), &Z_Registration_Info_UScriptStruct_ImpactlData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImpactlData), 642948408U) },
		{ FWeaponUIData::StaticStruct, Z_Construct_UScriptStruct_FWeaponUIData_Statics::NewStructOps, TEXT("WeaponUIData"), &Z_Registration_Info_UScriptStruct_WeaponUIData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponUIData), 2823947487U) },
		{ FGameData::StaticStruct, Z_Construct_UScriptStruct_FGameData_Statics::NewStructOps, TEXT("GameData"), &Z_Registration_Info_UScriptStruct_GameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameData), 1238543316U) },
		{ FLevelData::StaticStruct, Z_Construct_UScriptStruct_FLevelData_Statics::NewStructOps, TEXT("LevelData"), &Z_Registration_Info_UScriptStruct_LevelData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelData), 4218461971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_1695767528(TEXT("/Script/Shooter"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
