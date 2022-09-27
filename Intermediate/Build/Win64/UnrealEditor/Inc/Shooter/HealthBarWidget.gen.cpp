// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/HealthBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBarWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UHealthBarWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UHealthBarWidget::StaticRegisterNativesUHealthBarWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBarWidget);
	UClass* Z_Construct_UClass_UHealthBarWidget_NoRegister()
	{
		return UHealthBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHealthBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentVisibilityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentVisibilityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentColorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PercentColorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoodColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GoodColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BadColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BadColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/HealthBarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/HealthBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthBarWidget, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/HealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold = { "PercentVisibilityThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthBarWidget, PercentVisibilityThreshold), METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentColorThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/HealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentColorThreshold = { "PercentColorThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthBarWidget, PercentColorThreshold), METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentColorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentColorThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_GoodColor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/HealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_GoodColor = { "GoodColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthBarWidget, GoodColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_GoodColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_GoodColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_BadColor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/HealthBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_BadColor = { "BadColor", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthBarWidget, BadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_BadColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_BadColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_HealthProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_PercentColorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_GoodColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarWidget_Statics::NewProp_BadColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBarWidget_Statics::ClassParams = {
		&UHealthBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthBarWidget()
	{
		if (!Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton, Z_Construct_UClass_UHealthBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthBarWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UHealthBarWidget>()
	{
		return UHealthBarWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBarWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_HealthBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_HealthBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBarWidget, UHealthBarWidget::StaticClass, TEXT("UHealthBarWidget"), &Z_Registration_Info_UClass_UHealthBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBarWidget), 1506401949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_HealthBarWidget_h_2831681663(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_HealthBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_HealthBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
