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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AIControllerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AIPawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_Shooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Shooter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_Shooter.h" },
		{ "ModuleRelativePath", "Public/GM_Shooter.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIControllerClass_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/GM_Shooter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIControllerClass = { "AIControllerClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Shooter, AIControllerClass), Z_Construct_UClass_AAIController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIControllerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIPawnClass_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/GM_Shooter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIPawnClass = { "AIPawnClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Shooter, AIPawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIPawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Shooter_Statics::NewProp_GameData_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/GM_Shooter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGM_Shooter_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Shooter, GameData), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(Z_Construct_UClass_AGM_Shooter_Statics::NewProp_GameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Shooter_Statics::NewProp_GameData_MetaData)) }; // 1238543316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_Shooter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Shooter_Statics::NewProp_AIPawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Shooter_Statics::NewProp_GameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_Shooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Shooter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_Shooter_Statics::ClassParams = {
		&AGM_Shooter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGM_Shooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Shooter_Statics::PropPointers),
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
		{ Z_Construct_UClass_AGM_Shooter, AGM_Shooter::StaticClass, TEXT("AGM_Shooter"), &Z_Registration_Info_UClass_AGM_Shooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_Shooter), 1672071270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_4266345770(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
