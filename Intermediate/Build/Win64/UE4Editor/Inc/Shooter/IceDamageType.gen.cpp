// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/IceDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UIceDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UIceDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UIceDamageType::StaticRegisterNativesUIceDamageType()
	{
	}
	UClass* Z_Construct_UClass_UIceDamageType_NoRegister()
	{
		return UIceDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UIceDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIceDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/IceDamageType.h" },
		{ "ModuleRelativePath", "Public/Weapon/IceDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIceDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIceDamageType_Statics::ClassParams = {
		&UIceDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIceDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIceDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIceDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIceDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIceDamageType, 2410536751);
	template<> SHOOTER_API UClass* StaticClass<UIceDamageType>()
	{
		return UIceDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIceDamageType(Z_Construct_UClass_UIceDamageType, &UIceDamageType::StaticClass, TEXT("/Script/Shooter"), TEXT("UIceDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIceDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
