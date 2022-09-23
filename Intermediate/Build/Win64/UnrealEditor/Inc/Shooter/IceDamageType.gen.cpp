// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/IceDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UIceDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UIceDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UIceDamageType::StaticRegisterNativesUIceDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIceDamageType);
	UClass* Z_Construct_UClass_UIceDamageType_NoRegister()
	{
		return UIceDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UIceDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIceDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/IceDamageType.h" },
		{ "ModuleRelativePath", "Public/Weapon/IceDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIceDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIceDamageType_Statics::ClassParams = {
		&UIceDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIceDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIceDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIceDamageType()
	{
		if (!Z_Registration_Info_UClass_UIceDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIceDamageType.OuterSingleton, Z_Construct_UClass_UIceDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIceDamageType.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UIceDamageType>()
	{
		return UIceDamageType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIceDamageType);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_IceDamageType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_IceDamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIceDamageType, UIceDamageType::StaticClass, TEXT("UIceDamageType"), &Z_Registration_Info_UClass_UIceDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIceDamageType), 266138442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_IceDamageType_h_374019136(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_IceDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_IceDamageType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
