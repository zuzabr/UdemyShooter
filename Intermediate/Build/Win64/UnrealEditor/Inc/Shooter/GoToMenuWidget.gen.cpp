// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/GoToMenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoToMenuWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UGoToMenuWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UGoToMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGoToMenuWidget::execOnGoToMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGoToMenu();
		P_NATIVE_END;
	}
	void UGoToMenuWidget::StaticRegisterNativesUGoToMenuWidget()
	{
		UClass* Class = UGoToMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGoToMenu", &UGoToMenuWidget::execOnGoToMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GoToMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoToMenuWidget, nullptr, "OnGoToMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoToMenuWidget);
	UClass* Z_Construct_UClass_UGoToMenuWidget_NoRegister()
	{
		return UGoToMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGoToMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoToMenuButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoToMenuButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoToMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoToMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoToMenuWidget_OnGoToMenu, "OnGoToMenu" }, // 2875523292
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoToMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GoToMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GoToMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoToMenuWidget_Statics::NewProp_GoToMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GoToMenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoToMenuWidget_Statics::NewProp_GoToMenuButton = { "GoToMenuButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoToMenuWidget, GoToMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoToMenuWidget_Statics::NewProp_GoToMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoToMenuWidget_Statics::NewProp_GoToMenuButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoToMenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoToMenuWidget_Statics::NewProp_GoToMenuButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoToMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoToMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoToMenuWidget_Statics::ClassParams = {
		&UGoToMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoToMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoToMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoToMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoToMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoToMenuWidget()
	{
		if (!Z_Registration_Info_UClass_UGoToMenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoToMenuWidget.OuterSingleton, Z_Construct_UClass_UGoToMenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoToMenuWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UGoToMenuWidget>()
	{
		return UGoToMenuWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoToMenuWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GoToMenuWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GoToMenuWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoToMenuWidget, UGoToMenuWidget::StaticClass, TEXT("UGoToMenuWidget"), &Z_Registration_Info_UClass_UGoToMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoToMenuWidget), 2237257348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GoToMenuWidget_h_3800048157(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GoToMenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GoToMenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
