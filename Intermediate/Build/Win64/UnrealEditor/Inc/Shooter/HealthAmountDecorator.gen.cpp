// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/HealthAmountDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthAmountDecorator() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UHealthAmountDecorator_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UHealthAmountDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UHealthAmountDecorator::StaticRegisterNativesUHealthAmountDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthAmountDecorator);
	UClass* Z_Construct_UClass_UHealthAmountDecorator_NoRegister()
	{
		return UHealthAmountDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UHealthAmountDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthAmountDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthAmountDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/HealthAmountDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/HealthAmountDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthAmountDecorator_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/HealthAmountDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthAmountDecorator_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthAmountDecorator, HealthPercent), METADATA_PARAMS(Z_Construct_UClass_UHealthAmountDecorator_Statics::NewProp_HealthPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAmountDecorator_Statics::NewProp_HealthPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthAmountDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthAmountDecorator_Statics::NewProp_HealthPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthAmountDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthAmountDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthAmountDecorator_Statics::ClassParams = {
		&UHealthAmountDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthAmountDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAmountDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthAmountDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthAmountDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthAmountDecorator()
	{
		if (!Z_Registration_Info_UClass_UHealthAmountDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthAmountDecorator.OuterSingleton, Z_Construct_UClass_UHealthAmountDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthAmountDecorator.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UHealthAmountDecorator>()
	{
		return UHealthAmountDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthAmountDecorator);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_HealthAmountDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_HealthAmountDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthAmountDecorator, UHealthAmountDecorator::StaticClass, TEXT("UHealthAmountDecorator"), &Z_Registration_Info_UClass_UHealthAmountDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthAmountDecorator), 40498106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_HealthAmountDecorator_h_1135079424(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_HealthAmountDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_HealthAmountDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
