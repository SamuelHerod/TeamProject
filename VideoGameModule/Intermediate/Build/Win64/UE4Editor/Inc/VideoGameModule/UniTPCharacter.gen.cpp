// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoGameModule/UniTPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniTPCharacter() {}
// Cross Module References
	VIDEOGAMEMODULE_API UClass* Z_Construct_UClass_AUniTPCharacter_NoRegister();
	VIDEOGAMEMODULE_API UClass* Z_Construct_UClass_AUniTPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VideoGameModule();
// End Cross Module References
	void AUniTPCharacter::StaticRegisterNativesAUniTPCharacter()
	{
	}
	UClass* Z_Construct_UClass_AUniTPCharacter_NoRegister()
	{
		return AUniTPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUniTPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUniTPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoGameModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniTPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UniTPCharacter.h" },
		{ "ModuleRelativePath", "UniTPCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUniTPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniTPCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUniTPCharacter_Statics::ClassParams = {
		&AUniTPCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AUniTPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUniTPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUniTPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUniTPCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUniTPCharacter, 3277677316);
	template<> VIDEOGAMEMODULE_API UClass* StaticClass<AUniTPCharacter>()
	{
		return AUniTPCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUniTPCharacter(Z_Construct_UClass_AUniTPCharacter, &AUniTPCharacter::StaticClass, TEXT("/Script/VideoGameModule"), TEXT("AUniTPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUniTPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
