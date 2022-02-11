// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_PlayerHUDWidget_generated_h
#error "PlayerHUDWidget.generated.h already included, missing '#pragma once' in PlayerHUDWidget.h"
#endif
#define SHOOTER_PlayerHUDWidget_generated_h

#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_SPARSE_DATA
#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealthPercent);


#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealthPercent);


#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUDWidget(UPlayerHUDWidget&&); \
	NO_API UPlayerHUDWidget(const UPlayerHUDWidget&); \
public:


#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHUDWidget(UPlayerHUDWidget&&); \
	NO_API UPlayerHUDWidget(const UPlayerHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHUDWidget)


#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET
#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_10_PROLOG
#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_INCLASS \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UPlayerHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_UI_PlayerHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
