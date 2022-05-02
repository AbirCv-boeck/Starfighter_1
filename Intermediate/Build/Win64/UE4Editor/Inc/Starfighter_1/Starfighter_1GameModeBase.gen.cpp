// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starfighter_1/Starfighter_1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarfighter_1GameModeBase() {}
// Cross Module References
	STARFIGHTER_1_API UClass* Z_Construct_UClass_AStarfighter_1GameModeBase_NoRegister();
	STARFIGHTER_1_API UClass* Z_Construct_UClass_AStarfighter_1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Starfighter_1();
// End Cross Module References
	void AStarfighter_1GameModeBase::StaticRegisterNativesAStarfighter_1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AStarfighter_1GameModeBase_NoRegister()
	{
		return AStarfighter_1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStarfighter_1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarfighter_1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starfighter_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarfighter_1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Starfighter_1GameModeBase.h" },
		{ "ModuleRelativePath", "Starfighter_1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarfighter_1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarfighter_1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarfighter_1GameModeBase_Statics::ClassParams = {
		&AStarfighter_1GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStarfighter_1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarfighter_1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarfighter_1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarfighter_1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarfighter_1GameModeBase, 15457312);
	template<> STARFIGHTER_1_API UClass* StaticClass<AStarfighter_1GameModeBase>()
	{
		return AStarfighter_1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarfighter_1GameModeBase(Z_Construct_UClass_AStarfighter_1GameModeBase, &AStarfighter_1GameModeBase::StaticClass, TEXT("/Script/Starfighter_1"), TEXT("AStarfighter_1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarfighter_1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
