// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/DefaultHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultHUD() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ADefaultHUD_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ADefaultHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ADefaultHUD::StaticRegisterNativesADefaultHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultHUD);
	UClass* Z_Construct_UClass_ADefaultHUD_NoRegister()
	{
		return ADefaultHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/DefaultHUD.h" },
		{ "ModuleRelativePath", "Public/UI/DefaultHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultHUD_Statics::ClassParams = {
		&ADefaultHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultHUD()
	{
		if (!Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton, Z_Construct_UClass_ADefaultHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ADefaultHUD>()
	{
		return ADefaultHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultHUD);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultHUD, ADefaultHUD::StaticClass, TEXT("ADefaultHUD"), &Z_Registration_Info_UClass_ADefaultHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultHUD), 1429099361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_301587333(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
