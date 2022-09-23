// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Player/ShooterPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterPlayerState() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerState_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AShooterPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void AShooterPlayerState::StaticRegisterNativesAShooterPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterPlayerState);
	UClass* Z_Construct_UClass_AShooterPlayerState_NoRegister()
	{
		return AShooterPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AShooterPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/ShooterPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/ShooterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterPlayerState_Statics::ClassParams = {
		&AShooterPlayerState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterPlayerState()
	{
		if (!Z_Registration_Info_UClass_AShooterPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterPlayerState.OuterSingleton, Z_Construct_UClass_AShooterPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterPlayerState.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<AShooterPlayerState>()
	{
		return AShooterPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterPlayerState);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_ShooterPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_ShooterPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterPlayerState, AShooterPlayerState::StaticClass, TEXT("AShooterPlayerState"), &Z_Registration_Info_UClass_AShooterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterPlayerState), 2068093148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_ShooterPlayerState_h_3601985434(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_ShooterPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_ShooterPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
