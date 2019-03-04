// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slime/RTManipulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTManipulation() {}
// Cross Module References
	SLIME_API UClass* Z_Construct_UClass_ARTManipulation_NoRegister();
	SLIME_API UClass* Z_Construct_UClass_ARTManipulation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Slime();
	SLIME_API UFunction* Z_Construct_UFunction_ARTManipulation_BranchAlgorithm();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLIME_API UFunction* Z_Construct_UFunction_ARTManipulation_SetDynamicMat();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SLIME_API UFunction* Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer();
	SLIME_API UFunction* Z_Construct_UFunction_ARTManipulation_SetSlimeDestination();
// End Cross Module References
	void ARTManipulation::StaticRegisterNativesARTManipulation()
	{
		UClass* Class = ARTManipulation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BranchAlgorithm", &ARTManipulation::execBranchAlgorithm },
			{ "SetDynamicMat", &ARTManipulation::execSetDynamicMat },
			{ "SetDynamicMatPointer", &ARTManipulation::execSetDynamicMatPointer },
			{ "SetSlimeDestination", &ARTManipulation::execSetSlimeDestination },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics
	{
		struct RTManipulation_eventBranchAlgorithm_Parms
		{
			FVector2D seedPos;
			FVector2D target;
			int32 segmentLength;
			float branchProbability;
			int32 generation;
			float generationPenalty;
			float successThreshold;
			float speed;
			int32 maxBranches;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxBranches;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_successThreshold;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_generationPenalty;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_generation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_branchProbability;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_segmentLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_seedPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_maxBranches = { UE4CodeGen_Private::EPropertyClass::Int, "maxBranches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, maxBranches), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_speed = { UE4CodeGen_Private::EPropertyClass::Float, "speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_successThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "successThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, successThreshold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_generationPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "generationPenalty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, generationPenalty), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_generation = { UE4CodeGen_Private::EPropertyClass::Int, "generation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, generation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_branchProbability = { UE4CodeGen_Private::EPropertyClass::Float, "branchProbability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, branchProbability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_segmentLength = { UE4CodeGen_Private::EPropertyClass::Int, "segmentLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, segmentLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_target = { UE4CodeGen_Private::EPropertyClass::Struct, "target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, target), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_seedPos = { UE4CodeGen_Private::EPropertyClass::Struct, "seedPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventBranchAlgorithm_Parms, seedPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_maxBranches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_successThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_generationPenalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_generation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_branchProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_segmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::NewProp_seedPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charlie" },
		{ "ModuleRelativePath", "RTManipulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTManipulation, "BranchAlgorithm", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04840401, sizeof(RTManipulation_eventBranchAlgorithm_Parms), Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTManipulation_BranchAlgorithm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTManipulation_BranchAlgorithm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics
	{
		struct RTManipulation_eventSetDynamicMat_Parms
		{
			UMaterialInstanceDynamic* dm;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::NewProp_dm = { UE4CodeGen_Private::EPropertyClass::Object, "dm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventSetDynamicMat_Parms, dm), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::NewProp_dm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charlie" },
		{ "ModuleRelativePath", "RTManipulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTManipulation, "SetDynamicMat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(RTManipulation_eventSetDynamicMat_Parms), Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTManipulation_SetDynamicMat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTManipulation_SetDynamicMat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics
	{
		struct RTManipulation_eventSetDynamicMatPointer_Parms
		{
			UMaterialInstanceDynamic* dmp;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dmp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::NewProp_dmp = { UE4CodeGen_Private::EPropertyClass::Object, "dmp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventSetDynamicMatPointer_Parms, dmp), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::NewProp_dmp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charlie" },
		{ "ModuleRelativePath", "RTManipulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTManipulation, "SetDynamicMatPointer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(RTManipulation_eventSetDynamicMatPointer_Parms), Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics
	{
		struct RTManipulation_eventSetSlimeDestination_Parms
		{
			FVector2D coords;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_coords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::NewProp_coords = { UE4CodeGen_Private::EPropertyClass::Struct, "coords", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RTManipulation_eventSetSlimeDestination_Parms, coords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::NewProp_coords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "Charlie" },
		{ "ModuleRelativePath", "RTManipulation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTManipulation, "SetSlimeDestination", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04840401, sizeof(RTManipulation_eventSetSlimeDestination_Parms), Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARTManipulation_SetSlimeDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARTManipulation_SetSlimeDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARTManipulation_NoRegister()
	{
		return ARTManipulation::StaticClass();
	}
	struct Z_Construct_UClass_ARTManipulation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDynamicPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialDynamicPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialDynamic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTManipulation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Slime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTManipulation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTManipulation_BranchAlgorithm, "BranchAlgorithm" }, // 3831546887
		{ &Z_Construct_UFunction_ARTManipulation_SetDynamicMat, "SetDynamicMat" }, // 4174850716
		{ &Z_Construct_UFunction_ARTManipulation_SetDynamicMatPointer, "SetDynamicMatPointer" }, // 3144585454
		{ &Z_Construct_UFunction_ARTManipulation_SetSlimeDestination, "SetSlimeDestination" }, // 1357294582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTManipulation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RTManipulation.h" },
		{ "ModuleRelativePath", "RTManipulation.h" },
		{ "ToolTip", "class FRenderTarget;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamicPointer_MetaData[] = {
		{ "Category", "Charlie" },
		{ "ModuleRelativePath", "RTManipulation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamicPointer = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialDynamicPointer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ARTManipulation, MaterialDynamicPointer), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamicPointer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamicPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamic_MetaData[] = {
		{ "Category", "Charlie" },
		{ "ModuleRelativePath", "RTManipulation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamic = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialDynamic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ARTManipulation, MaterialDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamic_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTManipulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamicPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTManipulation_Statics::NewProp_MaterialDynamic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTManipulation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTManipulation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARTManipulation_Statics::ClassParams = {
		&ARTManipulation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ARTManipulation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARTManipulation_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARTManipulation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARTManipulation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTManipulation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARTManipulation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARTManipulation, 2200601820);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARTManipulation(Z_Construct_UClass_ARTManipulation, &ARTManipulation::StaticClass, TEXT("/Script/Slime"), TEXT("ARTManipulation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTManipulation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
