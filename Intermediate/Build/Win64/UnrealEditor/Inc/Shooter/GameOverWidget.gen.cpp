// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/GameOverWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UGameOverWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UGameOverWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameOverWidget::execOnRestartLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartLevel();
		P_NATIVE_END;
	}
	void UGameOverWidget::StaticRegisterNativesUGameOverWidget()
	{
		UClass* Class = UGameOverWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRestartLevel", &UGameOverWidget::execOnRestartLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameOverWidget_OnRestartLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverWidget_OnRestartLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_OnRestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "OnRestartLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOverWidget_OnRestartLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_OnRestartLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOverWidget_OnRestartLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverWidget_OnRestartLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameOverWidget);
	UClass* Z_Construct_UClass_UGameOverWidget_NoRegister()
	{
		return UGameOverWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameOverWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStatBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartLevelButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RestartLevelButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStatWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerStatWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOverWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameOverWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOverWidget_OnRestartLevel, "OnRestartLevel" }, // 2107509012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GameOverWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GameOverWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatBox = { "PlayerStatBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOverWidget, PlayerStatBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartLevelButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartLevelButton = { "RestartLevelButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOverWidget, RestartLevelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartLevelButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartLevelButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatWidgetClass = { "PlayerStatWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameOverWidget, PlayerStatWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameOverWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_RestartLevelButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_PlayerStatWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOverWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameOverWidget_Statics::ClassParams = {
		&UGameOverWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameOverWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameOverWidget()
	{
		if (!Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton, Z_Construct_UClass_UGameOverWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UGameOverWidget>()
	{
		return UGameOverWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameOverWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameOverWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameOverWidget, UGameOverWidget::StaticClass, TEXT("UGameOverWidget"), &Z_Registration_Info_UClass_UGameOverWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameOverWidget), 3263798120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameOverWidget_h_2556693015(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameOverWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameOverWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
