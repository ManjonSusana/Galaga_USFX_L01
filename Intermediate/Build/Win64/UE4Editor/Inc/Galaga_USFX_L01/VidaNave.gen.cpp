// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/VidaNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVidaNave() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AVidaNave_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AVidaNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveMejoras_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UNavesBuilder_NoRegister();
// End Cross Module References
	void AVidaNave::StaticRegisterNativesAVidaNave()
	{
	}
	UClass* Z_Construct_UClass_AVidaNave_NoRegister()
	{
		return AVidaNave::StaticClass();
	}
	struct Z_Construct_UClass_AVidaNave_Statics
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
	UObject* (*const Z_Construct_UClass_AVidaNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVidaNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VidaNave.h" },
		{ "ModuleRelativePath", "VidaNave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVidaNave_Statics::NewProp_NaveMejoras_MetaData[] = {
		{ "Category", "VidaNave" },
		{ "ModuleRelativePath", "VidaNave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVidaNave_Statics::NewProp_NaveMejoras = { "NaveMejoras", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVidaNave, NaveMejoras), Z_Construct_UClass_ANaveMejoras_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVidaNave_Statics::NewProp_NaveMejoras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVidaNave_Statics::NewProp_NaveMejoras_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVidaNave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVidaNave_Statics::NewProp_NaveMejoras,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVidaNave_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavesBuilder_NoRegister, (int32)VTABLE_OFFSET(AVidaNave, INavesBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVidaNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVidaNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVidaNave_Statics::ClassParams = {
		&AVidaNave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVidaNave_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVidaNave_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVidaNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVidaNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVidaNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVidaNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVidaNave, 925006892);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AVidaNave>()
	{
		return AVidaNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVidaNave(Z_Construct_UClass_AVidaNave, &AVidaNave::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AVidaNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVidaNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
