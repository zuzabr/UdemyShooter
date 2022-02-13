// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_HealthPickUp_generated_h
#error "HealthPickUp.generated.h already included, missing '#pragma once' in HealthPickUp.h"
#endif
#define SHOOTER_HealthPickUp_generated_h

#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_SPARSE_DATA
#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPickUp(); \
	friend struct Z_Construct_UClass_AHealthPickUp_Statics; \
public: \
	DECLARE_CLASS(AHealthPickUp, ABasePickUp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickUp)


#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPickUp(); \
	friend struct Z_Construct_UClass_AHealthPickUp_Statics; \
public: \
	DECLARE_CLASS(AHealthPickUp, ABasePickUp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AHealthPickUp)


#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPickUp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickUp(AHealthPickUp&&); \
	NO_API AHealthPickUp(const AHealthPickUp&); \
public:


#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPickUp() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPickUp(AHealthPickUp&&); \
	NO_API AHealthPickUp(const AHealthPickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPickUp)


#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthAmount() { return STRUCT_OFFSET(AHealthPickUp, HealthAmount); }


#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_10_PROLOG
#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_INCLASS \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AHealthPickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_PickUps_HealthPickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
