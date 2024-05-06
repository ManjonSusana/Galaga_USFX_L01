// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveMejoras.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveMejoras() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveMejoras_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveMejoras();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UPlanoNaves_NoRegister();
// End Cross Module References
	void ANaveMejoras::StaticRegisterNativesANaveMejoras()
	{
	}
	UClass* Z_Construct_UClass_ANaveMejoras_NoRegister()
	{
		return ANaveMejoras::StaticClass();
	}
	struct Z_Construct_UClass_ANaveMejoras_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VidaNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VidaNave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VelocidadNave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmaNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArmaNave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaNave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaNave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveMejoras_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveMejoras_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveMejoras.h" },
		{ "ModuleRelativePath", "NaveMejoras.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VidaNave_MetaData[] = {
		{ "Category", "VidaNave" },
		{ "ModuleRelativePath", "NaveMejoras.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VidaNave = { "VidaNave", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveMejoras, VidaNave), METADATA_PARAMS(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VidaNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VidaNave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VelocidadNave_MetaData[] = {
		{ "Category", "MotorNave" },
		{ "ModuleRelativePath", "NaveMejoras.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VelocidadNave = { "VelocidadNave", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveMejoras, VelocidadNave), METADATA_PARAMS(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VelocidadNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VelocidadNave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveMejoras_Statics::NewProp_ArmaNave_MetaData[] = {
		{ "Category", "ArmaNave" },
		{ "ModuleRelativePath", "NaveMejoras.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANaveMejoras_Statics::NewProp_ArmaNave = { "ArmaNave", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveMejoras, ArmaNave), METADATA_PARAMS(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_ArmaNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_ArmaNave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveMejoras_Statics::NewProp_MallaNave_MetaData[] = {
		{ "Category", "MallaNave" },
		{ "Comment", "//MALLA NAVEMEJORAS\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveMejoras.h" },
		{ "ToolTip", "MALLA NAVEMEJORAS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveMejoras_Statics::NewProp_MallaNave = { "MallaNave", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveMejoras, MallaNave), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_MallaNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMejoras_Statics::NewProp_MallaNave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveMejoras_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VidaNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveMejoras_Statics::NewProp_VelocidadNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveMejoras_Statics::NewProp_ArmaNave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveMejoras_Statics::NewProp_MallaNave,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveMejoras_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlanoNaves_NoRegister, (int32)VTABLE_OFFSET(ANaveMejoras, IPlanoNaves), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveMejoras_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveMejoras>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveMejoras_Statics::ClassParams = {
		&ANaveMejoras::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveMejoras_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMejoras_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveMejoras_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveMejoras_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveMejoras()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveMejoras_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveMejoras, 3372442728);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveMejoras>()
	{
		return ANaveMejoras::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveMejoras(Z_Construct_UClass_ANaveMejoras, &ANaveMejoras::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveMejoras"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveMejoras);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
