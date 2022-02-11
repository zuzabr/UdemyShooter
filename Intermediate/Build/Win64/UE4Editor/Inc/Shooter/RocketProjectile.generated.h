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
struct FVector;
struct FHitResult;
#ifdef SHOOTER_RocketProjectile_generated_h
#error "RocketProjectile.generated.h already included, missing '#pragma once' in RocketProjectile.h"
#endif
#define SHOOTER_RocketProjectile_generated_h

#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARocketProjectile(); \
	friend struct Z_Construct_UClass_ARocketProjectile_Statics; \
public: \
	DECLARE_CLASS(ARocketProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ARocketProjectile)


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARocketProjectile(); \
	friend struct Z_Construct_UClass_ARocketProjectile_Statics; \
public: \
	DECLARE_CLASS(ARocketProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ARocketProjectile)


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_STANDARD_CONSTRUCTORS \
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


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARocketProjectile(ARocketProjectile&&); \
	NO_API ARocketProjectile(const ARocketProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARocketProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARocketProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARocketProjectile)


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ARocketProjectile, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(ARocketProjectile, MovementComponent); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(ARocketProjectile, DamageRadius); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(ARocketProjectile, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__bDoFullDamage() { return STRUCT_OFFSET(ARocketProjectile, bDoFullDamage); } \
	FORCEINLINE static uint32 __PPO__ProjectileLifeSpan() { return STRUCT_OFFSET(ARocketProjectile, ProjectileLifeSpan); }


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_12_PROLOG
#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_INCLASS \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ARocketProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Weapon_RocketProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
