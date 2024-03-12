// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Nivel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivel() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANivel_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANivel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANivel::StaticRegisterNativesANivel()
	{
	}
	UClass* Z_Construct_UClass_ANivel_NoRegister()
	{
		return ANivel::StaticClass();
	}
	struct Z_Construct_UClass_ANivel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaNivel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaNivel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nivel.h" },
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_Statics::NewProp_mallaNivel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nivel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANivel_Statics::NewProp_mallaNivel = { "mallaNivel", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANivel, mallaNivel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANivel_Statics::NewProp_mallaNivel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::NewProp_mallaNivel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANivel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANivel_Statics::NewProp_mallaNivel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivel_Statics::ClassParams = {
		&ANivel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANivel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANivel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivel, 4251503933);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANivel>()
	{
		return ANivel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivel(Z_Construct_UClass_ANivel, &ANivel::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANivel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
