// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/EnemyEnvQueryContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyEnvQueryContext() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UEnemyEnvQueryContext_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UEnemyEnvQueryContext();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UEnemyEnvQueryContext::StaticRegisterNativesUEnemyEnvQueryContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyEnvQueryContext);
	UClass* Z_Construct_UClass_UEnemyEnvQueryContext_NoRegister()
	{
		return UEnemyEnvQueryContext::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyEnvQueryContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyActorKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyActorKeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyEnvQueryContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyEnvQueryContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/EnemyEnvQueryContext.h" },
		{ "ModuleRelativePath", "Public/AI/EnemyEnvQueryContext.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/EnemyEnvQueryContext.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName = { "EnemyActorKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyEnvQueryContext, EnemyActorKeyName), METADATA_PARAMS(Z_Construct_UClass_UEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyEnvQueryContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyEnvQueryContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyEnvQueryContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyEnvQueryContext_Statics::ClassParams = {
		&UEnemyEnvQueryContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyEnvQueryContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyEnvQueryContext_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyEnvQueryContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyEnvQueryContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyEnvQueryContext()
	{
		if (!Z_Registration_Info_UClass_UEnemyEnvQueryContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyEnvQueryContext.OuterSingleton, Z_Construct_UClass_UEnemyEnvQueryContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyEnvQueryContext.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UEnemyEnvQueryContext>()
	{
		return UEnemyEnvQueryContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyEnvQueryContext);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnemyEnvQueryContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnemyEnvQueryContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyEnvQueryContext, UEnemyEnvQueryContext::StaticClass, TEXT("UEnemyEnvQueryContext"), &Z_Registration_Info_UClass_UEnemyEnvQueryContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyEnvQueryContext), 3421777380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnemyEnvQueryContext_h_4106687571(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnemyEnvQueryContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_EnemyEnvQueryContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
