// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoGameModule/WeaponTest2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponTest2() {}
// Cross Module References
	VIDEOGAMEMODULE_API UClass* Z_Construct_UClass_AWeaponTest2_NoRegister();
	VIDEOGAMEMODULE_API UClass* Z_Construct_UClass_AWeaponTest2();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_VideoGameModule();
// End Cross Module References
	void AWeaponTest2::StaticRegisterNativesAWeaponTest2()
	{
	}
	UClass* Z_Construct_UClass_AWeaponTest2_NoRegister()
	{
		return AWeaponTest2::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponTest2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponTest2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoGameModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponTest2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponTest2.h" },
		{ "ModuleRelativePath", "WeaponTest2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponTest2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponTest2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponTest2_Statics::ClassParams = {
		&AWeaponTest2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeaponTest2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTest2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponTest2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponTest2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponTest2, 434252037);
	template<> VIDEOGAMEMODULE_API UClass* StaticClass<AWeaponTest2>()
	{
		return AWeaponTest2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponTest2(Z_Construct_UClass_AWeaponTest2, &AWeaponTest2::StaticClass, TEXT("/Script/VideoGameModule"), TEXT("AWeaponTest2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponTest2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
