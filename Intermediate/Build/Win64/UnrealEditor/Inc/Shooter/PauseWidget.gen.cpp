// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/PauseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UPauseWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UPauseWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPauseWidget::execOnClearPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClearPause();
		P_NATIVE_END;
	}
	void UPauseWidget::StaticRegisterNativesUPauseWidget()
	{
		UClass* Class = UPauseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClearPause", &UPauseWidget::execOnClearPause },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseWidget_OnClearPause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseWidget_OnClearPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PauseWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseWidget_OnClearPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseWidget, nullptr, "OnClearPause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseWidget_OnClearPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseWidget_OnClearPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseWidget_OnClearPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseWidget_OnClearPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseWidget);
	UClass* Z_Construct_UClass_UPauseWidget_NoRegister()
	{
		return UPauseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPauseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearPauseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClearPauseButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseWidget_OnClearPause, "OnClearPause" }, // 3039158266
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PauseWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PauseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseWidget_Statics::NewProp_ClearPauseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PauseWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseWidget_Statics::NewProp_ClearPauseButton = { "ClearPauseButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseWidget, ClearPauseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseWidget_Statics::NewProp_ClearPauseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::NewProp_ClearPauseButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseWidget_Statics::NewProp_ClearPauseButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseWidget_Statics::ClassParams = {
		&UPauseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseWidget()
	{
		if (!Z_Registration_Info_UClass_UPauseWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseWidget.OuterSingleton, Z_Construct_UClass_UPauseWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPauseWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UPauseWidget>()
	{
		return UPauseWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PauseWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PauseWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPauseWidget, UPauseWidget::StaticClass, TEXT("UPauseWidget"), &Z_Registration_Info_UClass_UPauseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseWidget), 2785849805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PauseWidget_h_16778731(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PauseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PauseWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
