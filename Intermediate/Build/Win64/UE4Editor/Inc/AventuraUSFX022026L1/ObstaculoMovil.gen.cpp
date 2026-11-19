// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoMovil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoMovil() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoMovil_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoMovil();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AObstaculoMovil::StaticRegisterNativesAObstaculoMovil()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoMovil_NoRegister()
	{
		return AObstaculoMovil::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoMovil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EjeMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EjeMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recorrido_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Recorrido;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoMovil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMovil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto abstracto B: obstaculo que va y viene a lo largo de un eje, centrado en\n * el punto donde aparecio. Las clases concretas solo definen el eje, el recorrido y la velocidad.\n */" },
		{ "IncludePath", "ObstaculoMovil.h" },
		{ "ModuleRelativePath", "ObstaculoMovil.h" },
		{ "ToolTip", "Producto abstracto B: obstaculo que va y viene a lo largo de un eje, centrado en\nel punto donde aparecio. Las clases concretas solo definen el eje, el recorrido y la velocidad." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_EjeMovimiento_MetaData[] = {
		{ "Category", "Obstaculo|Movimiento" },
		{ "Comment", "// Direccion del vaiven (se normaliza)\n" },
		{ "ModuleRelativePath", "ObstaculoMovil.h" },
		{ "ToolTip", "Direccion del vaiven (se normaliza)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_EjeMovimiento = { "EjeMovimiento", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoMovil, EjeMovimiento), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_EjeMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_EjeMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Recorrido_MetaData[] = {
		{ "Category", "Obstaculo|Movimiento" },
		{ "Comment", "// Distancia (cm) que se aleja del punto inicial hacia cada lado\n" },
		{ "ModuleRelativePath", "ObstaculoMovil.h" },
		{ "ToolTip", "Distancia (cm) que se aleja del punto inicial hacia cada lado" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Recorrido = { "Recorrido", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoMovil, Recorrido), METADATA_PARAMS(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Recorrido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Recorrido_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Obstaculo|Movimiento" },
		{ "Comment", "// Velocidad (cm/s)\n" },
		{ "ModuleRelativePath", "ObstaculoMovil.h" },
		{ "ToolTip", "Velocidad (cm/s)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoMovil, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Velocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculoMovil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_EjeMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Recorrido,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_Velocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoMovil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoMovil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoMovil_Statics::ClassParams = {
		&AObstaculoMovil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculoMovil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoMovil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoMovil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoMovil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoMovil, 289113404);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoMovil>()
	{
		return AObstaculoMovil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoMovil(Z_Construct_UClass_AObstaculoMovil, &AObstaculoMovil::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoMovil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoMovil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
