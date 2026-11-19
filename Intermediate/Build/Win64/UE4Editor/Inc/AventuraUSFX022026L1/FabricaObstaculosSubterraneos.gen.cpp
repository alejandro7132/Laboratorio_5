// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaObstaculosSubterraneos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaObstaculosSubterraneos() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosSubterraneos_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosSubterraneos();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculos();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaObstaculosSubterraneos::StaticRegisterNativesAFabricaObstaculosSubterraneos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaObstaculosSubterraneos_NoRegister()
	{
		return AFabricaObstaculosSubterraneos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Fabrica concreta: produce la familia Subterraneo (Estalactita, Vagoneta y Lava).\n */" },
		{ "IncludePath", "FabricaObstaculosSubterraneos.h" },
		{ "ModuleRelativePath", "FabricaObstaculosSubterraneos.h" },
		{ "ToolTip", "Fabrica concreta: produce la familia Subterraneo (Estalactita, Vagoneta y Lava)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaObstaculosSubterraneos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics::ClassParams = {
		&AFabricaObstaculosSubterraneos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaObstaculosSubterraneos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaObstaculosSubterraneos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaObstaculosSubterraneos, 3615766438);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaObstaculosSubterraneos>()
	{
		return AFabricaObstaculosSubterraneos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaObstaculosSubterraneos(Z_Construct_UClass_AFabricaObstaculosSubterraneos, &AFabricaObstaculosSubterraneos::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaObstaculosSubterraneos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaObstaculosSubterraneos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
