// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Menu/MenuPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuPlayerController() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AMenuPlayerController_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AMenuPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void AMenuPlayerController::StaticRegisterNativesAMenuPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMenuPlayerController);
	UClass* Z_Construct_UClass_AMenuPlayerController_NoRegister()
	{
		return AMenuPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMenuPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Menu/MenuPlayerController.h" },
		{ "ModuleRelativePath", "Public/Menu/MenuPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuPlayerController_Statics::ClassParams = {
		&AMenuPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMenuPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMenuPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuPlayerController.OuterSingleton, Z_Construct_UClass_AMenuPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMenuPlayerController.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<AMenuPlayerController>()
	{
		return AMenuPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuPlayerController);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMenuPlayerController, AMenuPlayerController::StaticClass, TEXT("AMenuPlayerController"), &Z_Registration_Info_UClass_AMenuPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuPlayerController), 1945759955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuPlayerController_h_1693078055(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
