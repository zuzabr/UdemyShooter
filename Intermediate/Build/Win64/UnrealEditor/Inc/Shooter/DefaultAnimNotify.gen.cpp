// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Animations/DefaultAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UDefaultAnimNotify::StaticRegisterNativesUDefaultAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultAnimNotify);
	UClass* Z_Construct_UClass_UDefaultAnimNotify_NoRegister()
	{
		return UDefaultAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Weapon/Animations/DefaultAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Weapon/Animations/DefaultAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultAnimNotify_Statics::ClassParams = {
		&UDefaultAnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDefaultAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultAnimNotify()
	{
		if (!Z_Registration_Info_UClass_UDefaultAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultAnimNotify.OuterSingleton, Z_Construct_UClass_UDefaultAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultAnimNotify.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UDefaultAnimNotify>()
	{
		return UDefaultAnimNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultAnimNotify);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_DefaultAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_DefaultAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultAnimNotify, UDefaultAnimNotify::StaticClass, TEXT("UDefaultAnimNotify"), &Z_Registration_Info_UClass_UDefaultAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultAnimNotify), 146219154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_DefaultAnimNotify_h_3271945035(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_DefaultAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_DefaultAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
