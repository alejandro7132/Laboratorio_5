// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoRoca.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoRoca() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoRoca_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoRoca();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoFijo();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoRoca::StaticRegisterNativesAObstaculoRoca()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoRoca_NoRegister()
	{
		return AObstaculoRoca::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoRoca_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoRoca_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoFijo,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoRoca_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Roca (obstaculo Fijo de la familia Terrestre).\n */" },
		{ "IncludePath", "ObstaculoRoca.h" },
		{ "ModuleRelativePath", "ObstaculoRoca.h" },
		{ "ToolTip", "Producto concreto: Roca (obstaculo Fijo de la familia Terrestre)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoRoca_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoRoca>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoRoca_Statics::ClassParams = {
		&AObstaculoRoca::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoRoca_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoRoca_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoRoca()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoRoca_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoRoca, 3989865883);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoRoca>()
	{
		return AObstaculoRoca::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoRoca(Z_Construct_UClass_AObstaculoRoca, &AObstaculoRoca::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoRoca"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoRoca);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
