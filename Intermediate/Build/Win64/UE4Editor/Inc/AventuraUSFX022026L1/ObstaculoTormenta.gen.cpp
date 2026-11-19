// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoTormenta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoTormenta() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoTormenta_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoTormenta();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoPeligroso();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoTormenta::StaticRegisterNativesAObstaculoTormenta()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoTormenta_NoRegister()
	{
		return AObstaculoTormenta::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoTormenta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoTormenta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoPeligroso,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoTormenta_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Tormenta (obstaculo Peligroso de la familia Aereo).\n */" },
		{ "IncludePath", "ObstaculoTormenta.h" },
		{ "ModuleRelativePath", "ObstaculoTormenta.h" },
		{ "ToolTip", "Producto concreto: Tormenta (obstaculo Peligroso de la familia Aereo)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoTormenta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoTormenta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoTormenta_Statics::ClassParams = {
		&AObstaculoTormenta::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoTormenta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoTormenta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoTormenta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoTormenta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoTormenta, 4129897204);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoTormenta>()
	{
		return AObstaculoTormenta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoTormenta(Z_Construct_UClass_AObstaculoTormenta, &AObstaculoTormenta::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoTormenta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoTormenta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
