// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/LauncherWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLauncherWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ALauncherWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ALauncherWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseWeapon();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ARocketProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void ALauncherWeapon::StaticRegisterNativesALauncherWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALauncherWeapon);
	UClass* Z_Construct_UClass_ALauncherWeapon_NoRegister()
	{
		return ALauncherWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ALauncherWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoAmmoSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoAmmoSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALauncherWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/LauncherWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/LauncherWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/LauncherWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALauncherWeapon, ProjectileClass), Z_Construct_UClass_ARocketProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_NoAmmoSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Weapon/LauncherWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_NoAmmoSound = { "NoAmmoSound", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALauncherWeapon, NoAmmoSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_NoAmmoSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_NoAmmoSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALauncherWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALauncherWeapon_Statics::NewProp_NoAmmoSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALauncherWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALauncherWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALauncherWeapon_Statics::ClassParams = {
		&ALauncherWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALauncherWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALauncherWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALauncherWeapon()
	{
		if (!Z_Registration_Info_UClass_ALauncherWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALauncherWeapon.OuterSingleton, Z_Construct_UClass_ALauncherWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALauncherWeapon.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ALauncherWeapon>()
	{
		return ALauncherWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALauncherWeapon);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_LauncherWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_LauncherWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALauncherWeapon, ALauncherWeapon::StaticClass, TEXT("ALauncherWeapon"), &Z_Registration_Info_UClass_ALauncherWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALauncherWeapon), 2435337808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_LauncherWeapon_h_3587298868(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_LauncherWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_LauncherWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
