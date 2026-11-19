// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/AventuraUSFX022026L1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAventuraUSFX022026L1GameMode() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculo_NoRegister();
// End Cross Module References
	void AAventuraUSFX022026L1GameMode::StaticRegisterNativesAAventuraUSFX022026L1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode_NoRegister()
	{
		return AAventuraUSFX022026L1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstaculosPorFamilia_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObstaculosPorFamilia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlturaObstaculos_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlturaObstaculos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanciaZonas_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanciaZonas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioZona_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioZona;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obstaculos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Obstaculos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Obstaculos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ModuleRelativePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_ObstaculosPorFamilia_MetaData[] = {
		{ "Category", "Obstaculos" },
		{ "Comment", "// Cuantos obstaculos coloca cada fabrica (se reparten en fijo, movil y peligroso)\n" },
		{ "ModuleRelativePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ToolTip", "Cuantos obstaculos coloca cada fabrica (se reparten en fijo, movil y peligroso)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_ObstaculosPorFamilia = { "ObstaculosPorFamilia", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAventuraUSFX022026L1GameMode, ObstaculosPorFamilia), METADATA_PARAMS(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_ObstaculosPorFamilia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_ObstaculosPorFamilia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_AlturaObstaculos_MetaData[] = {
		{ "Category", "Obstaculos" },
		{ "Comment", "// Altura (Z) a la que se colocan los obstaculos\n" },
		{ "ModuleRelativePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ToolTip", "Altura (Z) a la que se colocan los obstaculos" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_AlturaObstaculos = { "AlturaObstaculos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAventuraUSFX022026L1GameMode, AlturaObstaculos), METADATA_PARAMS(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_AlturaObstaculos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_AlturaObstaculos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_DistanciaZonas_MetaData[] = {
		{ "Category", "Obstaculos" },
		{ "Comment", "// Distancia desde el centro del escenario hasta el centro de cada zona\n" },
		{ "ModuleRelativePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ToolTip", "Distancia desde el centro del escenario hasta el centro de cada zona" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_DistanciaZonas = { "DistanciaZonas", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAventuraUSFX022026L1GameMode, DistanciaZonas), METADATA_PARAMS(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_DistanciaZonas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_DistanciaZonas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_RadioZona_MetaData[] = {
		{ "Category", "Obstaculos" },
		{ "Comment", "// Mitad del lado de cada zona cuadrada donde se reparten los obstaculos\n" },
		{ "ModuleRelativePath", "AventuraUSFX022026L1GameMode.h" },
		{ "ToolTip", "Mitad del lado de cada zona cuadrada donde se reparten los obstaculos" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_RadioZona = { "RadioZona", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAventuraUSFX022026L1GameMode, RadioZona), METADATA_PARAMS(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_RadioZona_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_RadioZona_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_Obstaculos_Inner = { "Obstaculos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObstaculo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_Obstaculos_MetaData[] = {
		{ "ModuleRelativePath", "AventuraUSFX022026L1GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_Obstaculos = { "Obstaculos", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAventuraUSFX022026L1GameMode, Obstaculos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_Obstaculos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_Obstaculos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_ObstaculosPorFamilia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_AlturaObstaculos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_DistanciaZonas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_RadioZona,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_Obstaculos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::NewProp_Obstaculos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAventuraUSFX022026L1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::ClassParams = {
		&AAventuraUSFX022026L1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAventuraUSFX022026L1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAventuraUSFX022026L1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAventuraUSFX022026L1GameMode, 1507936081);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AAventuraUSFX022026L1GameMode>()
	{
		return AAventuraUSFX022026L1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAventuraUSFX022026L1GameMode(Z_Construct_UClass_AAventuraUSFX022026L1GameMode, &AAventuraUSFX022026L1GameMode::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AAventuraUSFX022026L1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAventuraUSFX022026L1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
