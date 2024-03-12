// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaAbejaVenenosa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaAbejaVenenosa() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaAbejaVenenosa();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaAbeja();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaAbejaVenenosa::StaticRegisterNativesANaveEnemigaAbejaVenenosa()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_NoRegister()
	{
		return ANaveEnemigaAbejaVenenosa::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaAbeja,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaAbejaVenenosa.h" },
		{ "ModuleRelativePath", "NaveEnemigaAbejaVenenosa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaAbejaVenenosa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics::ClassParams = {
		&ANaveEnemigaAbejaVenenosa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaAbejaVenenosa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaAbejaVenenosa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaAbejaVenenosa, 670791300);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaAbejaVenenosa>()
	{
		return ANaveEnemigaAbejaVenenosa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaAbejaVenenosa(Z_Construct_UClass_ANaveEnemigaAbejaVenenosa, &ANaveEnemigaAbejaVenenosa::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaAbejaVenenosa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaAbejaVenenosa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
