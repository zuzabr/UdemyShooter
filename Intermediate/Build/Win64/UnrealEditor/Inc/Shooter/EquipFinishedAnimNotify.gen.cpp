// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Animations/EquipFinishedAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipFinishedAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UEquipFinishedAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UEquipFinishedAnimNotify();
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UEquipFinishedAnimNotify::StaticRegisterNativesUEquipFinishedAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipFinishedAnimNotify);
	UClass* Z_Construct_UClass_UEquipFinishedAnimNotify_NoRegister()
	{
		return UEquipFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UEquipFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Weapon/Animations/EquipFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Weapon/Animations/EquipFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipFinishedAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::ClassParams = {
		&UEquipFinishedAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipFinishedAnimNotify()
	{
		if (!Z_Registration_Info_UClass_UEquipFinishedAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipFinishedAnimNotify.OuterSingleton, Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEquipFinishedAnimNotify.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UEquipFinishedAnimNotify>()
	{
		return UEquipFinishedAnimNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipFinishedAnimNotify);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_EquipFinishedAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_EquipFinishedAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEquipFinishedAnimNotify, UEquipFinishedAnimNotify::StaticClass, TEXT("UEquipFinishedAnimNotify"), &Z_Registration_Info_UClass_UEquipFinishedAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipFinishedAnimNotify), 2483559282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_EquipFinishedAnimNotify_h_2719170632(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_EquipFinishedAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_EquipFinishedAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
