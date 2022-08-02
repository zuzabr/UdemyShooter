// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_GM_Shooter_generated_h
#error "GM_Shooter.generated.h already included, missing '#pragma once' in GM_Shooter.h"
#endif
#define SHOOTER_GM_Shooter_generated_h

#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_SPARSE_DATA
#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_RPC_WRAPPERS
#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_Shooter(); \
	friend struct Z_Construct_UClass_AGM_Shooter_Statics; \
public: \
	DECLARE_CLASS(AGM_Shooter, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AGM_Shooter)


#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGM_Shooter(); \
	friend struct Z_Construct_UClass_AGM_Shooter_Statics; \
public: \
	DECLARE_CLASS(AGM_Shooter, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AGM_Shooter)


#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_Shooter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_Shooter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Shooter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Shooter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Shooter(AGM_Shooter&&); \
	NO_API AGM_Shooter(const AGM_Shooter&); \
public:


#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_Shooter(AGM_Shooter&&); \
	NO_API AGM_Shooter(const AGM_Shooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_Shooter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_Shooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGM_Shooter)


#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_12_PROLOG
#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_RPC_WRAPPERS \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_INCLASS \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AGM_Shooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0_Source_Shooter_Public_GM_Shooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
