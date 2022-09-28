// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundClass;
#ifdef SHOOTER_SoundFuncLib_generated_h
#error "SoundFuncLib.generated.h already included, missing '#pragma once' in SoundFuncLib.h"
#endif
#define SHOOTER_SoundFuncLib_generated_h

#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_SPARSE_DATA
#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleSoundClassVolume); \
	DECLARE_FUNCTION(execSetSoundClassVolume);


#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleSoundClassVolume); \
	DECLARE_FUNCTION(execSetSoundClassVolume);


#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundFuncLib(); \
	friend struct Z_Construct_UClass_USoundFuncLib_Statics; \
public: \
	DECLARE_CLASS(USoundFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USoundFuncLib)


#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSoundFuncLib(); \
	friend struct Z_Construct_UClass_USoundFuncLib_Statics; \
public: \
	DECLARE_CLASS(USoundFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USoundFuncLib)


#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundFuncLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundFuncLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundFuncLib(USoundFuncLib&&); \
	NO_API USoundFuncLib(const USoundFuncLib&); \
public:


#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundFuncLib(USoundFuncLib&&); \
	NO_API USoundFuncLib(const USoundFuncLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundFuncLib)


#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_11_PROLOG
#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_RPC_WRAPPERS \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_INCLASS \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USoundFuncLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0_Source_Shooter_Public_Sound_SoundFuncLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
