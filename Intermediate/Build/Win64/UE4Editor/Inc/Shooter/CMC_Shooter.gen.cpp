// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Player/CMC_Shooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMC_Shooter() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UCMC_Shooter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UCMC_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UCMC_Shooter::StaticRegisterNativesUCMC_Shooter()
	{
	}
	UClass* Z_Construct_UClass_UCMC_Shooter_NoRegister()
	{
		return UCMC_Shooter::StaticClass();
	}
	struct Z_Construct_UClass_UCMC_Shooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCMC_Shooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMC_Shooter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/CMC_Shooter.h" },
		{ "ModuleRelativePath", "Public/Player/CMC_Shooter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMC_Shooter_Statics::NewProp_RunModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.5" },
		{ "ModuleRelativePath", "Public/Player/CMC_Shooter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCMC_Shooter_Statics::NewProp_RunModifier = { "RunModifier", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCMC_Shooter, RunModifier), METADATA_PARAMS(Z_Construct_UClass_UCMC_Shooter_Statics::NewProp_RunModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCMC_Shooter_Statics::NewProp_RunModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCMC_Shooter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMC_Shooter_Statics::NewProp_RunModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCMC_Shooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCMC_Shooter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCMC_Shooter_Statics::ClassParams = {
		&UCMC_Shooter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCMC_Shooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCMC_Shooter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCMC_Shooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCMC_Shooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCMC_Shooter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCMC_Shooter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCMC_Shooter, 3827311247);
	template<> SHOOTER_API UClass* StaticClass<UCMC_Shooter>()
	{
		return UCMC_Shooter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCMC_Shooter(Z_Construct_UClass_UCMC_Shooter, &UCMC_Shooter::StaticClass, TEXT("/Script/Shooter"), TEXT("UCMC_Shooter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCMC_Shooter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
