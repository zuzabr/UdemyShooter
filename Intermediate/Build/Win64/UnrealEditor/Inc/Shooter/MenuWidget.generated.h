// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_MenuWidget_generated_h
#error "MenuWidget.generated.h already included, missing '#pragma once' in MenuWidget.h"
#endif
#define SHOOTER_MenuWidget_generated_h

#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_SPARSE_DATA
#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitGame); \
	DECLARE_FUNCTION(execOnStartGame);


#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitGame); \
	DECLARE_FUNCTION(execOnStartGame);


#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidget(UMenuWidget&&); \
	NO_API UMenuWidget(const UMenuWidget&); \
public:


#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidget(UMenuWidget&&); \
	NO_API UMenuWidget(const UMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget)


#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_16_PROLOG
#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_RPC_WRAPPERS \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_INCLASS \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0_Source_Shooter_Public_Menu_MenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
