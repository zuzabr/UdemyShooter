// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_DefaultHUD_generated_h
#error "DefaultHUD.generated.h already included, missing '#pragma once' in DefaultHUD.h"
#endif
#define SHOOTER_DefaultHUD_generated_h

#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultHUD(); \
	friend struct Z_Construct_UClass_ADefaultHUD_Statics; \
public: \
	DECLARE_CLASS(ADefaultHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ADefaultHUD)


#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADefaultHUD(); \
	friend struct Z_Construct_UClass_ADefaultHUD_Statics; \
public: \
	DECLARE_CLASS(ADefaultHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ADefaultHUD)


#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultHUD(ADefaultHUD&&); \
	NO_API ADefaultHUD(const ADefaultHUD&); \
public:


#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultHUD(ADefaultHUD&&); \
	NO_API ADefaultHUD(const ADefaultHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultHUD)


#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_12_PROLOG
#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_INCLASS \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_DefaultHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ADefaultHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_UI_DefaultHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
