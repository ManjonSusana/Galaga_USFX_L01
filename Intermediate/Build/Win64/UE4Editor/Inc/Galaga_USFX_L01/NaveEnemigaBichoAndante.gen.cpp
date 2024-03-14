// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaBichoAndante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaBichoAndante() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaBichoAndante_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaBichoAndante();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaBicho();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaBichoAndante::StaticRegisterNativesANaveEnemigaBichoAndante()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaBichoAndante_NoRegister()
	{
		return ANaveEnemigaBichoAndante::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaBicho,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigaBichoAndante.h" },
		{ "ModuleRelativePath", "NaveEnemigaBichoAndante.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaBichoAndante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics::ClassParams = {
		&ANaveEnemigaBichoAndante::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaBichoAndante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaBichoAndante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaBichoAndante, 3911287616);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaBichoAndante>()
	{
		return ANaveEnemigaBichoAndante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaBichoAndante(Z_Construct_UClass_ANaveEnemigaBichoAndante, &ANaveEnemigaBichoAndante::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaBichoAndante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaBichoAndante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
