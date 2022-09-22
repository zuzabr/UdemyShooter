// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/FindEnemyService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindEnemyService() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UFindEnemyService_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UFindEnemyService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UFindEnemyService::StaticRegisterNativesUFindEnemyService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindEnemyService);
	UClass* Z_Construct_UClass_UFindEnemyService_NoRegister()
	{
		return UFindEnemyService::StaticClass();
	}
	struct Z_Construct_UClass_UFindEnemyService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindEnemyService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindEnemyService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/FindEnemyService.h" },
		{ "ModuleRelativePath", "Public/AI/FindEnemyService.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/FindEnemyService.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFindEnemyService_Statics::NewProp_EnemyActorKey = { "EnemyActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindEnemyService, EnemyActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData)) }; // 454597379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindEnemyService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindEnemyService_Statics::NewProp_EnemyActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindEnemyService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindEnemyService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindEnemyService_Statics::ClassParams = {
		&UFindEnemyService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindEnemyService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindEnemyService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindEnemyService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindEnemyService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindEnemyService()
	{
		if (!Z_Registration_Info_UClass_UFindEnemyService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindEnemyService.OuterSingleton, Z_Construct_UClass_UFindEnemyService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFindEnemyService.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UFindEnemyService>()
	{
		return UFindEnemyService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindEnemyService);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_FindEnemyService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_FindEnemyService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFindEnemyService, UFindEnemyService::StaticClass, TEXT("UFindEnemyService"), &Z_Registration_Info_UClass_UFindEnemyService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindEnemyService), 4088979536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_FindEnemyService_h_951191754(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_FindEnemyService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_FindEnemyService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
