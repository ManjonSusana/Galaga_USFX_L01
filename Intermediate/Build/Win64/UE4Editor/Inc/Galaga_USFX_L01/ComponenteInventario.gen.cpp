// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ComponenteInventario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteInventario() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteInventario_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UComponenteInventario();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulasMotor_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACapsulaArma_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComponenteInventario::execRemoverDeInventarioArma)
	{
		P_GET_OBJECT(ACapsulaArma,Z_Param_RemoverCapsulaArma);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoverDeInventarioArma(Z_Param_RemoverCapsulaArma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponenteInventario::execRemoverDeInventario)
	{
		P_GET_OBJECT(ACapsulasMotor,Z_Param_RemoverCapsula);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoverDeInventario(Z_Param_RemoverCapsula);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponenteInventario::execAgregarAlInventarioArma)
	{
		P_GET_OBJECT(ACapsulaArma,Z_Param_AgregarCapsulaArma);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AgregarAlInventarioArma(Z_Param_AgregarCapsulaArma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComponenteInventario::execAgregarAlInventario)
	{
		P_GET_OBJECT(ACapsulasMotor,Z_Param_AgregarCapsula);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AgregarAlInventario(Z_Param_AgregarCapsula);
		P_NATIVE_END;
	}
	void UComponenteInventario::StaticRegisterNativesUComponenteInventario()
	{
		UClass* Class = UComponenteInventario::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AgregarAlInventario", &UComponenteInventario::execAgregarAlInventario },
			{ "AgregarAlInventarioArma", &UComponenteInventario::execAgregarAlInventarioArma },
			{ "RemoverDeInventario", &UComponenteInventario::execRemoverDeInventario },
			{ "RemoverDeInventarioArma", &UComponenteInventario::execRemoverDeInventarioArma },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics
	{
		struct ComponenteInventario_eventAgregarAlInventario_Parms
		{
			ACapsulasMotor* AgregarCapsula;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgregarCapsula;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::NewProp_AgregarCapsula = { "AgregarCapsula", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteInventario_eventAgregarAlInventario_Parms, AgregarCapsula), Z_Construct_UClass_ACapsulasMotor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteInventario_eventAgregarAlInventario_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::NewProp_AgregarCapsula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteInventario.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteInventario, nullptr, "AgregarAlInventario", nullptr, nullptr, sizeof(ComponenteInventario_eventAgregarAlInventario_Parms), Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics
	{
		struct ComponenteInventario_eventAgregarAlInventarioArma_Parms
		{
			ACapsulaArma* AgregarCapsulaArma;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgregarCapsulaArma;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::NewProp_AgregarCapsulaArma = { "AgregarCapsulaArma", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteInventario_eventAgregarAlInventarioArma_Parms, AgregarCapsulaArma), Z_Construct_UClass_ACapsulaArma_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteInventario_eventAgregarAlInventarioArma_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::NewProp_AgregarCapsulaArma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteInventario.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteInventario, nullptr, "AgregarAlInventarioArma", nullptr, nullptr, sizeof(ComponenteInventario_eventAgregarAlInventarioArma_Parms), Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics
	{
		struct ComponenteInventario_eventRemoverDeInventario_Parms
		{
			ACapsulasMotor* RemoverCapsula;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoverCapsula;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::NewProp_RemoverCapsula = { "RemoverCapsula", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteInventario_eventRemoverDeInventario_Parms, RemoverCapsula), Z_Construct_UClass_ACapsulasMotor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::NewProp_RemoverCapsula,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteInventario.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteInventario, nullptr, "RemoverDeInventario", nullptr, nullptr, sizeof(ComponenteInventario_eventRemoverDeInventario_Parms), Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics
	{
		struct ComponenteInventario_eventRemoverDeInventarioArma_Parms
		{
			ACapsulaArma* RemoverCapsulaArma;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoverCapsulaArma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::NewProp_RemoverCapsulaArma = { "RemoverCapsulaArma", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComponenteInventario_eventRemoverDeInventarioArma_Parms, RemoverCapsulaArma), Z_Construct_UClass_ACapsulaArma_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::NewProp_RemoverCapsulaArma,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ComponenteInventario.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComponenteInventario, nullptr, "RemoverDeInventarioArma", nullptr, nullptr, sizeof(ComponenteInventario_eventRemoverDeInventarioArma_Parms), Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComponenteInventario_NoRegister()
	{
		return UComponenteInventario::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteInventario_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInventoryArma_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInventoryArma_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentInventoryArma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteInventario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComponenteInventario_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComponenteInventario_AgregarAlInventario, "AgregarAlInventario" }, // 1009528095
		{ &Z_Construct_UFunction_UComponenteInventario_AgregarAlInventarioArma, "AgregarAlInventarioArma" }, // 2079314507
		{ &Z_Construct_UFunction_UComponenteInventario_RemoverDeInventario, "RemoverDeInventario" }, // 3821118691
		{ &Z_Construct_UFunction_UComponenteInventario_RemoverDeInventarioArma, "RemoverDeInventarioArma" }, // 4112507524
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteInventario_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteInventario.h" },
		{ "ModuleRelativePath", "ComponenteInventario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventory_Inner = { "CurrentInventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACapsulasMotor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventory_MetaData[] = {
		{ "ModuleRelativePath", "ComponenteInventario.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventory = { "CurrentInventory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteInventario, CurrentInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventoryArma_Inner = { "CurrentInventoryArma", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACapsulaArma_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventoryArma_MetaData[] = {
		{ "ModuleRelativePath", "ComponenteInventario.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventoryArma = { "CurrentInventoryArma", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteInventario, CurrentInventoryArma), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventoryArma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventoryArma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventoryArma_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteInventario_Statics::NewProp_CurrentInventoryArma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteInventario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteInventario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteInventario_Statics::ClassParams = {
		&UComponenteInventario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComponenteInventario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteInventario_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteInventario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteInventario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteInventario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteInventario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteInventario, 3239231360);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UComponenteInventario>()
	{
		return UComponenteInventario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteInventario(Z_Construct_UClass_UComponenteInventario, &UComponenteInventario::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("UComponenteInventario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteInventario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
