// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoBoya.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoBoya() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoBoya_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoBoya();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoMovil();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoBoya::StaticRegisterNativesAObstaculoBoya()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoBoya_NoRegister()
	{
		return AObstaculoBoya::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoBoya_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoBoya_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoMovil,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoBoya_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Boya (obstaculo Movil de la familia Acuatico).\n */" },
		{ "IncludePath", "ObstaculoBoya.h" },
		{ "ModuleRelativePath", "ObstaculoBoya.h" },
		{ "ToolTip", "Producto concreto: Boya (obstaculo Movil de la familia Acuatico)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoBoya_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoBoya>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoBoya_Statics::ClassParams = {
		&AObstaculoBoya::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoBoya_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoBoya_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoBoya()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoBoya_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoBoya, 1948902775);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoBoya>()
	{
		return AObstaculoBoya::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoBoya(Z_Construct_UClass_AObstaculoBoya, &AObstaculoBoya::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoBoya"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoBoya);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
