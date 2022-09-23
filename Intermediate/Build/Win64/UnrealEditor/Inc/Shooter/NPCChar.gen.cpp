// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/NPCChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCChar() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ANPCChar_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ANPCChar();
	SHOOTER_API UClass* Z_Construct_UClass_ADefaultChar();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void ANPCChar::StaticRegisterNativesANPCChar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCChar);
	UClass* Z_Construct_UClass_ANPCChar_NoRegister()
	{
		return ANPCChar::StaticClass();
	}
	struct Z_Construct_UClass_ANPCChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultChar,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/NPCChar.h" },
		{ "ModuleRelativePath", "Public/AI/NPCChar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCChar_Statics::NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/NPCChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCChar_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCChar, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCChar_Statics::NewProp_BehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCChar_Statics::NewProp_BehaviorTreeAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCChar_Statics::NewProp_BehaviorTreeAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCChar_Statics::ClassParams = {
		&ANPCChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPCChar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCChar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCChar()
	{
		if (!Z_Registration_Info_UClass_ANPCChar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCChar.OuterSingleton, Z_Construct_UClass_ANPCChar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCChar.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ANPCChar>()
	{
		return ANPCChar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCChar);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCChar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCChar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCChar, ANPCChar::StaticClass, TEXT("ANPCChar"), &Z_Registration_Info_UClass_ANPCChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCChar), 1140874169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCChar_h_3495424732(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
