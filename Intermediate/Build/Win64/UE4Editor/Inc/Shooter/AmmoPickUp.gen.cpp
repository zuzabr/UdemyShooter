// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/PickUps/AmmoPickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_AAmmoPickUp_NoRegister()
	{
		return AAmmoPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipsAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipsAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUps/AmmoPickUp.h" },
		{ "ModuleRelativePath", "Public/PickUps/AmmoPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PickUps/AmmoPickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount = { "ClipsAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickUp, ClipsAmount), METADATA_PARAMS(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "ModuleRelativePath", "Public/PickUps/AmmoPickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickUp, WeaponType), Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_ClipsAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickUp_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmmoPickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmmoPickUp, 3597260851);
	template<> SHOOTER_API UClass* StaticClass<AAmmoPickUp>()
	{
		return AAmmoPickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmmoPickUp(Z_Construct_UClass_AAmmoPickUp, &AAmmoPickUp::StaticClass, TEXT("/Script/Shooter"), TEXT("AAmmoPickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
