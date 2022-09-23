// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_GameDataWidget_generated_h
#error "GameDataWidget.generated.h already included, missing '#pragma once' in GameDataWidget.h"
#endif
#define SHOOTER_GameDataWidget_generated_h

#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_SPARSE_DATA
#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoundSecondsRemain); \
	DECLARE_FUNCTION(execGetTotalRoundsNum); \
	DECLARE_FUNCTION(execGetCurrentRoundNum); \
	DECLARE_FUNCTION(execGetKillsNum);


#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoundSecondsRemain); \
	DECLARE_FUNCTION(execGetTotalRoundsNum); \
	DECLARE_FUNCTION(execGetCurrentRoundNum); \
	DECLARE_FUNCTION(execGetKillsNum);


#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameDataWidget(); \
	friend struct Z_Construct_UClass_UGameDataWidget_Statics; \
public: \
	DECLARE_CLASS(UGameDataWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UGameDataWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameDataWidget(); \
	friend struct Z_Construct_UClass_UGameDataWidget_Statics; \
public: \
	DECLARE_CLASS(UGameDataWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UGameDataWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDataWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDataWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDataWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDataWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameDataWidget(UGameDataWidget&&); \
	NO_API UGameDataWidget(const UGameDataWidget&); \
public:


#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDataWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameDataWidget(UGameDataWidget&&); \
	NO_API UGameDataWidget(const UGameDataWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDataWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDataWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDataWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_12_PROLOG
#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_RPC_WRAPPERS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_INCLASS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UGameDataWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0_Source_Shooter_Public_UI_GameDataWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
