// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/PickUps/BasePickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePickUp() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ABasePickUp_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ABasePickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ABasePickUp::StaticRegisterNativesABasePickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePickUp);
	UClass* Z_Construct_UClass_ABasePickUp_NoRegister()
	{
		return ABasePickUp::StaticClass();
	}
	struct Z_Construct_UClass_ABasePickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUps/BasePickUp.h" },
		{ "ModuleRelativePath", "Public/PickUps/BasePickUp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickUp_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "Comment", "//------------------------Variables------------------------\x09\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUps/BasePickUp.h" },
		{ "ToolTip", "------------------------Variables------------------------" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePickUp_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePickUp, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePickUp_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickUp_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePickUp_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "ModuleRelativePath", "Public/PickUps/BasePickUp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePickUp_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePickUp, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_ABasePickUp_Statics::NewProp_RespawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickUp_Statics::NewProp_RespawnTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePickUp_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePickUp_Statics::NewProp_RespawnTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePickUp_Statics::ClassParams = {
		&ABasePickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasePickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePickUp()
	{
		if (!Z_Registration_Info_UClass_ABasePickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePickUp.OuterSingleton, Z_Construct_UClass_ABasePickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasePickUp.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ABasePickUp>()
	{
		return ABasePickUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePickUp);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_BasePickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_BasePickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasePickUp, ABasePickUp::StaticClass, TEXT("ABasePickUp"), &Z_Registration_Info_UClass_ABasePickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePickUp), 3039672586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_BasePickUp_h_332154181(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_BasePickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_BasePickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
