// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/RifleWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifleWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ARifleWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ARifleWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseWeapon();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UClass* Z_Construct_UClass_UWeaponFX_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void ARifleWeapon::StaticRegisterNativesARifleWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARifleWeapon);
	UClass* Z_Construct_UClass_ARifleWeapon_NoRegister()
	{
		return ARifleWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARifleWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFXComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponFXComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVZoomAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVZoomAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFXComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFXComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARifleWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/RifleWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, FireRate), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent_MetaData[] = {
		{ "Category", "VFX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent = { "WeaponFXComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, WeaponFXComponent), Z_Construct_UClass_UWeaponFX_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FOVZoomAngle_MetaData[] = {
		{ "Category", "WeaponInfo" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FOVZoomAngle = { "FOVZoomAngle", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, FOVZoomAngle), METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FOVZoomAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FOVZoomAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent = { "MuzzleFXComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, MuzzleFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireAudioComponent = { "FireAudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARifleWeapon, FireAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireAudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARifleWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_WeaponFXComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FOVZoomAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_MuzzleFXComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_FireAudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARifleWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifleWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARifleWeapon_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_ARifleWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARifleWeapon.OuterSingleton, Z_Construct_UClass_ARifleWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARifleWeapon.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ARifleWeapon>()
	{
		return ARifleWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARifleWeapon);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_RifleWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_RifleWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARifleWeapon, ARifleWeapon::StaticClass, TEXT("ARifleWeapon"), &Z_Registration_Info_UClass_ARifleWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARifleWeapon), 2312098256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_RifleWeapon_h_799842408(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_RifleWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_RifleWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
