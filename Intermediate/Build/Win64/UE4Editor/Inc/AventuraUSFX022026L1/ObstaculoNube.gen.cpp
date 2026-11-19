// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoNube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoNube() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoNube_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoNube();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoFijo();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoNube::StaticRegisterNativesAObstaculoNube()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoNube_NoRegister()
	{
		return AObstaculoNube::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoNube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoNube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoFijo,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoNube_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Nube (obstaculo Fijo de la familia Aereo).\n */" },
		{ "IncludePath", "ObstaculoNube.h" },
		{ "ModuleRelativePath", "ObstaculoNube.h" },
		{ "ToolTip", "Producto concreto: Nube (obstaculo Fijo de la familia Aereo)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoNube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoNube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoNube_Statics::ClassParams = {
		&AObstaculoNube::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoNube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoNube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoNube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoNube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoNube, 2623508331);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoNube>()
	{
		return AObstaculoNube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoNube(Z_Construct_UClass_AObstaculoNube, &AObstaculoNube::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoNube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoNube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
