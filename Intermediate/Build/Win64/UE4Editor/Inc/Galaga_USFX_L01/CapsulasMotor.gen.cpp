// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/CapsulasMotor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulasMotor() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulasMotor_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulasMotor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ACapsulasMotor::StaticRegisterNativesACapsulasMotor()
	{
	}
	UClass* Z_Construct_UClass_ACapsulasMotor_NoRegister()
	{
		return ACapsulasMotor::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulasMotor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulasMotor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulasMotor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsulasMotor.h" },
		{ "ModuleRelativePath", "CapsulasMotor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulasMotor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulasMotor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulasMotor_Statics::ClassParams = {
		&ACapsulasMotor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulasMotor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulasMotor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulasMotor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulasMotor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulasMotor, 53991569);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ACapsulasMotor>()
	{
		return ACapsulasMotor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulasMotor(Z_Construct_UClass_ACapsulasMotor, &ACapsulasMotor::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ACapsulasMotor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulasMotor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
