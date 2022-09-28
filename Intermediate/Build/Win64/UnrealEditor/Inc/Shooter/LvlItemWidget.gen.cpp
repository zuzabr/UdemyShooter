// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Menu/LvlItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLvlItemWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ULvlItemWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ULvlItemWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULvlItemWidget::execOnLvlItemClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLvlItemClicked();
		P_NATIVE_END;
	}
	void ULvlItemWidget::StaticRegisterNativesULvlItemWidget()
	{
		UClass* Class = ULvlItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLvlItemClicked", &ULvlItemWidget::execOnLvlItemClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/LvlItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULvlItemWidget, nullptr, "OnLvlItemClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULvlItemWidget);
	UClass* Z_Construct_UClass_ULvlItemWidget_NoRegister()
	{
		return ULvlItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULvlItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LvlSelectButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LvlSelectButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LvlNameTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LvlNameTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LvlImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LvlImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrameImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULvlItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULvlItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULvlItemWidget_OnLvlItemClicked, "OnLvlItemClicked" }, // 2912365792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvlItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Menu/LvlItemWidget.h" },
		{ "ModuleRelativePath", "Public/Menu/LvlItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlSelectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/LvlItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlSelectButton = { "LvlSelectButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvlItemWidget, LvlSelectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlSelectButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlSelectButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlNameTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/LvlItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlNameTextBlock = { "LvlNameTextBlock", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvlItemWidget, LvlNameTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlNameTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlNameTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/LvlItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlImage = { "LvlImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvlItemWidget, LvlImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_FrameImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/LvlItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_FrameImage = { "FrameImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULvlItemWidget, FrameImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_FrameImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_FrameImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULvlItemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlSelectButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlNameTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_LvlImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULvlItemWidget_Statics::NewProp_FrameImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULvlItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULvlItemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULvlItemWidget_Statics::ClassParams = {
		&ULvlItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULvlItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULvlItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULvlItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULvlItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULvlItemWidget()
	{
		if (!Z_Registration_Info_UClass_ULvlItemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULvlItemWidget.OuterSingleton, Z_Construct_UClass_ULvlItemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULvlItemWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ULvlItemWidget>()
	{
		return ULvlItemWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULvlItemWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_LvlItemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_LvlItemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULvlItemWidget, ULvlItemWidget::StaticClass, TEXT("ULvlItemWidget"), &Z_Registration_Info_UClass_ULvlItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULvlItemWidget), 1477073729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_LvlItemWidget_h_4237298720(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_LvlItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Menu_LvlItemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
