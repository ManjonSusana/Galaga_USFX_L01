// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ComponenteMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteMovimiento() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteMovimiento_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteMovimiento();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UComponenteMovimiento::StaticRegisterNativesUComponenteMovimiento()
	{
	}
	UClass* Z_Construct_UClass_UComponenteMovimiento_NoRegister()
	{
		return UComponenteMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limiteIzquierda_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_limiteIzquierda;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limiteDerecha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_limiteDerecha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_verificacion_MetaData[];
#endif
		static void NewProp_verificacion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_verificacion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteMovimiento.h" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_velocidad_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_velocidad = { "velocidad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMovimiento, velocidad), METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteIzquierda_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteIzquierda = { "limiteIzquierda", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMovimiento, limiteIzquierda), METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteIzquierda_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteIzquierda_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteDerecha_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteDerecha = { "limiteDerecha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMovimiento, limiteDerecha), METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteDerecha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteDerecha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_verificacion_MetaData[] = {
		{ "Category", "ComponenteMovimiento" },
		{ "ModuleRelativePath", "ComponenteMovimiento.h" },
	};
#endif
	void Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_verificacion_SetBit(void* Obj)
	{
		((UComponenteMovimiento*)Obj)->verificacion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_verificacion = { "verificacion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UComponenteMovimiento), &Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_verificacion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_verificacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_verificacion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteMovimiento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteIzquierda,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_limiteDerecha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimiento_Statics::NewProp_verificacion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteMovimiento_Statics::ClassParams = {
		&UComponenteMovimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComponenteMovimiento_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteMovimiento, 3007805556);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UComponenteMovimiento>()
	{
		return UComponenteMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteMovimiento(Z_Construct_UClass_UComponenteMovimiento, &UComponenteMovimiento::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UComponenteMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
