// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/SpectatorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USpectatorWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USpectatorWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	DEFINE_FUNCTION(USpectatorWidget::execGetRespawnTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CountDownTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRespawnTime(Z_Param_Out_CountDownTime);
		P_NATIVE_END;
	}
	void USpectatorWidget::StaticRegisterNativesUSpectatorWidget()
	{
		UClass* Class = USpectatorWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRespawnTime", &USpectatorWidget::execGetRespawnTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics
	{
		struct SpectatorWidget_eventGetRespawnTime_Parms
		{
			int32 CountDownTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountDownTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::NewProp_CountDownTime = { "CountDownTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectatorWidget_eventGetRespawnTime_Parms, CountDownTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpectatorWidget_eventGetRespawnTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpectatorWidget_eventGetRespawnTime_Parms), &Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::NewProp_CountDownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/SpectatorWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectatorWidget, nullptr, "GetRespawnTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::SpectatorWidget_eventGetRespawnTime_Parms), Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectatorWidget_GetRespawnTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpectatorWidget_GetRespawnTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpectatorWidget);
	UClass* Z_Construct_UClass_USpectatorWidget_NoRegister()
	{
		return USpectatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_USpectatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpectatorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpectatorWidget_GetRespawnTime, "GetRespawnTime" }, // 1096667047
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SpectatorWidget.h" },
		{ "ModuleRelativePath", "Public/UI/SpectatorWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectatorWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpectatorWidget_Statics::ClassParams = {
		&USpectatorWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpectatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectatorWidget()
	{
		if (!Z_Registration_Info_UClass_USpectatorWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpectatorWidget.OuterSingleton, Z_Construct_UClass_USpectatorWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpectatorWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USpectatorWidget>()
	{
		return USpectatorWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectatorWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_SpectatorWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_SpectatorWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpectatorWidget, USpectatorWidget::StaticClass, TEXT("USpectatorWidget"), &Z_Registration_Info_UClass_USpectatorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpectatorWidget), 533115410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_SpectatorWidget_h_1379567047(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_SpectatorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_SpectatorWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
