// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/AmmoAmountDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoAmountDecorator() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UAmmoAmountDecorator_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UAmmoAmountDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
// End Cross Module References
	void UAmmoAmountDecorator::StaticRegisterNativesUAmmoAmountDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmmoAmountDecorator);
	UClass* Z_Construct_UClass_UAmmoAmountDecorator_NoRegister()
	{
		return UAmmoAmountDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UAmmoAmountDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmmoAmountDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoAmountDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AmmoAmountDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/AmmoAmountDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoAmountDecorator_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/AmmoAmountDecorator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAmmoAmountDecorator_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmmoAmountDecorator, WeaponType), Z_Construct_UClass_ABaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAmmoAmountDecorator_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoAmountDecorator_Statics::NewProp_WeaponType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmmoAmountDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoAmountDecorator_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmmoAmountDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoAmountDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmmoAmountDecorator_Statics::ClassParams = {
		&UAmmoAmountDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAmmoAmountDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoAmountDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAmmoAmountDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoAmountDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmmoAmountDecorator()
	{
		if (!Z_Registration_Info_UClass_UAmmoAmountDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmmoAmountDecorator.OuterSingleton, Z_Construct_UClass_UAmmoAmountDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAmmoAmountDecorator.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UAmmoAmountDecorator>()
	{
		return UAmmoAmountDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoAmountDecorator);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_AmmoAmountDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_AmmoAmountDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAmmoAmountDecorator, UAmmoAmountDecorator::StaticClass, TEXT("UAmmoAmountDecorator"), &Z_Registration_Info_UClass_UAmmoAmountDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmmoAmountDecorator), 2258040002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_AmmoAmountDecorator_h_4038547013(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_AmmoAmountDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_AmmoAmountDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
