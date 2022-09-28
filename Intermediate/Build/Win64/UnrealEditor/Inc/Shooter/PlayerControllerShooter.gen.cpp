// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Player/PlayerControllerShooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerShooter() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_APlayerControllerShooter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_APlayerControllerShooter();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UClass* Z_Construct_UClass_URespawnComponent_NoRegister();
// End Cross Module References
	void APlayerControllerShooter::StaticRegisterNativesAPlayerControllerShooter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerControllerShooter);
	UClass* Z_Construct_UClass_APlayerControllerShooter_NoRegister()
	{
		return APlayerControllerShooter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerControllerShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RespawnComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerControllerShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerShooter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/PlayerControllerShooter.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerControllerShooter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerControllerShooter_Statics::NewProp_RespawnComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/PlayerControllerShooter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerShooter_Statics::NewProp_RespawnComponent = { "RespawnComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerControllerShooter, RespawnComponent), Z_Construct_UClass_URespawnComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerControllerShooter_Statics::NewProp_RespawnComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerShooter_Statics::NewProp_RespawnComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerControllerShooter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerShooter_Statics::NewProp_RespawnComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerControllerShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerShooter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerShooter_Statics::ClassParams = {
		&APlayerControllerShooter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerControllerShooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerShooter_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerControllerShooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerShooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerControllerShooter()
	{
		if (!Z_Registration_Info_UClass_APlayerControllerShooter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerControllerShooter.OuterSingleton, Z_Construct_UClass_APlayerControllerShooter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerControllerShooter.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<APlayerControllerShooter>()
	{
		return APlayerControllerShooter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerShooter);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_PlayerControllerShooter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_PlayerControllerShooter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerControllerShooter, APlayerControllerShooter::StaticClass, TEXT("APlayerControllerShooter"), &Z_Registration_Info_UClass_APlayerControllerShooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerControllerShooter), 3142092354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_PlayerControllerShooter_h_803270008(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_PlayerControllerShooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_PlayerControllerShooter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
