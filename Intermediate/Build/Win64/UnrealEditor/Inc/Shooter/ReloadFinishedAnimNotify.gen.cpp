// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Animations/ReloadFinishedAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadFinishedAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UReloadFinishedAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UReloadFinishedAnimNotify();
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UReloadFinishedAnimNotify::StaticRegisterNativesUReloadFinishedAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReloadFinishedAnimNotify);
	UClass* Z_Construct_UClass_UReloadFinishedAnimNotify_NoRegister()
	{
		return UReloadFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UReloadFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Weapon/Animations/ReloadFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Weapon/Animations/ReloadFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadFinishedAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::ClassParams = {
		&UReloadFinishedAnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReloadFinishedAnimNotify()
	{
		if (!Z_Registration_Info_UClass_UReloadFinishedAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReloadFinishedAnimNotify.OuterSingleton, Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReloadFinishedAnimNotify.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UReloadFinishedAnimNotify>()
	{
		return UReloadFinishedAnimNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadFinishedAnimNotify);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_ReloadFinishedAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_ReloadFinishedAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReloadFinishedAnimNotify, UReloadFinishedAnimNotify::StaticClass, TEXT("UReloadFinishedAnimNotify"), &Z_Registration_Info_UClass_UReloadFinishedAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReloadFinishedAnimNotify), 4182972885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_ReloadFinishedAnimNotify_h_4100263116(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_ReloadFinishedAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Animations_ReloadFinishedAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
