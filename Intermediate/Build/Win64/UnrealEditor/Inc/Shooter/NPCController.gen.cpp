// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/NPCController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCController() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ANPCController_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ANPCController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UClass* Z_Construct_UClass_UNPCPerceptionComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_URespawnComponent_NoRegister();
// End Cross Module References
	void ANPCController::StaticRegisterNativesANPCController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCController);
	UClass* Z_Construct_UClass_ANPCController_NoRegister()
	{
		return ANPCController::StaticClass();
	}
	struct Z_Construct_UClass_ANPCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCPerceptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RespawnComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusOnKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FocusOnKeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/NPCController.h" },
		{ "ModuleRelativePath", "Public/AI/NPCController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::NewProp_NPCPerceptionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/NPCController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCController_Statics::NewProp_NPCPerceptionComponent = { "NPCPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCController, NPCPerceptionComponent), Z_Construct_UClass_UNPCPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::NewProp_NPCPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::NewProp_NPCPerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::NewProp_RespawnComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/NPCController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCController_Statics::NewProp_RespawnComponent = { "RespawnComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCController, RespawnComponent), Z_Construct_UClass_URespawnComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::NewProp_RespawnComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::NewProp_RespawnComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCController_Statics::NewProp_FocusOnKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/NPCController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANPCController_Statics::NewProp_FocusOnKeyName = { "FocusOnKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCController, FocusOnKeyName), METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::NewProp_FocusOnKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::NewProp_FocusOnKeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCController_Statics::NewProp_NPCPerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCController_Statics::NewProp_RespawnComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCController_Statics::NewProp_FocusOnKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCController_Statics::ClassParams = {
		&ANPCController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPCController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCController()
	{
		if (!Z_Registration_Info_UClass_ANPCController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCController.OuterSingleton, Z_Construct_UClass_ANPCController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCController.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ANPCController>()
	{
		return ANPCController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCController);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCController, ANPCController::StaticClass, TEXT("ANPCController"), &Z_Registration_Info_UClass_ANPCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCController), 2628229292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCController_h_1863360322(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_AI_NPCController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
