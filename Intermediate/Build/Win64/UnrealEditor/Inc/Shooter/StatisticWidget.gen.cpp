// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/StatisticWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatisticWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UStatisticWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UStatisticWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UStatisticWidget::StaticRegisterNativesUStatisticWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatisticWidget);
	UClass* Z_Construct_UClass_UStatisticWidget_NoRegister()
	{
		return UStatisticWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStatisticWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerNameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillsText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KillsText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathsText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathsText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeamText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatisticWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/StatisticWidget.h" },
		{ "ModuleRelativePath", "Public/UI/StatisticWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatisticWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatisticWidget, PlayerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticWidget_Statics::NewProp_KillsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatisticWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatisticWidget_Statics::NewProp_KillsText = { "KillsText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatisticWidget, KillsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_KillsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_KillsText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticWidget_Statics::NewProp_DeathsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatisticWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatisticWidget_Statics::NewProp_DeathsText = { "DeathsText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatisticWidget, DeathsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_DeathsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_DeathsText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticWidget_Statics::NewProp_TeamText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatisticWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatisticWidget_Statics::NewProp_TeamText = { "TeamText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatisticWidget, TeamText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_TeamText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_TeamText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatisticWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerImage = { "PlayerImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatisticWidget, PlayerImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatisticWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatisticWidget_Statics::NewProp_KillsText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatisticWidget_Statics::NewProp_DeathsText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatisticWidget_Statics::NewProp_TeamText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatisticWidget_Statics::NewProp_PlayerImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatisticWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatisticWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatisticWidget_Statics::ClassParams = {
		&UStatisticWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatisticWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStatisticWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatisticWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatisticWidget()
	{
		if (!Z_Registration_Info_UClass_UStatisticWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatisticWidget.OuterSingleton, Z_Construct_UClass_UStatisticWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatisticWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UStatisticWidget>()
	{
		return UStatisticWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatisticWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_StatisticWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_StatisticWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatisticWidget, UStatisticWidget::StaticClass, TEXT("UStatisticWidget"), &Z_Registration_Info_UClass_UStatisticWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatisticWidget), 4149780444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_StatisticWidget_h_4258142849(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_StatisticWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_StatisticWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
