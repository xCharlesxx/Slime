// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UMaterialInstanceDynamic;
#ifdef SLIME_RTManipulation_generated_h
#error "RTManipulation.generated.h already included, missing '#pragma once' in RTManipulation.h"
#endif
#define SLIME_RTManipulation_generated_h

#define Slime_Source_Slime_RTManipulation_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDynamicBranchAlgorithm) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_seedPos); \
		P_GET_PROPERTY(UIntProperty,Z_Param_segmentLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_branchProbability); \
		P_GET_PROPERTY(UIntProperty,Z_Param_generation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_generationPenalty); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_successThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxBranches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DynamicBranchAlgorithm(Z_Param_seedPos,Z_Param_segmentLength,Z_Param_branchProbability,Z_Param_generation,Z_Param_generationPenalty,Z_Param_successThreshold,Z_Param_speed,Z_Param_maxBranches); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranchAlgorithm) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_seedPos); \
		P_GET_STRUCT(FVector2D,Z_Param_target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_segmentLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_branchProbability); \
		P_GET_PROPERTY(UIntProperty,Z_Param_generation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_generationPenalty); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_successThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxBranches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BranchAlgorithm(Z_Param_seedPos,Z_Param_target,Z_Param_segmentLength,Z_Param_branchProbability,Z_Param_generation,Z_Param_generationPenalty,Z_Param_successThreshold,Z_Param_speed,Z_Param_maxBranches); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranchTowards) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_coords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BranchTowards(Z_Param_coords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlimeDestination) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_coords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlimeDestination(Z_Param_coords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicMatPointer) \
	{ \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_dmp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicMatPointer(Z_Param_dmp); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execDynamicBranchAlgorithm) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_seedPos); \
		P_GET_PROPERTY(UIntProperty,Z_Param_segmentLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_branchProbability); \
		P_GET_PROPERTY(UIntProperty,Z_Param_generation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_generationPenalty); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_successThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxBranches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DynamicBranchAlgorithm(Z_Param_seedPos,Z_Param_segmentLength,Z_Param_branchProbability,Z_Param_generation,Z_Param_generationPenalty,Z_Param_successThreshold,Z_Param_speed,Z_Param_maxBranches); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranchAlgorithm) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_seedPos); \
		P_GET_STRUCT(FVector2D,Z_Param_target); \
		P_GET_PROPERTY(UIntProperty,Z_Param_segmentLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_branchProbability); \
		P_GET_PROPERTY(UIntProperty,Z_Param_generation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_generationPenalty); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_successThreshold); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_GET_PROPERTY(UIntProperty,Z_Param_maxBranches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BranchAlgorithm(Z_Param_seedPos,Z_Param_target,Z_Param_segmentLength,Z_Param_branchProbability,Z_Param_generation,Z_Param_generationPenalty,Z_Param_successThreshold,Z_Param_speed,Z_Param_maxBranches); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBranchTowards) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_coords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BranchTowards(Z_Param_coords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlimeDestination) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_coords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlimeDestination(Z_Param_coords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicMatPointer) \
	{ \
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_dmp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicMatPointer(Z_Param_dmp); \
		P_NATIVE_END; \
	} \
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
	FORCEINLINE static uint32 __PPO__MaterialDynamic() { return STRUCT_OFFSET(ARTManipulation, MaterialDynamic); } \
	FORCEINLINE static uint32 __PPO__MaterialDynamicPointer() { return STRUCT_OFFSET(ARTManipulation, MaterialDynamicPointer); }


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
