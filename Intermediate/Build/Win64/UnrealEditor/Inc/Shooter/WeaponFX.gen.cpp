// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Effects/WeaponFX.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponFX() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UWeaponFX_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UWeaponFX();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactlData();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void UWeaponFX::StaticRegisterNativesUWeaponFX()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponFX);
	UClass* Z_Construct_UClass_UWeaponFX_NoRegister()
	{
		return UWeaponFX::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponFX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultImpactData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactDataMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ImpactDataMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponFX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponFX_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/Effects/WeaponFX.h" },
		{ "ModuleRelativePath", "Public/Weapon/Effects/WeaponFX.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponFX_Statics::NewProp_DefaultImpactData_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Weapon/Effects/WeaponFX.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponFX_Statics::NewProp_DefaultImpactData = { "DefaultImpactData", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponFX, DefaultImpactData), Z_Construct_UScriptStruct_FImpactlData, METADATA_PARAMS(Z_Construct_UClass_UWeaponFX_Statics::NewProp_DefaultImpactData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFX_Statics::NewProp_DefaultImpactData_MetaData)) }; // 2926053325
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap_ValueProp = { "ImpactDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FImpactlData, METADATA_PARAMS(nullptr, 0) }; // 2926053325
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap_Key_KeyProp = { "ImpactDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Weapon/Effects/WeaponFX.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap = { "ImpactDataMap", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponFX, ImpactDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap_MetaData)) }; // 2926053325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponFX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFX_Statics::NewProp_DefaultImpactData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponFX_Statics::NewProp_ImpactDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponFX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponFX>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponFX_Statics::ClassParams = {
		&UWeaponFX::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeaponFX_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFX_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponFX_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponFX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponFX()
	{
		if (!Z_Registration_Info_UClass_UWeaponFX.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponFX.OuterSingleton, Z_Construct_UClass_UWeaponFX_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponFX.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UWeaponFX>()
	{
		return UWeaponFX::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponFX);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Effects_WeaponFX_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Effects_WeaponFX_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponFX, UWeaponFX::StaticClass, TEXT("UWeaponFX"), &Z_Registration_Info_UClass_UWeaponFX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponFX), 2994007013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Effects_WeaponFX_h_1126477584(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Effects_WeaponFX_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Weapon_Effects_WeaponFX_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
