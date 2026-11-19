// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoTroncoRodante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoTroncoRodante() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoTroncoRodante_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoTroncoRodante();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoMovil();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoTroncoRodante::StaticRegisterNativesAObstaculoTroncoRodante()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoTroncoRodante_NoRegister()
	{
		return AObstaculoTroncoRodante::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoTroncoRodante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoTroncoRodante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoMovil,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoTroncoRodante_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Tronco rodante (obstaculo Movil de la familia Terrestre).\n */" },
		{ "IncludePath", "ObstaculoTroncoRodante.h" },
		{ "ModuleRelativePath", "ObstaculoTroncoRodante.h" },
		{ "ToolTip", "Producto concreto: Tronco rodante (obstaculo Movil de la familia Terrestre)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoTroncoRodante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoTroncoRodante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoTroncoRodante_Statics::ClassParams = {
		&AObstaculoTroncoRodante::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoTroncoRodante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoTroncoRodante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoTroncoRodante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoTroncoRodante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoTroncoRodante, 2545634618);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoTroncoRodante>()
	{
		return AObstaculoTroncoRodante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoTroncoRodante(Z_Construct_UClass_AObstaculoTroncoRodante, &AObstaculoTroncoRodante::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoTroncoRodante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoTroncoRodante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
