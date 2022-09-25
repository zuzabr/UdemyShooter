// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/DefaultHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultHUD() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ADefaultHUD_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ADefaultHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SHOOTER_API UEnum* Z_Construct_UEnum_Shooter_EMatchState();
// End Cross Module References
	void ADefaultHUD::StaticRegisterNativesADefaultHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultHUD);
	UClass* Z_Construct_UClass_ADefaultHUD_NoRegister()
	{
		return ADefaultHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PauseWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameWidgets_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameWidgets_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GameWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/DefaultHUD.h" },
		{ "ModuleRelativePath", "Public/UI/DefaultHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PlayerHUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PlayerHUDWidgetClass = { "PlayerHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultHUD, PlayerHUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PlayerHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PlayerHUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PauseWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PauseWidgetClass = { "PauseWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultHUD, PauseWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PauseWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PauseWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultHUD, GameOverWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameOverWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameOverWidgetClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_ValueProp = { "GameWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_Key_KeyProp = { "GameWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Shooter_EMatchState, METADATA_PARAMS(nullptr, 0) }; // 4228247019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets = { "GameWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultHUD, GameWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_MetaData)) }; // 4228247019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultHUD_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DefaultHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefaultHUD_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultHUD, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::NewProp_CurrentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PlayerHUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_PauseWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameOverWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_GameWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultHUD_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultHUD_Statics::ClassParams = {
		&ADefaultHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefaultHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultHUD()
	{
		if (!Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton, Z_Construct_UClass_ADefaultHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultHUD.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ADefaultHUD>()
	{
		return ADefaultHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultHUD);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultHUD, ADefaultHUD::StaticClass, TEXT("ADefaultHUD"), &Z_Registration_Info_UClass_ADefaultHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultHUD), 3199645545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_2675717617(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_DefaultHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
