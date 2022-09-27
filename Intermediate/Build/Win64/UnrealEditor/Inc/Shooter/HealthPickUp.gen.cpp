// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/PickUps/HealthPickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPickUp() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_AHealthPickUp_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_AHealthPickUp();
	SHOOTER_API UClass* Z_Construct_UClass_ABasePickUp();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void AHealthPickUp::StaticRegisterNativesAHealthPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPickUp);
	UClass* Z_Construct_UClass_AHealthPickUp_NoRegister()
	{
		return AHealthPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUps/HealthPickUp.h" },
		{ "ModuleRelativePath", "Public/PickUps/HealthPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PickUps/HealthPickUp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthPickUp, HealthAmount), METADATA_PARAMS(Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickUp_Statics::ClassParams = {
		&AHealthPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthPickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHealthPickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthPickUp()
	{
		if (!Z_Registration_Info_UClass_AHealthPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPickUp.OuterSingleton, Z_Construct_UClass_AHealthPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthPickUp.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<AHealthPickUp>()
	{
		return AHealthPickUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickUp);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_HealthPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_HealthPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPickUp, AHealthPickUp::StaticClass, TEXT("AHealthPickUp"), &Z_Registration_Info_UClass_AHealthPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPickUp), 1351642556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_HealthPickUp_h_3951251885(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_HealthPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_PickUps_HealthPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
