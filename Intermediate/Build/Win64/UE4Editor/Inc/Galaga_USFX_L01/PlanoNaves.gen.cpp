// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/PlanoNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanoNaves() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UPlanoNaves_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UPlanoNaves();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UPlanoNaves::StaticRegisterNativesUPlanoNaves()
	{
	}
	UClass* Z_Construct_UClass_UPlanoNaves_NoRegister()
	{
		return UPlanoNaves::StaticClass();
	}
	struct Z_Construct_UClass_UPlanoNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanoNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanoNaves_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlanoNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanoNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlanoNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanoNaves_Statics::ClassParams = {
		&UPlanoNaves::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanoNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanoNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanoNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanoNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanoNaves, 1933732724);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UPlanoNaves>()
	{
		return UPlanoNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanoNaves(Z_Construct_UClass_UPlanoNaves, &UPlanoNaves::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UPlanoNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanoNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
