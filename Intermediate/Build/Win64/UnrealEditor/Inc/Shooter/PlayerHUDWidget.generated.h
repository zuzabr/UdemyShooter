// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAmmoData;
struct FWeaponUIData;
#ifdef SHOOTER_PlayerHUDWidget_generated_h
#error "PlayerHUDWidget.generated.h already included, missing '#pragma once' in PlayerHUDWidget.h"
#endif
#define SHOOTER_PlayerHUDWidget_generated_h

#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_SPARSE_DATA
#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetAmmoData); \
	DECLARE_FUNCTION(execGetWeaponUIData); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetAmmoData); \
	DECLARE_FUNCTION(execGetWeaponUIData); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHUDWidget(); \
	friend struct Z_Construct_UClass_UPlayerHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHUDWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_STANDARD_CONSTRUCTORS \
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


#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_ENHANCED_CONSTRUCTORS \
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


#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_12_PROLOG
#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_RPC_WRAPPERS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_INCLASS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UPlayerHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0_Source_Shooter_Public_UI_PlayerHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
