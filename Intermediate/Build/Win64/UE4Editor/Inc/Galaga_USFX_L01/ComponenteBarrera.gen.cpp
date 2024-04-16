// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ComponenteBarrera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteBarrera() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteBarrera_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteBarrera();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponenteBarrera::execCrearBarrerra)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearBarrerra();
		P_NATIVE_END;
	}
	void UComponenteBarrera::StaticRegisterNativesUComponenteBarrera()
	{
		UClass* Class = UComponenteBarrera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearBarrerra", &UComponenteBarrera::execCrearBarrerra },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra_Statics::Function_MetaDataParams[] = {
		{ "Category", "Barrera" },
		{ "Comment", "//Funcion que se puede llamar desde blueprints para activar la barrera\n" },
		{ "ModuleRelativePath", "ComponenteBarrera.h" },
		{ "ToolTip", "Funcion que se puede llamar desde blueprints para activar la barrera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteBarrera, nullptr, "CrearBarrerra", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteBarrera_NoRegister()
	{
		return UComponenteBarrera::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteBarrera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreraToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BarreraToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteBarrera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteBarrera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteBarrera_CrearBarrerra, "CrearBarrerra" }, // 2409705279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteBarrera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ComponenteBarrera.h" },
		{ "ModuleRelativePath", "ComponenteBarrera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteBarrera_Statics::NewProp_BarreraToSpawn_MetaData[] = {
		{ "Category", "ComponenteBarrera" },
		{ "Comment", "//Funcion que instancia una barrera en la posicion del componente\n//\n" },
		{ "ModuleRelativePath", "ComponenteBarrera.h" },
		{ "ToolTip", "Funcion que instancia una barrera en la posicion del componente" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UComponenteBarrera_Statics::NewProp_BarreraToSpawn = { "BarreraToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteBarrera, BarreraToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UComponenteBarrera_Statics::NewProp_BarreraToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteBarrera_Statics::NewProp_BarreraToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteBarrera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteBarrera_Statics::NewProp_BarreraToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteBarrera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteBarrera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteBarrera_Statics::ClassParams = {
		&UComponenteBarrera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComponenteBarrera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteBarrera_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteBarrera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteBarrera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteBarrera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteBarrera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteBarrera, 487981632);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UComponenteBarrera>()
	{
		return UComponenteBarrera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteBarrera(Z_Construct_UClass_UComponenteBarrera, &UComponenteBarrera::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UComponenteBarrera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteBarrera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
