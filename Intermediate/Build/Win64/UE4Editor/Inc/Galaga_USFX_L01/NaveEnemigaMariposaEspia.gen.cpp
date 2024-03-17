// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaMariposaEspia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaMariposaEspia() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaMariposaEspia_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaMariposaEspia();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaMariposa();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaMariposaEspia::StaticRegisterNativesANaveEnemigaMariposaEspia()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaMariposaEspia_NoRegister()
	{
		return ANaveEnemigaMariposaEspia::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaMariposa,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaMariposaEspia.h" },
		{ "ModuleRelativePath", "NaveEnemigaMariposaEspia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaMariposaEspia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics::ClassParams = {
		&ANaveEnemigaMariposaEspia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaMariposaEspia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaMariposaEspia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaMariposaEspia, 4020594212);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaMariposaEspia>()
	{
		return ANaveEnemigaMariposaEspia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaMariposaEspia(Z_Construct_UClass_ANaveEnemigaMariposaEspia, &ANaveEnemigaMariposaEspia::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaMariposaEspia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaMariposaEspia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
