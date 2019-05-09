// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLIME_SlimeCharacter_generated_h
#error "SlimeCharacter.generated.h already included, missing '#pragma once' in SlimeCharacter.h"
#endif
#define SLIME_SlimeCharacter_generated_h

#define Slime_Source_Slime_SlimeCharacter_h_14_RPC_WRAPPERS
#define Slime_Source_Slime_SlimeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Slime_Source_Slime_SlimeCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlimeCharacter(); \
	friend struct Z_Construct_UClass_ASlimeCharacter_Statics; \
public: \
	DECLARE_CLASS(ASlimeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slime"), NO_API) \
	DECLARE_SERIALIZER(ASlimeCharacter)


#define Slime_Source_Slime_SlimeCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASlimeCharacter(); \
	friend struct Z_Construct_UClass_ASlimeCharacter_Statics; \
public: \
	DECLARE_CLASS(ASlimeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slime"), NO_API) \
	DECLARE_SERIALIZER(ASlimeCharacter)


#define Slime_Source_Slime_SlimeCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlimeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlimeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlimeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlimeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlimeCharacter(ASlimeCharacter&&); \
	NO_API ASlimeCharacter(const ASlimeCharacter&); \
public:


#define Slime_Source_Slime_SlimeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlimeCharacter(ASlimeCharacter&&); \
	NO_API ASlimeCharacter(const ASlimeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlimeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlimeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlimeCharacter)


#define Slime_Source_Slime_SlimeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ASlimeCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ASlimeCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ASlimeCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ASlimeCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ASlimeCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ASlimeCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ASlimeCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ASlimeCharacter, L_MotionController); }


#define Slime_Source_Slime_SlimeCharacter_h_11_PROLOG
#define Slime_Source_Slime_SlimeCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slime_Source_Slime_SlimeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Slime_Source_Slime_SlimeCharacter_h_14_RPC_WRAPPERS \
	Slime_Source_Slime_SlimeCharacter_h_14_INCLASS \
	Slime_Source_Slime_SlimeCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Slime_Source_Slime_SlimeCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slime_Source_Slime_SlimeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Slime_Source_Slime_SlimeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Slime_Source_Slime_SlimeCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Slime_Source_Slime_SlimeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Slime_Source_Slime_SlimeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
