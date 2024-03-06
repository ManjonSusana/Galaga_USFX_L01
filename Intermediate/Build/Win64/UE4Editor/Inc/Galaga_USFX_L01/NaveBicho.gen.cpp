// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveBicho.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveBicho() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveBicho_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveBicho();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveBicho::StaticRegisterNativesANaveBicho()
	{
	}
	UClass* Z_Construct_UClass_ANaveBicho_NoRegister()
	{
		return ANaveBicho::StaticClass();
	}
	struct Z_Construct_UClass_ANaveBicho_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveBicho_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveBicho_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveBicho.h" },
		{ "ModuleRelativePath", "NaveBicho.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveBicho_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveBicho>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveBicho_Statics::ClassParams = {
		&ANaveBicho::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveBicho_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveBicho_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveBicho()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveBicho_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveBicho, 2202817120);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveBicho>()
	{
		return ANaveBicho::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveBicho(Z_Construct_UClass_ANaveBicho, &ANaveBicho::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveBicho"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveBicho);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
