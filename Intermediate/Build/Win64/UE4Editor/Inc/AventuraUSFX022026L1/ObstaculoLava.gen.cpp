// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoLava.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoLava() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoLava_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoLava();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoPeligroso();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
// End Cross Module References
	void AObstaculoLava::StaticRegisterNativesAObstaculoLava()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoLava_NoRegister()
	{
		return AObstaculoLava::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoLava_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoLava_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoPeligroso,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoLava_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto concreto: Lava (obstaculo Peligroso de la familia Subterraneo).\n */" },
		{ "IncludePath", "ObstaculoLava.h" },
		{ "ModuleRelativePath", "ObstaculoLava.h" },
		{ "ToolTip", "Producto concreto: Lava (obstaculo Peligroso de la familia Subterraneo)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoLava_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoLava>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoLava_Statics::ClassParams = {
		&AObstaculoLava::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoLava_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoLava_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoLava()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoLava_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoLava, 4073542634);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoLava>()
	{
		return AObstaculoLava::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoLava(Z_Construct_UClass_AObstaculoLava, &AObstaculoLava::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoLava"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoLava);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
