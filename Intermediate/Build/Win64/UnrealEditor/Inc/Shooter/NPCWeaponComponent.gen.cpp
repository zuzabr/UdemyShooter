// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/NPCWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCWeaponComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UNPCWeaponComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UNPCWeaponComponent();
	SHOOTER_API UClass* Z_Construct_UClass_UWeaponComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UNPCWeaponComponent::StaticRegisterNativesUNPCWeaponComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCWeaponComponent);
	UClass* Z_Construct_UClass_UNPCWeaponComponent_NoRegister()
	{
		return UNPCWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNPCWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/NPCWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/NPCWeaponComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCWeaponComponent_Statics::ClassParams = {
		&UNPCWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UNPCWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCWeaponComponent.OuterSingleton, Z_Construct_UClass_UNPCWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCWeaponComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UNPCWeaponComponent>()
	{
		return UNPCWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCWeaponComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_NPCWeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_NPCWeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCWeaponComponent, UNPCWeaponComponent::StaticClass, TEXT("UNPCWeaponComponent"), &Z_Registration_Info_UClass_UNPCWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCWeaponComponent), 620077842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_NPCWeaponComponent_h_3469658780(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_NPCWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_NPCWeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
