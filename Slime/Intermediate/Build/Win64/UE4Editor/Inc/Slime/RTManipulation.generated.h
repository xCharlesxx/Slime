// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
#ifdef SLIME_RTManipulation_generated_h
#error "RTManipulation.generated.h already included, missing '#pragma once' in RTManipulation.h"
#endif
#define SLIME_RTManipulation_generated_h

#define Slime_Source_Slime_RTManipulation_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDynamicMat) \
	{ \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_dm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicMat(Z_Param_dm); \
		P_NATIVE_END; \
	}


#define Slime_Source_Slime_RTManipulation_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDynamicMat) \
	{ \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_dm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicMat(Z_Param_dm); \
		P_NATIVE_END; \
	}


#define Slime_Source_Slime_RTManipulation_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTManipulation(); \
	friend struct Z_Construct_UClass_ARTManipulation_Statics; \
public: \
	DECLARE_CLASS(ARTManipulation, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slime"), NO_API) \
	DECLARE_SERIALIZER(ARTManipulation)


#define Slime_Source_Slime_RTManipulation_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARTManipulation(); \
	friend struct Z_Construct_UClass_ARTManipulation_Statics; \
public: \
	DECLARE_CLASS(ARTManipulation, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Slime"), NO_API) \
	DECLARE_SERIALIZER(ARTManipulation)


#define Slime_Source_Slime_RTManipulation_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARTManipulation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARTManipulation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTManipulation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTManipulation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTManipulation(ARTManipulation&&); \
	NO_API ARTManipulation(const ARTManipulation&); \
public:


#define Slime_Source_Slime_RTManipulation_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARTManipulation(ARTManipulation&&); \
	NO_API ARTManipulation(const ARTManipulation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTManipulation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTManipulation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTManipulation)


#define Slime_Source_Slime_RTManipulation_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaterialDynamic() { return STRUCT_OFFSET(ARTManipulation, MaterialDynamic); }


#define Slime_Source_Slime_RTManipulation_h_11_PROLOG
#define Slime_Source_Slime_RTManipulation_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slime_Source_Slime_RTManipulation_h_14_PRIVATE_PROPERTY_OFFSET \
	Slime_Source_Slime_RTManipulation_h_14_RPC_WRAPPERS \
	Slime_Source_Slime_RTManipulation_h_14_INCLASS \
	Slime_Source_Slime_RTManipulation_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Slime_Source_Slime_RTManipulation_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Slime_Source_Slime_RTManipulation_h_14_PRIVATE_PROPERTY_OFFSET \
	Slime_Source_Slime_RTManipulation_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Slime_Source_Slime_RTManipulation_h_14_INCLASS_NO_PURE_DECLS \
	Slime_Source_Slime_RTManipulation_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Slime_Source_Slime_RTManipulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
