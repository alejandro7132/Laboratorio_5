// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoRemolino.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoRemolino() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoRemolino_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoRemolino();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoPeligroso();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoRemolino::StaticRegisterNativesAObstaculoRemolino()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoRemolino_NoRegister()
	{
		return AObstaculoRemolino::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoRemolino_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoRemolino_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoPeligroso,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoRemolino_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Remolino (obstaculo Peligroso de la familia Acuatico).\n */" },
		{ "IncludePath", "ObstaculoRemolino.h" },
		{ "ModuleRelativePath", "ObstaculoRemolino.h" },
		{ "ToolTip", "Producto concreto: Remolino (obstaculo Peligroso de la familia Acuatico)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoRemolino_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoRemolino>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoRemolino_Statics::ClassParams = {
		&AObstaculoRemolino::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoRemolino_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoRemolino_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoRemolino()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoRemolino_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoRemolino, 1704092528);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoRemolino>()
	{
		return AObstaculoRemolino::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoRemolino(Z_Construct_UClass_AObstaculoRemolino, &AObstaculoRemolino::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoRemolino"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoRemolino);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
