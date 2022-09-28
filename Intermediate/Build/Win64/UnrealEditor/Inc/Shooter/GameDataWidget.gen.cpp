// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/GameDataWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDataWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UGameDataWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UGameDataWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	DEFINE_FUNCTION(UGameDataWidget::execGetRoundSecondsRemain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRoundSecondsRemain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDataWidget::execGetTotalRoundsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalRoundsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDataWidget::execGetCurrentRoundNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentRoundNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameDataWidget::execGetKillsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKillsNum();
		P_NATIVE_END;
	}
	void UGameDataWidget::StaticRegisterNativesUGameDataWidget()
	{
		UClass* Class = UGameDataWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentRoundNum", &UGameDataWidget::execGetCurrentRoundNum },
			{ "GetKillsNum", &UGameDataWidget::execGetKillsNum },
			{ "GetRoundSecondsRemain", &UGameDataWidget::execGetRoundSecondsRemain },
			{ "GetTotalRoundsNum", &UGameDataWidget::execGetTotalRoundsNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics
	{
		struct GameDataWidget_eventGetCurrentRoundNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameDataWidget_eventGetCurrentRoundNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/GameDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataWidget, nullptr, "GetCurrentRoundNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::GameDataWidget_eventGetCurrentRoundNum_Parms), Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics
	{
		struct GameDataWidget_eventGetKillsNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameDataWidget_eventGetKillsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/GameDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataWidget, nullptr, "GetKillsNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::GameDataWidget_eventGetKillsNum_Parms), Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameDataWidget_GetKillsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataWidget_GetKillsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics
	{
		struct GameDataWidget_eventGetRoundSecondsRemain_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameDataWidget_eventGetRoundSecondsRemain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/GameDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataWidget, nullptr, "GetRoundSecondsRemain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::GameDataWidget_eventGetRoundSecondsRemain_Parms), Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics
	{
		struct GameDataWidget_eventGetTotalRoundsNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameDataWidget_eventGetTotalRoundsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/GameDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataWidget, nullptr, "GetTotalRoundsNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::GameDataWidget_eventGetTotalRoundsNum_Parms), Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameDataWidget);
	UClass* Z_Construct_UClass_UGameDataWidget_NoRegister()
	{
		return UGameDataWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameDataWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameDataWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameDataWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameDataWidget_GetCurrentRoundNum, "GetCurrentRoundNum" }, // 2009285771
		{ &Z_Construct_UFunction_UGameDataWidget_GetKillsNum, "GetKillsNum" }, // 2405059477
		{ &Z_Construct_UFunction_UGameDataWidget_GetRoundSecondsRemain, "GetRoundSecondsRemain" }, // 4236496688
		{ &Z_Construct_UFunction_UGameDataWidget_GetTotalRoundsNum, "GetTotalRoundsNum" }, // 3201801194
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameDataWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/GameDataWidget.h" },
		{ "ModuleRelativePath", "Public/UI/GameDataWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameDataWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameDataWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameDataWidget_Statics::ClassParams = {
		&UGameDataWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameDataWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameDataWidget()
	{
		if (!Z_Registration_Info_UClass_UGameDataWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameDataWidget.OuterSingleton, Z_Construct_UClass_UGameDataWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameDataWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UGameDataWidget>()
	{
		return UGameDataWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameDataWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameDataWidget, UGameDataWidget::StaticClass, TEXT("UGameDataWidget"), &Z_Registration_Info_UClass_UGameDataWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameDataWidget), 3967277083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_3815803554(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
