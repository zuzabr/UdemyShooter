// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTER_RocketProjectile_generated_h
#error "RocketProjectile.generated.h already included, missing '#pragma once' in RocketProjectile.h"
#endif
#define SHOOTER_RocketProjectile_generated_h

#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_SPARSE_DATA
#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocketProjectile(); \
	friend struct Z_Construct_UClass_ARocketProjectile_Statics; \
public: \
	DECLARE_CLASS(ARocketProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ARocketProjectile)


#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesARocketProjectile(); \
	friend struct Z_Construct_UClass_ARocketProjectile_Statics; \
public: \
	DECLARE_CLASS(ARocketProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ARocketProjectile)


#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARocketProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARocketProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketProjectile(ARocketProjectile&&); \
	NO_API ARocketProjectile(const ARocketProjectile&); \
public:


#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketProjectile(ARocketProjectile&&); \
	NO_API ARocketProjectile(const ARocketProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocketProjectile)


#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_13_PROLOG
#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_RPC_WRAPPERS \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_INCLASS \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_SPARSE_DATA \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ARocketProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0_Source_Shooter_Public_Weapon_RocketProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
