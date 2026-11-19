// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/FabricaObstaculosAcuaticos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaObstaculosAcuaticos() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosAcuaticos_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculosAcuaticos();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AFabricaObstaculos();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AFabricaObstaculosAcuaticos::StaticRegisterNativesAFabricaObstaculosAcuaticos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaObstaculosAcuaticos_NoRegister()
	{
		return AFabricaObstaculosAcuaticos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaObstaculos,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Fabrica concreta: produce la familia Acuatico (Iceberg, Boya y Remolino).\n */" },
		{ "IncludePath", "FabricaObstaculosAcuaticos.h" },
		{ "ModuleRelativePath", "FabricaObstaculosAcuaticos.h" },
		{ "ToolTip", "Fabrica concreta: produce la familia Acuatico (Iceberg, Boya y Remolino)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaObstaculosAcuaticos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics::ClassParams = {
		&AFabricaObstaculosAcuaticos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaObstaculosAcuaticos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaObstaculosAcuaticos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaObstaculosAcuaticos, 1463270129);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AFabricaObstaculosAcuaticos>()
	{
		return AFabricaObstaculosAcuaticos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaObstaculosAcuaticos(Z_Construct_UClass_AFabricaObstaculosAcuaticos, &AFabricaObstaculosAcuaticos::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AFabricaObstaculosAcuaticos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaObstaculosAcuaticos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
