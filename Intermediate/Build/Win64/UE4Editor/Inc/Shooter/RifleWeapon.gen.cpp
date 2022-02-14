// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/RifleWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifleWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ARifleWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ARifleWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseWeapon();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UWeaponFX_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	void ARifleWeapon::StaticRegisterNativesARifleWeapon()
	{
	}
	UClass* Z_Construct_UClass_ARifleWeapon_NoRegister()
	{
		return ARifleWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARifleWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TraceTargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFXComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponFXComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFXComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFXComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARifleWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/RifleWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, FireRate), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceFX_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceFX = { "TraceFX", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, TraceFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceTargetName_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceTargetName = { "TraceTargetName", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, TraceTargetName), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceTargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent_MetaData[] = {
		{ "Category", "VFX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent = { "WeaponFXComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, WeaponFXComponent), Z_Construct_UClass_UWeaponFX_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent = { "MuzzleFXComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, MuzzleFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARifleWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_TraceTargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARifleWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifleWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARifleWeapon_Statics::ClassParams = {
		&ARifleWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARifleWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARifleWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARifleWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARifleWeapon, 901499187);
	template<> SHOOTER_API UClass* StaticClass<ARifleWeapon>()
	{
		return ARifleWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARifleWeapon(Z_Construct_UClass_ARifleWeapon, &ARifleWeapon::StaticClass, TEXT("/Script/Shooter"), TEXT("ARifleWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARifleWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
