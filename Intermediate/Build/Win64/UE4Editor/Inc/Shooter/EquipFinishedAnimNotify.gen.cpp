// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Animations/EquipFinishedAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipFinishedAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UEquipFinishedAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UEquipFinishedAnimNotify();
	SHOOTER_API UClass* Z_Construct_UClass_UDefaultAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UEquipFinishedAnimNotify::StaticRegisterNativesUEquipFinishedAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UEquipFinishedAnimNotify_NoRegister()
	{
		return UEquipFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UEquipFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Weapon/Animations/EquipFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Weapon/Animations/EquipFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipFinishedAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::ClassParams = {
		&UEquipFinishedAnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipFinishedAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipFinishedAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipFinishedAnimNotify, 2389066204);
	template<> SHOOTER_API UClass* StaticClass<UEquipFinishedAnimNotify>()
	{
		return UEquipFinishedAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipFinishedAnimNotify(Z_Construct_UClass_UEquipFinishedAnimNotify, &UEquipFinishedAnimNotify::StaticClass, TEXT("/Script/Shooter"), TEXT("UEquipFinishedAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipFinishedAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
