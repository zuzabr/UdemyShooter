// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Animations/ReloadFinishedAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadFinishedAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UReloadFinishedAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UReloadFinishedAnimNotify();
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UReloadFinishedAnimNotify::StaticRegisterNativesUReloadFinishedAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UReloadFinishedAnimNotify_NoRegister()
	{
		return UReloadFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UReloadFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Weapon/Animations/ReloadFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Weapon/Animations/ReloadFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadFinishedAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::ClassParams = {
		&UReloadFinishedAnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReloadFinishedAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReloadFinishedAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReloadFinishedAnimNotify, 1258621593);
	template<> SHOOTER_API UClass* StaticClass<UReloadFinishedAnimNotify>()
	{
		return UReloadFinishedAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReloadFinishedAnimNotify(Z_Construct_UClass_UReloadFinishedAnimNotify, &UReloadFinishedAnimNotify::StaticClass, TEXT("/Script/Shooter"), TEXT("UReloadFinishedAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadFinishedAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
