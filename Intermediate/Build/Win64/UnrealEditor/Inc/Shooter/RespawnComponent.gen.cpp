// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Player/RespawnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_URespawnComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_URespawnComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void URespawnComponent::StaticRegisterNativesURespawnComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URespawnComponent);
	UClass* Z_Construct_UClass_URespawnComponent_NoRegister()
	{
		return URespawnComponent::StaticClass();
	}
	struct Z_Construct_UClass_URespawnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/RespawnComponent.h" },
		{ "ModuleRelativePath", "Public/Player/RespawnComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URespawnComponent_Statics::ClassParams = {
		&URespawnComponent::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_URespawnComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawnComponent()
	{
		if (!Z_Registration_Info_UClass_URespawnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URespawnComponent.OuterSingleton, Z_Construct_UClass_URespawnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URespawnComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<URespawnComponent>()
	{
		return URespawnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawnComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_RespawnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_RespawnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URespawnComponent, URespawnComponent::StaticClass, TEXT("URespawnComponent"), &Z_Registration_Info_UClass_URespawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URespawnComponent), 3373746231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_RespawnComponent_h_3886772976(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_RespawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Player_RespawnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
