// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/FireDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UFireDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UFireDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UFireDamageType::StaticRegisterNativesUFireDamageType()
	{
	}
	UClass* Z_Construct_UClass_UFireDamageType_NoRegister()
	{
		return UFireDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UFireDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/FireDamageType.h" },
		{ "ModuleRelativePath", "Public/Weapon/FireDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireDamageType_Statics::ClassParams = {
		&UFireDamageType::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireDamageType, 3845991688);
	template<> SHOOTER_API UClass* StaticClass<UFireDamageType>()
	{
		return UFireDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireDamageType(Z_Construct_UClass_UFireDamageType, &UFireDamageType::StaticClass, TEXT("/Script/Shooter"), TEXT("UFireDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
