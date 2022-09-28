// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Menu/GMMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMMenu() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AGMMenu_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AGMMenu();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void AGMMenu::StaticRegisterNativesAGMMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMMenu);
	UClass* Z_Construct_UClass_AGMMenu_NoRegister()
	{
		return AGMMenu::StaticClass();
	}
	struct Z_Construct_UClass_AGMMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMMenu_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Menu/GMMenu.h" },
		{ "ModuleRelativePath", "Public/Menu/GMMenu.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMMenu_Statics::ClassParams = {
		&AGMMenu::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGMMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMMenu()
	{
		if (!Z_Registration_Info_UClass_AGMMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMMenu.OuterSingleton, Z_Construct_UClass_AGMMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGMMenu.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<AGMMenu>()
	{
		return AGMMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMMenu);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_GMMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_GMMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGMMenu, AGMMenu::StaticClass, TEXT("AGMMenu"), &Z_Registration_Info_UClass_AGMMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMMenu), 2795088050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_GMMenu_h_3986228976(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_GMMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_GMMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
