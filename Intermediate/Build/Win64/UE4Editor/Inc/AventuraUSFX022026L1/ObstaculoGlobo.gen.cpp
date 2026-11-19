// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoGlobo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoGlobo() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoGlobo_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoGlobo();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoMovil();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoGlobo::StaticRegisterNativesAObstaculoGlobo()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoGlobo_NoRegister()
	{
		return AObstaculoGlobo::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoGlobo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoGlobo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoMovil,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoGlobo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Globo (obstaculo Movil de la familia Aereo).\n */" },
		{ "IncludePath", "ObstaculoGlobo.h" },
		{ "ModuleRelativePath", "ObstaculoGlobo.h" },
		{ "ToolTip", "Producto concreto: Globo (obstaculo Movil de la familia Aereo)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoGlobo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoGlobo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoGlobo_Statics::ClassParams = {
		&AObstaculoGlobo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoGlobo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoGlobo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoGlobo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoGlobo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoGlobo, 2245147434);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoGlobo>()
	{
		return AObstaculoGlobo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoGlobo(Z_Construct_UClass_AObstaculoGlobo, &AObstaculoGlobo::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoGlobo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoGlobo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
