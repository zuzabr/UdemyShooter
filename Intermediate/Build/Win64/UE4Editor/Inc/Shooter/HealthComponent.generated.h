// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef SHOOTER_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define SHOOTER_HealthComponent_generated_h

#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamageHAndle); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsDead);


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamageHAndle); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsDead);


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UHealthComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__AutoHeal() { return STRUCT_OFFSET(UHealthComponent, AutoHeal); } \
	FORCEINLINE static uint32 __PPO__HealUpdateTime() { return STRUCT_OFFSET(UHealthComponent, HealUpdateTime); } \
	FORCEINLINE static uint32 __PPO__HealDelay() { return STRUCT_OFFSET(UHealthComponent, HealDelay); } \
	FORCEINLINE static uint32 __PPO__HealModifier() { return STRUCT_OFFSET(UHealthComponent, HealModifier); } \
	FORCEINLINE static uint32 __PPO__CameraShake() { return STRUCT_OFFSET(UHealthComponent, CameraShake); } \
	FORCEINLINE static uint32 __PPO__DamageMontage() { return STRUCT_OFFSET(UHealthComponent, DamageMontage); }


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_14_PROLOG
#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_INCLASS \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Player_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
