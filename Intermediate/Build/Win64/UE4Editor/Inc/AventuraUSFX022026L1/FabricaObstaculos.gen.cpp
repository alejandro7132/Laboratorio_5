// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaObstaculos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaObstaculos() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculos_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaObstaculos::StaticRegisterNativesAFabricaObstaculos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaObstaculos_NoRegister()
	{
		return AFabricaObstaculos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaObstaculos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaObstaculos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaObstaculos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Fabrica abstracta del patron ABSTRACT FACTORY. Declara como crear una FAMILIA completa de\n * obstaculos relacionados (uno fijo, uno movil y uno peligroso). Cada fabrica concreta produce\n * los tres productos de UNA misma familia, asi que el codigo cliente nunca mezcla familias y\n * tampoco conoce las clases concretas: solo usa esta interfaz y los productos abstractos.\n *\n * (A diferencia del Factory Method de AFabricaEnemigos, que crea un solo tipo de producto\n * con un unico metodo, aqui una fabrica ofrece varios metodos de creacion que forman una familia.)\n */" },
		{ "IncludePath", "FabricaObstaculos.h" },
		{ "ModuleRelativePath", "FabricaObstaculos.h" },
		{ "ToolTip", "Fabrica abstracta del patron ABSTRACT FACTORY. Declara como crear una FAMILIA completa de\nobstaculos relacionados (uno fijo, uno movil y uno peligroso). Cada fabrica concreta produce\nlos tres productos de UNA misma familia, asi que el codigo cliente nunca mezcla familias y\ntampoco conoce las clases concretas: solo usa esta interfaz y los productos abstractos.\n\n(A diferencia del Factory Method de AFabricaEnemigos, que crea un solo tipo de producto\ncon un unico metodo, aqui una fabrica ofrece varios metodos de creacion que forman una familia.)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaObstaculos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaObstaculos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaObstaculos_Statics::ClassParams = {
		&AFabricaObstaculos::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaObstaculos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaObstaculos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaObstaculos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaObstaculos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaObstaculos, 3698859433);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaObstaculos>()
	{
		return AFabricaObstaculos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaObstaculos(Z_Construct_UClass_AFabricaObstaculos, &AFabricaObstaculos::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaObstaculos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaObstaculos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
