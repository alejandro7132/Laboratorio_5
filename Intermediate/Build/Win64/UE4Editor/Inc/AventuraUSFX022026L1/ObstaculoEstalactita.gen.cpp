// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoEstalactita.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoEstalactita() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoEstalactita_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoEstalactita();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoFijo();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoEstalactita::StaticRegisterNativesAObstaculoEstalactita()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoEstalactita_NoRegister()
	{
		return AObstaculoEstalactita::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoEstalactita_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoEstalactita_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoFijo,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoEstalactita_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Estalactita (obstaculo Fijo de la familia Subterraneo).\n */" },
		{ "IncludePath", "ObstaculoEstalactita.h" },
		{ "ModuleRelativePath", "ObstaculoEstalactita.h" },
		{ "ToolTip", "Producto concreto: Estalactita (obstaculo Fijo de la familia Subterraneo)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoEstalactita_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoEstalactita>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoEstalactita_Statics::ClassParams = {
		&AObstaculoEstalactita::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoEstalactita_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoEstalactita_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoEstalactita()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoEstalactita_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoEstalactita, 3220166751);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoEstalactita>()
	{
		return AObstaculoEstalactita::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoEstalactita(Z_Construct_UClass_AObstaculoEstalactita, &AObstaculoEstalactita::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoEstalactita"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoEstalactita);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
