// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerHUDWidget::execIsPlayerSpectating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerSpectating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUDWidget::execIsPlayerAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUDWidget::execGetAmmoData)
	{
		P_GET_STRUCT_REF(FAmmoData,Z_Param_Out_AmmoData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAmmoData(Z_Param_Out_AmmoData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUDWidget::execGetWeaponUIData)
	{
		P_GET_STRUCT_REF(FWeaponUIData,Z_Param_Out_UIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponUIData(Z_Param_Out_UIData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHUDWidget::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
	{
		UClass* Class = UPlayerHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmmoData", &UPlayerHUDWidget::execGetAmmoData },
			{ "GetHealthPercent", &UPlayerHUDWidget::execGetHealthPercent },
			{ "GetWeaponUIData", &UPlayerHUDWidget::execGetWeaponUIData },
			{ "IsPlayerAlive", &UPlayerHUDWidget::execIsPlayerAlive },
			{ "IsPlayerSpectating", &UPlayerHUDWidget::execIsPlayerSpectating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics
	{
		struct PlayerHUDWidget_eventGetAmmoData_Parms
		{
			FAmmoData AmmoData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventGetAmmoData_Parms, AmmoData), Z_Construct_UScriptStruct_FAmmoData, METADATA_PARAMS(nullptr, 0) }; // 2012568362
	void Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerHUDWidget_eventGetAmmoData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerHUDWidget_eventGetAmmoData_Parms), &Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::NewProp_AmmoData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "GetAmmoData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::PlayerHUDWidget_eventGetAmmoData_Parms), Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics
	{
		struct PlayerHUDWidget_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "//-----------------------Variables-----------------------\n" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
		{ "ToolTip", "-----------------------Variables-----------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::PlayerHUDWidget_eventGetHealthPercent_Parms), Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics
	{
		struct PlayerHUDWidget_eventGetWeaponUIData_Parms
		{
			FWeaponUIData UIData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UIData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerHUDWidget_eventGetWeaponUIData_Parms, UIData), Z_Construct_UScriptStruct_FWeaponUIData, METADATA_PARAMS(nullptr, 0) }; // 2823947487
	void Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerHUDWidget_eventGetWeaponUIData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerHUDWidget_eventGetWeaponUIData_Parms), &Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::NewProp_UIData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "GetWeaponUIData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::PlayerHUDWidget_eventGetWeaponUIData_Parms), Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics
	{
		struct PlayerHUDWidget_eventIsPlayerAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerHUDWidget_eventIsPlayerAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerHUDWidget_eventIsPlayerAlive_Parms), &Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "IsPlayerAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::PlayerHUDWidget_eventIsPlayerAlive_Parms), Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics
	{
		struct PlayerHUDWidget_eventIsPlayerSpectating_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerHUDWidget_eventIsPlayerSpectating_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerHUDWidget_eventIsPlayerSpectating_Parms), &Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHUDWidget, nullptr, "IsPlayerSpectating", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::PlayerHUDWidget_eventIsPlayerSpectating_Parms), Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUDWidget);
	UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHUDWidget_GetAmmoData, "GetAmmoData" }, // 1875473817
		{ &Z_Construct_UFunction_UPlayerHUDWidget_GetHealthPercent, "GetHealthPercent" }, // 525470236
		{ &Z_Construct_UFunction_UPlayerHUDWidget_GetWeaponUIData, "GetWeaponUIData" }, // 1964825485
		{ &Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerAlive, "IsPlayerAlive" }, // 2139180012
		{ &Z_Construct_UFunction_UPlayerHUDWidget_IsPlayerSpectating, "IsPlayerSpectating" }, // 3940912363
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
		&UPlayerHUDWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<UPlayerHUDWidget>()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUDWidget, UPlayerHUDWidget::StaticClass, TEXT("UPlayerHUDWidget"), &Z_Registration_Info_UClass_UPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUDWidget), 89802048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_1361973019(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
