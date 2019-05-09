// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slime/SlimeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlimeGameMode() {}
// Cross Module References
	SLIME_API UClass* Z_Construct_UClass_ASlimeGameMode_NoRegister();
	SLIME_API UClass* Z_Construct_UClass_ASlimeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Slime();
// End Cross Module References
	void ASlimeGameMode::StaticRegisterNativesASlimeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASlimeGameMode_NoRegister()
	{
		return ASlimeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASlimeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlimeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlimeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SlimeGameMode.h" },
		{ "ModuleRelativePath", "SlimeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlimeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlimeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlimeGameMode_Statics::ClassParams = {
		&ASlimeGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASlimeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlimeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlimeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlimeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlimeGameMode, 3578296742);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlimeGameMode(Z_Construct_UClass_ASlimeGameMode, &ASlimeGameMode::StaticClass, TEXT("/Script/Slime"), TEXT("ASlimeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlimeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
