// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_EnemyShip_generated_h
#error "EnemyShip.generated.h already included, missing '#pragma once' in EnemyShip.h"
#endif
#define STARFIGHTER_EnemyShip_generated_h

#define StarFighter_Source_StarFighter_EnemyShip_h_13_SPARSE_DATA
#define StarFighter_Source_StarFighter_EnemyShip_h_13_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_EnemyShip_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_EnemyShip_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyShip(); \
	friend struct Z_Construct_UClass_AEnemyShip_Statics; \
public: \
	DECLARE_CLASS(AEnemyShip, ASpaceShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShip)


#define StarFighter_Source_StarFighter_EnemyShip_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyShip(); \
	friend struct Z_Construct_UClass_AEnemyShip_Statics; \
public: \
	DECLARE_CLASS(AEnemyShip, ASpaceShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShip)


#define StarFighter_Source_StarFighter_EnemyShip_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShip(AEnemyShip&&); \
	NO_API AEnemyShip(const AEnemyShip&); \
public:


#define StarFighter_Source_StarFighter_EnemyShip_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShip(AEnemyShip&&); \
	NO_API AEnemyShip(const AEnemyShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyShip)


#define StarFighter_Source_StarFighter_EnemyShip_h_13_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_EnemyShip_h_10_PROLOG
#define StarFighter_Source_StarFighter_EnemyShip_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_EnemyShip_h_13_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_EnemyShip_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_EnemyShip_h_13_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_EnemyShip_h_13_INCLASS \
	StarFighter_Source_StarFighter_EnemyShip_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_EnemyShip_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_EnemyShip_h_13_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_EnemyShip_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_EnemyShip_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_EnemyShip_h_13_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_EnemyShip_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AEnemyShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_EnemyShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
