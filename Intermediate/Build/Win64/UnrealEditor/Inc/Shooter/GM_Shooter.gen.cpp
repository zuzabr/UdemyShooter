// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/GM_Shooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Shooter() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AGM_Shooter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AGM_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void AGM_Shooter::StaticRegisterNativesAGM_Shooter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGM_Shooter);
	UClass* Z_Construct_UClass_AGM_Shooter_NoRegister()
	{
		return AGM_Shooter::StaticClass();
	}
	struct Z_Construct_UClass_AGM_Shooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_Shooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Shooter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_Shooter.h" },
		{ "ModuleRelativePath", "Public/GM_Shooter.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_Shooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Shooter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_Shooter_Statics::ClassParams = {
		&AGM_Shooter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGM_Shooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Shooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_Shooter()
	{
		if (!Z_Registration_Info_UClass_AGM_Shooter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_Shooter.OuterSingleton, Z_Construct_UClass_AGM_Shooter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGM_Shooter.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<AGM_Shooter>()
	{
		return AGM_Shooter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Shooter);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGM_Shooter, AGM_Shooter::StaticClass, TEXT("AGM_Shooter"), &Z_Registration_Info_UClass_AGM_Shooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_Shooter), 545078766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_3281170983(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
