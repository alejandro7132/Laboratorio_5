// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoVagoneta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoVagoneta() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoVagoneta_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoVagoneta();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoMovil();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoVagoneta::StaticRegisterNativesAObstaculoVagoneta()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoVagoneta_NoRegister()
	{
		return AObstaculoVagoneta::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoVagoneta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoVagoneta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoMovil,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoVagoneta_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Vagoneta (obstaculo Movil de la familia Subterraneo).\n */" },
		{ "IncludePath", "ObstaculoVagoneta.h" },
		{ "ModuleRelativePath", "ObstaculoVagoneta.h" },
		{ "ToolTip", "Producto concreto: Vagoneta (obstaculo Movil de la familia Subterraneo)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoVagoneta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoVagoneta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoVagoneta_Statics::ClassParams = {
		&AObstaculoVagoneta::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoVagoneta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoVagoneta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoVagoneta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoVagoneta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoVagoneta, 3310543318);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoVagoneta>()
	{
		return AObstaculoVagoneta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoVagoneta(Z_Construct_UClass_AObstaculoVagoneta, &AObstaculoVagoneta::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoVagoneta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoVagoneta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
