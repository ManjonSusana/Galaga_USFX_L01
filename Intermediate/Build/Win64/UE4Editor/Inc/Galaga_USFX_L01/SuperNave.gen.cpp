// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/SuperNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperNave() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ASuperNave_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ASuperNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveMejoras_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UNavesBuilder_NoRegister();
// End Cross Module References
	void ASuperNave::StaticRegisterNativesASuperNave()
	{
	}
	UClass* Z_Construct_UClass_ASuperNave_NoRegister()
	{
		return ASuperNave::StaticClass();
	}
	struct Z_Construct_UClass_ASuperNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveMejoras_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NaveMejoras;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SuperNave.h" },
		{ "ModuleRelativePath", "SuperNave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperNave_Statics::NewProp_NaveMejoras_MetaData[] = {
		{ "Category", "SuperNave" },
		{ "ModuleRelativePath", "SuperNave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperNave_Statics::NewProp_NaveMejoras = { "NaveMejoras", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperNave, NaveMejoras), Z_Construct_UClass_ANaveMejoras_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASuperNave_Statics::NewProp_NaveMejoras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperNave_Statics::NewProp_NaveMejoras_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuperNave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperNave_Statics::NewProp_NaveMejoras,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASuperNave_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavesBuilder_NoRegister, (int32)VTABLE_OFFSET(ASuperNave, INavesBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASuperNave_Statics::ClassParams = {
		&ASuperNave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASuperNave_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASuperNave_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASuperNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASuperNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASuperNave, 2196951371);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ASuperNave>()
	{
		return ASuperNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASuperNave(Z_Construct_UClass_ASuperNave, &ASuperNave::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ASuperNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
