// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AventuraUSFX022026L1/ObstaculoPeligroso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoPeligroso() {}
// Cross Module References
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoPeligroso_NoRegister();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculoPeligroso();
	AVENTURAUSFX022026L1_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_AventuraUSFX022026L1();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AObstaculoPeligroso::execAlSolapar)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponenteSolapado);
		P_GET_OBJECT(AActor,Z_Param_OtroActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtroComponente);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtroIndiceCuerpo);
		P_GET_UBOOL(Z_Param_bDesdeBarrido);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ResultadoBarrido);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AlSolapar(Z_Param_ComponenteSolapado,Z_Param_OtroActor,Z_Param_OtroComponente,Z_Param_OtroIndiceCuerpo,Z_Param_bDesdeBarrido,Z_Param_Out_ResultadoBarrido);
		P_NATIVE_END;
	}
	void AObstaculoPeligroso::StaticRegisterNativesAObstaculoPeligroso()
	{
		UClass* Class = AObstaculoPeligroso::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlSolapar", &AObstaculoPeligroso::execAlSolapar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics
	{
		struct ObstaculoPeligroso_eventAlSolapar_Parms
		{
			UPrimitiveComponent* ComponenteSolapado;
			AActor* OtroActor;
			UPrimitiveComponent* OtroComponente;
			int32 OtroIndiceCuerpo;
			bool bDesdeBarrido;
			FHitResult ResultadoBarrido;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponenteSolapado_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponenteSolapado;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtroActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtroComponente_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtroComponente;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtroIndiceCuerpo;
		static void NewProp_bDesdeBarrido_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDesdeBarrido;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultadoBarrido_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultadoBarrido;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ComponenteSolapado_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ComponenteSolapado = { "ComponenteSolapado", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObstaculoPeligroso_eventAlSolapar_Parms, ComponenteSolapado), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ComponenteSolapado_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ComponenteSolapado_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroActor = { "OtroActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObstaculoPeligroso_eventAlSolapar_Parms, OtroActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroComponente_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroComponente = { "OtroComponente", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObstaculoPeligroso_eventAlSolapar_Parms, OtroComponente), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroComponente_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroComponente_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroIndiceCuerpo = { "OtroIndiceCuerpo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObstaculoPeligroso_eventAlSolapar_Parms, OtroIndiceCuerpo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_bDesdeBarrido_SetBit(void* Obj)
	{
		((ObstaculoPeligroso_eventAlSolapar_Parms*)Obj)->bDesdeBarrido = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_bDesdeBarrido = { "bDesdeBarrido", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObstaculoPeligroso_eventAlSolapar_Parms), &Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_bDesdeBarrido_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ResultadoBarrido_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ResultadoBarrido = { "ResultadoBarrido", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObstaculoPeligroso_eventAlSolapar_Parms, ResultadoBarrido), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ResultadoBarrido_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ResultadoBarrido_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ComponenteSolapado,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroComponente,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_OtroIndiceCuerpo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_bDesdeBarrido,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::NewProp_ResultadoBarrido,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ObstaculoPeligroso.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObstaculoPeligroso, nullptr, "AlSolapar", nullptr, nullptr, sizeof(ObstaculoPeligroso_eventAlSolapar_Parms), Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObstaculoPeligroso_NoRegister()
	{
		return AObstaculoPeligroso::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoPeligroso_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Danio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Danio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuerzaEmpuje_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FuerzaEmpuje;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadGiro_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadGiro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoPeligroso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_AventuraUSFX022026L1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObstaculoPeligroso_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObstaculoPeligroso_AlSolapar, "AlSolapar" }, // 1962017507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPeligroso_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Producto abstracto C: obstaculo que se puede atravesar pero castiga al pawn que lo toca:\n * lo empuja hacia afuera y le aplica dano. Late y puede girar.\n */" },
		{ "IncludePath", "ObstaculoPeligroso.h" },
		{ "ModuleRelativePath", "ObstaculoPeligroso.h" },
		{ "ToolTip", "Producto abstracto C: obstaculo que se puede atravesar pero castiga al pawn que lo toca:\nlo empuja hacia afuera y le aplica dano. Late y puede girar." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_Danio_MetaData[] = {
		{ "Category", "Obstaculo|Peligro" },
		{ "Comment", "// Dano que aplica al tocarlo\n" },
		{ "ModuleRelativePath", "ObstaculoPeligroso.h" },
		{ "ToolTip", "Dano que aplica al tocarlo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_Danio = { "Danio", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoPeligroso, Danio), METADATA_PARAMS(Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_Danio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_Danio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_FuerzaEmpuje_MetaData[] = {
		{ "Category", "Obstaculo|Peligro" },
		{ "Comment", "// Distancia (cm) a la que empuja al pawn hacia afuera\n" },
		{ "ModuleRelativePath", "ObstaculoPeligroso.h" },
		{ "ToolTip", "Distancia (cm) a la que empuja al pawn hacia afuera" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_FuerzaEmpuje = { "FuerzaEmpuje", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoPeligroso, FuerzaEmpuje), METADATA_PARAMS(Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_FuerzaEmpuje_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_FuerzaEmpuje_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_VelocidadGiro_MetaData[] = {
		{ "Category", "Obstaculo|Peligro" },
		{ "Comment", "// Giro continuo (grados por segundo); 0 = no gira\n" },
		{ "ModuleRelativePath", "ObstaculoPeligroso.h" },
		{ "ToolTip", "Giro continuo (grados por segundo); 0 = no gira" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_VelocidadGiro = { "VelocidadGiro", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoPeligroso, VelocidadGiro), METADATA_PARAMS(Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_VelocidadGiro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_VelocidadGiro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculoPeligroso_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_Danio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_FuerzaEmpuje,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoPeligroso_Statics::NewProp_VelocidadGiro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoPeligroso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoPeligroso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoPeligroso_Statics::ClassParams = {
		&AObstaculoPeligroso::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObstaculoPeligroso_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPeligroso_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoPeligroso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPeligroso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoPeligroso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoPeligroso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoPeligroso, 2630217264);
	template<> AVENTURAUSFX022026L1_API UClass* StaticClass<AObstaculoPeligroso>()
	{
		return AObstaculoPeligroso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoPeligroso(Z_Construct_UClass_AObstaculoPeligroso, &AObstaculoPeligroso::StaticClass, TEXT("/Script/AventuraUSFX022026L1"), TEXT("AObstaculoPeligroso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoPeligroso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
