// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Animations/DefaultAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UDefaultAnimNotify::StaticRegisterNativesUDefaultAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UDefaultAnimNotify_NoRegister()
	{
		return UDefaultAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ??? ???????? ??????????\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Weapon/Animations/DefaultAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Weapon/Animations/DefaultAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultAnimNotify_Statics::ClassParams = {
		&UDefaultAnimNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultAnimNotify, 4261526508);
	template<> SHOOTER_API UClass* StaticClass<UDefaultAnimNotify>()
	{
		return UDefaultAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultAnimNotify(Z_Construct_UClass_UDefaultAnimNotify, &UDefaultAnimNotify::StaticClass, TEXT("/Script/Shooter"), TEXT("UDefaultAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
