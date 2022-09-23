// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/EnvQueryTest_CanPickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_CanPickUp() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UEnvQueryTest_CanPickUp_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UEnvQueryTest_CanPickUp();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UEnvQueryTest_CanPickUp::StaticRegisterNativesUEnvQueryTest_CanPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_CanPickUp);
	UClass* Z_Construct_UClass_UEnvQueryTest_CanPickUp_NoRegister()
	{
		return UEnvQueryTest_CanPickUp::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/EnvQueryTest_CanPickUp.h" },
		{ "ModuleRelativePath", "Public/AI/EnvQueryTest_CanPickUp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_CanPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics::ClassParams = {
		&UEnvQueryTest_CanPickUp::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_CanPickUp()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_CanPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_CanPickUp.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_CanPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_CanPickUp.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UEnvQueryTest_CanPickUp>()
	{
		return UEnvQueryTest_CanPickUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_CanPickUp);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnvQueryTest_CanPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnvQueryTest_CanPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_CanPickUp, UEnvQueryTest_CanPickUp::StaticClass, TEXT("UEnvQueryTest_CanPickUp"), &Z_Registration_Info_UClass_UEnvQueryTest_CanPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_CanPickUp), 1758854677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnvQueryTest_CanPickUp_h_751537391(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnvQueryTest_CanPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnvQueryTest_CanPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
