// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PJ_BulletEnemyLevel1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJ_BulletEnemyLevel1() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APJ_BulletEnemyLevel1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APJ_BulletEnemyLevel1();
	STARFIGHTER_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APJ_BulletEnemyLevel1::StaticRegisterNativesAPJ_BulletEnemyLevel1()
	{
	}
	UClass* Z_Construct_UClass_APJ_BulletEnemyLevel1_NoRegister()
	{
		return APJ_BulletEnemyLevel1::StaticClass();
	}
	struct Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PJ_BulletEnemyLevel1.h" },
		{ "ModuleRelativePath", "PJ_BulletEnemyLevel1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APJ_BulletEnemyLevel1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics::ClassParams = {
		&APJ_BulletEnemyLevel1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APJ_BulletEnemyLevel1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APJ_BulletEnemyLevel1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APJ_BulletEnemyLevel1, 3436371080);
	template<> STARFIGHTER_API UClass* StaticClass<APJ_BulletEnemyLevel1>()
	{
		return APJ_BulletEnemyLevel1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APJ_BulletEnemyLevel1(Z_Construct_UClass_APJ_BulletEnemyLevel1, &APJ_BulletEnemyLevel1::StaticClass, TEXT("/Script/StarFighter"), TEXT("APJ_BulletEnemyLevel1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APJ_BulletEnemyLevel1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
