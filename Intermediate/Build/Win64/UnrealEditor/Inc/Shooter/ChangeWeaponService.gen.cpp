// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/ChangeWeaponService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeWeaponService() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UChangeWeaponService_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UChangeWeaponService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UChangeWeaponService::StaticRegisterNativesUChangeWeaponService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChangeWeaponService);
	UClass* Z_Construct_UClass_UChangeWeaponService_NoRegister()
	{
		return UChangeWeaponService::StaticClass();
	}
	struct Z_Construct_UClass_UChangeWeaponService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChangeWeaponService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeWeaponService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/ChangeWeaponService.h" },
		{ "ModuleRelativePath", "Public/AI/ChangeWeaponService.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChangeWeaponService_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "AI" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/AI/ChangeWeaponService.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChangeWeaponService_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChangeWeaponService, Probability), METADATA_PARAMS(Z_Construct_UClass_UChangeWeaponService_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeWeaponService_Statics::NewProp_Probability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChangeWeaponService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChangeWeaponService_Statics::NewProp_Probability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChangeWeaponService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChangeWeaponService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChangeWeaponService_Statics::ClassParams = {
		&UChangeWeaponService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChangeWeaponService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChangeWeaponService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChangeWeaponService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChangeWeaponService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChangeWeaponService()
	{
		if (!Z_Registration_Info_UClass_UChangeWeaponService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChangeWeaponService.OuterSingleton, Z_Construct_UClass_UChangeWeaponService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChangeWeaponService.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UChangeWeaponService>()
	{
		return UChangeWeaponService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChangeWeaponService);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_ChangeWeaponService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_ChangeWeaponService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChangeWeaponService, UChangeWeaponService::StaticClass, TEXT("UChangeWeaponService"), &Z_Registration_Info_UClass_UChangeWeaponService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChangeWeaponService), 1157032041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_ChangeWeaponService_h_1989629907(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_ChangeWeaponService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_ChangeWeaponService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
