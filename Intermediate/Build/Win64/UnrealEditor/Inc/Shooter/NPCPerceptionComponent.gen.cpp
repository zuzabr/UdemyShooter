// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/NPCPerceptionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCPerceptionComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UNPCPerceptionComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UNPCPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UNPCPerceptionComponent::StaticRegisterNativesUNPCPerceptionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCPerceptionComponent);
	UClass* Z_Construct_UClass_UNPCPerceptionComponent_NoRegister()
	{
		return UNPCPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNPCPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "AI/NPCPerceptionComponent.h" },
		{ "ModuleRelativePath", "Public/AI/NPCPerceptionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCPerceptionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCPerceptionComponent_Statics::ClassParams = {
		&UNPCPerceptionComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNPCPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNPCPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNPCPerceptionComponent()
	{
		if (!Z_Registration_Info_UClass_UNPCPerceptionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCPerceptionComponent.OuterSingleton, Z_Construct_UClass_UNPCPerceptionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCPerceptionComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UNPCPerceptionComponent>()
	{
		return UNPCPerceptionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCPerceptionComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCPerceptionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCPerceptionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCPerceptionComponent, UNPCPerceptionComponent::StaticClass, TEXT("UNPCPerceptionComponent"), &Z_Registration_Info_UClass_UNPCPerceptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCPerceptionComponent), 2454187522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCPerceptionComponent_h_390965669(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCPerceptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCPerceptionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
