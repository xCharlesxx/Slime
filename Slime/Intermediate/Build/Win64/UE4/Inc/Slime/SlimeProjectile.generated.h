// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
#ifdef SLIME_SlimeProjectile_generated_h
#error "SlimeProjectile.generated.h already included, missing '#pragma once' in SlimeProjectile.h"
#endif
#define SLIME_SlimeProjectile_generated_h

#define Slime_Source_Slime_SlimeProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Slime_Source_Slime_SlimeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Slime_Source_Slime_SlimeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlimeProjectile(); \
	friend struct Z_Construct_UClass_ASlimeProjectile_Statics; \
public: \
	DECLARE_CLASS(ASlimeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slime"), NO_API) \
	DECLARE_SERIALIZER(ASlimeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Slime_Source_Slime_SlimeProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASlimeProjectile(); \
	friend struct Z_Construct_UClass_ASlimeProjectile_Statics; \
public: \
	DECLARE_CLASS(ASlimeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slime"), NO_API) \
	DECLARE_SERIALIZER(ASlimeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Slime_Source_Slime_SlimeProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlimeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlimeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlimeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlimeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlimeProjectile(ASlimeProjectile&&); \
	NO_API ASlimeProjectile(const ASlimeProjectile&); \
public:


#define Slime_Source_Slime_SlimeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlimeProjectile(ASlimeProjectile&&); \
	NO_API ASlimeProjectile(const ASlimeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlimeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlimeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlimeProjectile)


#define Slime_Source_Slime_SlimeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASlimeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASlimeProjectile, ProjectileMovement); }


#define Slime_Source_Slime_SlimeProjectile_h_9_PROLOG
#define Slime_Source_Slime_SlimeProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slime_Source_Slime_SlimeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Slime_Source_Slime_SlimeProjectile_h_12_RPC_WRAPPERS \
	Slime_Source_Slime_SlimeProjectile_h_12_INCLASS \
	Slime_Source_Slime_SlimeProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Slime_Source_Slime_SlimeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slime_Source_Slime_SlimeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Slime_Source_Slime_SlimeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Slime_Source_Slime_SlimeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Slime_Source_Slime_SlimeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Slime_Source_Slime_SlimeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
