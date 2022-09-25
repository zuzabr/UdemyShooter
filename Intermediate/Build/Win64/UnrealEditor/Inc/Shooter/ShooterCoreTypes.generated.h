// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_ShooterCoreTypes_generated_h
#error "ShooterCoreTypes.generated.h already included, missing '#pragma once' in ShooterCoreTypes.h"
#endif
#define SHOOTER_ShooterCoreTypes_generated_h

#define FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAmmoData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FAmmoData>();

#define FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDecalData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FDecalData>();

#define FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImpactlData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FImpactlData>();

#define FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponUIData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FWeaponUIData>();

#define FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FGameData>();

#define FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FLevelData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0_Source_Shooter_Public_ShooterCoreTypes_h


#define FOREACH_ENUM_EMATCHSTATE(op) \
	op(EMatchState::WaitingToStart) \
	op(EMatchState::InProgress) \
	op(EMatchState::Pause) \
	op(EMatchState::GameOver) 

enum class EMatchState : uint8;
template<> SHOOTER_API UEnum* StaticEnum<EMatchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
