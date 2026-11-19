// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/Obstaculo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculo_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObstaculo::StaticRegisterNativesAObstaculo()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_NoRegister()
	{
		return AObstaculo::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NombreObstaculo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NombreObstaculo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Familia_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Familia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Raiz_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Raiz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto abstracto raiz del patron ABSTRACT FACTORY. Todo obstaculo tiene una malla,\n * un nombre, una familia (Terrestre, Acuatico, Aereo o Subterraneo) y un tipo\n * (Fijo, Movil o Peligroso) que define cada clase intermedia.\n */" },
		{ "IncludePath", "Obstaculo.h" },
		{ "ModuleRelativePath", "Obstaculo.h" },
		{ "ToolTip", "Producto abstracto raiz del patron ABSTRACT FACTORY. Todo obstaculo tiene una malla,\nun nombre, una familia (Terrestre, Acuatico, Aereo o Subterraneo) y un tipo\n(Fijo, Movil o Peligroso) que define cada clase intermedia." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Statics::NewProp_NombreObstaculo_MetaData[] = {
		{ "Category", "Obstaculo" },
		{ "ModuleRelativePath", "Obstaculo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AObstaculo_Statics::NewProp_NombreObstaculo = { "NombreObstaculo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculo, NombreObstaculo), METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Statics::NewProp_NombreObstaculo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::NewProp_NombreObstaculo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Statics::NewProp_Familia_MetaData[] = {
		{ "Category", "Obstaculo" },
		{ "Comment", "// Familia a la que pertenece: la fija la fabrica concreta que lo crea\n" },
		{ "ModuleRelativePath", "Obstaculo.h" },
		{ "ToolTip", "Familia a la que pertenece: la fija la fabrica concreta que lo crea" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AObstaculo_Statics::NewProp_Familia = { "Familia", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculo, Familia), METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Statics::NewProp_Familia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::NewProp_Familia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Statics::NewProp_Raiz_MetaData[] = {
		{ "Category", "Obstaculo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstaculo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculo_Statics::NewProp_Raiz = { "Raiz", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculo, Raiz), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Statics::NewProp_Raiz_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::NewProp_Raiz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Statics::NewProp_Malla_MetaData[] = {
		{ "Category", "Obstaculo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstaculo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculo_Statics::NewProp_Malla = { "Malla", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculo, Malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Statics::NewProp_Malla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::NewProp_Malla_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Statics::NewProp_NombreObstaculo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Statics::NewProp_Familia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Statics::NewProp_Raiz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Statics::NewProp_Malla,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Statics::ClassParams = {
		&AObstaculo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo, 1660144894);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculo>()
	{
		return AObstaculo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo(Z_Construct_UClass_AObstaculo, &AObstaculo::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
