// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/ShooterGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameInstance() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UShooterGameInstance_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UShooterGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelData();
// End Cross Module References
	void UShooterGameInstance::StaticRegisterNativesUShooterGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterGameInstance);
	UClass* Z_Construct_UClass_UShooterGameInstance_NoRegister()
	{
		return UShooterGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UShooterGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelsData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuLvlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuLvlName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShooterGameInstance.h" },
		{ "ModuleRelativePath", "Public/ShooterGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_LevelsData_Inner = { "LevelsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelData, METADATA_PARAMS(nullptr, 0) }; // 4218461971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_LevelsData_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShooterGameInstance.h" },
		{ "ToolTip", "Levels names must be unique" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_LevelsData = { "LevelsData", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameInstance, LevelsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_LevelsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_LevelsData_MetaData)) }; // 4218461971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_MenuLvlName_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/ShooterGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_MenuLvlName = { "MenuLvlName", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterGameInstance, MenuLvlName), METADATA_PARAMS(Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_MenuLvlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_MenuLvlName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_LevelsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_LevelsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterGameInstance_Statics::NewProp_MenuLvlName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterGameInstance_Statics::ClassParams = {
		&UShooterGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterGameInstance()
	{
		if (!Z_Registration_Info_UClass_UShooterGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterGameInstance.OuterSingleton, Z_Construct_UClass_UShooterGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShooterGameInstance.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UShooterGameInstance>()
	{
		return UShooterGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterGameInstance);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShooterGameInstance, UShooterGameInstance::StaticClass, TEXT("UShooterGameInstance"), &Z_Registration_Info_UClass_UShooterGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterGameInstance), 2676295605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterGameInstance_h_2102835836(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_ShooterGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
