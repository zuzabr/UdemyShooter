// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef SHOOTER_DefaultChar_generated_h
#error "DefaultChar.generated.h already included, missing '#pragma once' in DefaultChar.h"
#endif
#define SHOOTER_DefaultChar_generated_h

#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGroundLanded); \
	DECLARE_FUNCTION(execGetMovementDirection); \
	DECLARE_FUNCTION(execIsSprinting);


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGroundLanded); \
	DECLARE_FUNCTION(execGetMovementDirection); \
	DECLARE_FUNCTION(execIsSprinting);


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultChar(); \
	friend struct Z_Construct_UClass_ADefaultChar_Statics; \
public: \
	DECLARE_CLASS(ADefaultChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ADefaultChar)


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_INCLASS \
private: \
	static void StaticRegisterNativesADefaultChar(); \
	friend struct Z_Construct_UClass_ADefaultChar_Statics; \
public: \
	DECLARE_CLASS(ADefaultChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ADefaultChar)


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultChar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultChar(ADefaultChar&&); \
	NO_API ADefaultChar(const ADefaultChar&); \
public:


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultChar(ADefaultChar&&); \
	NO_API ADefaultChar(const ADefaultChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultChar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultChar)


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ADefaultChar, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(ADefaultChar, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ADefaultChar, HealthComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponComponent() { return STRUCT_OFFSET(ADefaultChar, WeaponComponent); } \
	FORCEINLINE static uint32 __PPO__HealthTextComponent() { return STRUCT_OFFSET(ADefaultChar, HealthTextComponent); } \
	FORCEINLINE static uint32 __PPO__DeathAnimMontage() { return STRUCT_OFFSET(ADefaultChar, DeathAnimMontage); } \
	FORCEINLINE static uint32 __PPO__LandedDamageVelocity() { return STRUCT_OFFSET(ADefaultChar, LandedDamageVelocity); } \
	FORCEINLINE static uint32 __PPO__LandedDamage() { return STRUCT_OFFSET(ADefaultChar, LandedDamage); }


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_16_PROLOG
#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_INCLASS \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_DefaultChar_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ADefaultChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Player_DefaultChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
