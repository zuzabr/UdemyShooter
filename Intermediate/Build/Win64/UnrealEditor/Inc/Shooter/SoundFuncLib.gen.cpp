// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Sound/SoundFuncLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundFuncLib() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USoundFuncLib_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USoundFuncLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USoundFuncLib::execToggleSoundClassVolume)
	{
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundFuncLib::ToggleSoundClassVolume(Z_Param_SoundClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundFuncLib::execSetSoundClassVolume)
	{
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundFuncLib::SetSoundClassVolume(Z_Param_SoundClass,Z_Param_Volume);
		P_NATIVE_END;
	}
	void USoundFuncLib::StaticRegisterNativesUSoundFuncLib()
	{
		UClass* Class = USoundFuncLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSoundClassVolume", &USoundFuncLib::execSetSoundClassVolume },
			{ "ToggleSoundClassVolume", &USoundFuncLib::execToggleSoundClassVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics
	{
		struct SoundFuncLib_eventSetSoundClassVolume_Parms
		{
			USoundClass* SoundClass;
			float Volume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundFuncLib_eventSetSoundClassVolume_Parms, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundFuncLib_eventSetSoundClassVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::NewProp_SoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/SoundFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundFuncLib, nullptr, "SetSoundClassVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::SoundFuncLib_eventSetSoundClassVolume_Parms), Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics
	{
		struct SoundFuncLib_eventToggleSoundClassVolume_Parms
		{
			USoundClass* SoundClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundFuncLib_eventToggleSoundClassVolume_Parms, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::NewProp_SoundClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/SoundFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundFuncLib, nullptr, "ToggleSoundClassVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::SoundFuncLib_eventToggleSoundClassVolume_Parms), Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundFuncLib);
	UClass* Z_Construct_UClass_USoundFuncLib_NoRegister()
	{
		return USoundFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_USoundFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundFuncLib_SetSoundClassVolume, "SetSoundClassVolume" }, // 1247699672
		{ &Z_Construct_UFunction_USoundFuncLib_ToggleSoundClassVolume, "ToggleSoundClassVolume" }, // 1750145121
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundFuncLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sound/SoundFuncLib.h" },
		{ "ModuleRelativePath", "Public/Sound/SoundFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundFuncLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundFuncLib_Statics::ClassParams = {
		&USoundFuncLib::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundFuncLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundFuncLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundFuncLib()
	{
		if (!Z_Registration_Info_UClass_USoundFuncLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundFuncLib.OuterSingleton, Z_Construct_UClass_USoundFuncLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundFuncLib.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USoundFuncLib>()
	{
		return USoundFuncLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundFuncLib);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundFuncLib, USoundFuncLib::StaticClass, TEXT("USoundFuncLib"), &Z_Registration_Info_UClass_USoundFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundFuncLib), 2215304515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_3625218501(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
