// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/PickUps/AmmoPickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickUp() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AAmmoPickUp_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AAmmoPickUp();
	SHOOTER_API UClass* Z_Construct_UClass_ABasePickUp();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
// End Cross Module References
	void AAmmoPickUp::StaticRegisterNativesAAmmoPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoPickUp);
	UClass* Z_Construct_UClass_AAmmoPickUp_NoRegister()
	{
		return AAmmoPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipsAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipsAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUps/AmmoPickUp.h" },
		{ "ModuleRelativePath", "Public/PickUps/AmmoPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PickUps/AmmoPickUp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount = { "ClipsAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickUp, ClipsAmount), METADATA_PARAMS(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "ModuleRelativePath", "Public/PickUps/AmmoPickUp.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickUp, WeaponType), Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickUp_Statics::ClassParams = {
		&AAmmoPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmmoPickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmmoPickUp()
	{
		if (!Z_Registration_Info_UClass_AAmmoPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoPickUp.OuterSingleton, Z_Construct_UClass_AAmmoPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAmmoPickUp.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<AAmmoPickUp>()
	{
		return AAmmoPickUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickUp);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_AmmoPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_AmmoPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoPickUp, AAmmoPickUp::StaticClass, TEXT("AAmmoPickUp"), &Z_Registration_Info_UClass_AAmmoPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoPickUp), 2062566036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_AmmoPickUp_h_607720250(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_AmmoPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_AmmoPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
