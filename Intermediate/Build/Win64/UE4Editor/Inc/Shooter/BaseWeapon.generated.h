// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define SHOOTER_BaseWeapon_generated_h

#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public:


#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseWeapon(ABaseWeapon&&); \
	NO_API ABaseWeapon(const ABaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseWeapon)


#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(ABaseWeapon, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__DefaultAmmo() { return STRUCT_OFFSET(ABaseWeapon, DefaultAmmo); } \
	FORCEINLINE static uint32 __PPO__FireSocketName() { return STRUCT_OFFSET(ABaseWeapon, FireSocketName); } \
	FORCEINLINE static uint32 __PPO__TraceMaxDistance() { return STRUCT_OFFSET(ABaseWeapon, TraceMaxDistance); }


#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_16_PROLOG
#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_INCLASS \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ABaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Weapon_BaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
