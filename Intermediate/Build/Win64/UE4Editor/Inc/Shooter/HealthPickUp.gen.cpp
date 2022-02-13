// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/PickUps/HealthPickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_AHealthPickUp_NoRegister()
	{
		return AHealthPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUps/HealthPickUp.h" },
		{ "ModuleRelativePath", "Public/PickUps/HealthPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount_MetaData[] = {
		{ "Category", "PickupInfo" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PickUps/HealthPickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthPickUp, HealthAmount), METADATA_PARAMS(Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealthAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickUp_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthPickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthPickUp, 1209294711);
	template<> SHOOTER_API UClass* StaticClass<AHealthPickUp>()
	{
		return AHealthPickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthPickUp(Z_Construct_UClass_AHealthPickUp, &AHealthPickUp::StaticClass, TEXT("/Script/Shooter"), TEXT("AHealthPickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
