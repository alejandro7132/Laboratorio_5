// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaObstaculosAereos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaObstaculosAereos() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosAereos_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosAereos();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculos();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaObstaculosAereos::StaticRegisterNativesAFabricaObstaculosAereos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaObstaculosAereos_NoRegister()
	{
		return AFabricaObstaculosAereos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaObstaculosAereos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaObstaculosAereos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaObstaculosAereos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Fabrica concreta: produce la familia Aereo (Nube, Globo y Tormenta).\n */" },
		{ "IncludePath", "FabricaObstaculosAereos.h" },
		{ "ModuleRelativePath", "FabricaObstaculosAereos.h" },
		{ "ToolTip", "Fabrica concreta: produce la familia Aereo (Nube, Globo y Tormenta)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaObstaculosAereos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaObstaculosAereos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaObstaculosAereos_Statics::ClassParams = {
		&AFabricaObstaculosAereos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaObstaculosAereos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaObstaculosAereos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaObstaculosAereos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaObstaculosAereos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaObstaculosAereos, 1144444631);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaObstaculosAereos>()
	{
		return AFabricaObstaculosAereos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaObstaculosAereos(Z_Construct_UClass_AFabricaObstaculosAereos, &AFabricaObstaculosAereos::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaObstaculosAereos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaObstaculosAereos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
