// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Menu/MenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ULvlItemWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMenuWidget::execOnQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMenuWidget::execOnStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartGame();
		P_NATIVE_END;
	}
	void UMenuWidget::StaticRegisterNativesUMenuWidget()
	{
		UClass* Class = UMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuitGame", &UMenuWidget::execOnQuitGame },
			{ "OnStartGame", &UMenuWidget::execOnStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMenuWidget_OnQuitGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_OnQuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_OnQuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "OnQuitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_OnQuitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_OnQuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_OnQuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuWidget_OnQuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "OnStartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMenuWidget_OnStartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuWidget);
	UClass* Z_Construct_UClass_UMenuWidget_NoRegister()
	{
		return UMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartGameButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartGameButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitGameButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitGameButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LvlItemsBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LvlItemsBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LvlItemWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LvlItemWidgetClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LvlItemWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LvlItemWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LvlItemWidgets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuWidget_OnQuitGame, "OnQuitGame" }, // 1848432864
		{ &Z_Construct_UFunction_UMenuWidget_OnStartGame, "OnStartGame" }, // 545154401
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Menu/MenuWidget.h" },
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::NewProp_StartGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_StartGameButton = { "StartGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidget, StartGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::NewProp_StartGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::NewProp_StartGameButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::NewProp_QuitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_QuitGameButton = { "QuitGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidget, QuitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::NewProp_QuitGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::NewProp_QuitGameButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemsBox = { "LvlItemsBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidget, LvlItemsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemsBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgetClass = { "LvlItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidget, LvlItemWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgetClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgets_Inner = { "LvlItemWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULvlItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgets = { "LvlItemWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMenuWidget, LvlItemWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_StartGameButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_QuitGameButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemsBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuWidget_Statics::NewProp_LvlItemWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidget_Statics::ClassParams = {
		&UMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuWidget()
	{
		if (!Z_Registration_Info_UClass_UMenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuWidget.OuterSingleton, Z_Construct_UClass_UMenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMenuWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UMenuWidget>()
	{
		return UMenuWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMenuWidget, UMenuWidget::StaticClass, TEXT("UMenuWidget"), &Z_Registration_Info_UClass_UMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuWidget), 2788245130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_1562480972(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
