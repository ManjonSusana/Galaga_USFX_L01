// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/MotorNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotorNave() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AMotorNave_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AMotorNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveMejoras_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UNavesBuilder_NoRegister();
// End Cross Module References
	void AMotorNave::StaticRegisterNativesAMotorNave()
	{
	}
	UClass* Z_Construct_UClass_AMotorNave_NoRegister()
	{
		return AMotorNave::StaticClass();
	}
	struct Z_Construct_UClass_AMotorNave_Statics
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
	UObject* (*const Z_Construct_UClass_AMotorNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotorNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotorNave.h" },
		{ "ModuleRelativePath", "MotorNave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotorNave_Statics::NewProp_NaveMejoras_MetaData[] = {
		{ "Category", "MotorNave" },
		{ "ModuleRelativePath", "MotorNave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotorNave_Statics::NewProp_NaveMejoras = { "NaveMejoras", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotorNave, NaveMejoras), Z_Construct_UClass_ANaveMejoras_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotorNave_Statics::NewProp_NaveMejoras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotorNave_Statics::NewProp_NaveMejoras_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotorNave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotorNave_Statics::NewProp_NaveMejoras,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMotorNave_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavesBuilder_NoRegister, (int32)VTABLE_OFFSET(AMotorNave, INavesBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotorNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotorNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotorNave_Statics::ClassParams = {
		&AMotorNave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMotorNave_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotorNave_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotorNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotorNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotorNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotorNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMotorNave, 948455654);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AMotorNave>()
	{
		return AMotorNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotorNave(Z_Construct_UClass_AMotorNave, &AMotorNave::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("AMotorNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotorNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
