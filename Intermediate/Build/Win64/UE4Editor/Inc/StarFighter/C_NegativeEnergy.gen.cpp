// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/C_NegativeEnergy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_NegativeEnergy() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_NegativeEnergy_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AC_NegativeEnergy();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AC_NegativeEnergy::StaticRegisterNativesAC_NegativeEnergy()
	{
	}
	UClass* Z_Construct_UClass_AC_NegativeEnergy_NoRegister()
	{
		return AC_NegativeEnergy::StaticClass();
	}
	struct Z_Construct_UClass_AC_NegativeEnergy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_NegativeEnergy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMyCapsule,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_NegativeEnergy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_NegativeEnergy.h" },
		{ "ModuleRelativePath", "C_NegativeEnergy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_NegativeEnergy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_NegativeEnergy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_NegativeEnergy_Statics::ClassParams = {
		&AC_NegativeEnergy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_NegativeEnergy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_NegativeEnergy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_NegativeEnergy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_NegativeEnergy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_NegativeEnergy, 3653939588);
	template<> STARFIGHTER_API UClass* StaticClass<AC_NegativeEnergy>()
	{
		return AC_NegativeEnergy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_NegativeEnergy(Z_Construct_UClass_AC_NegativeEnergy, &AC_NegativeEnergy::StaticClass, TEXT("/Script/StarFighter"), TEXT("AC_NegativeEnergy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_NegativeEnergy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
