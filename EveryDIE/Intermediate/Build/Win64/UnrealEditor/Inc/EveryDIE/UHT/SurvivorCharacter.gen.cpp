// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EveryDIE/SurvivorCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
EVERYDIE_API UClass* Z_Construct_UClass_ASurvivorCharacter();
EVERYDIE_API UClass* Z_Construct_UClass_ASurvivorCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_EveryDIE();
// End Cross Module References

// Begin Class ASurvivorCharacter
void ASurvivorCharacter::StaticRegisterNativesASurvivorCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivorCharacter);
UClass* Z_Construct_UClass_ASurvivorCharacter_NoRegister()
{
	return ASurvivorCharacter::StaticClass();
}
struct Z_Construct_UClass_ASurvivorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SurvivorCharacter.h" },
		{ "ModuleRelativePath", "SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Moving_MetaData[] = {
		{ "ALlowPrivateAccess", "true" },
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Looking_MetaData[] = {
		{ "ALlowPrivateAccess", "true" },
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jumping_MetaData[] = {
		{ "ALlowPrivateAccess", "true" },
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "SurvivorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "ALlowPrivateAccess", "true" },
		{ "Category", "Input Mapping Context" },
		{ "ModuleRelativePath", "SurvivorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Moving;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Looking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jumping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, Moving), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Moving_MetaData), NewProp_Moving_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Looking = { "Looking", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, Looking), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Looking_MetaData), NewProp_Looking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Jumping = { "Jumping", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, Jumping), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jumping_MetaData), NewProp_Jumping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASurvivorCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Moving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Looking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_Jumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivorCharacter_Statics::NewProp_DefaultMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASurvivorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_EveryDIE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivorCharacter_Statics::ClassParams = {
	&ASurvivorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASurvivorCharacter()
{
	if (!Z_Registration_Info_UClass_ASurvivorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivorCharacter.OuterSingleton, Z_Construct_UClass_ASurvivorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASurvivorCharacter.OuterSingleton;
}
template<> EVERYDIE_API UClass* StaticClass<ASurvivorCharacter>()
{
	return ASurvivorCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivorCharacter);
ASurvivorCharacter::~ASurvivorCharacter() {}
// End Class ASurvivorCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_OSS_EveryDIE_EveryDIE_Source_EveryDIE_SurvivorCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivorCharacter, ASurvivorCharacter::StaticClass, TEXT("ASurvivorCharacter"), &Z_Registration_Info_UClass_ASurvivorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivorCharacter), 423875035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OSS_EveryDIE_EveryDIE_Source_EveryDIE_SurvivorCharacter_h_3959410274(TEXT("/Script/EveryDIE"),
	Z_CompiledInDeferFile_FID_OSS_EveryDIE_EveryDIE_Source_EveryDIE_SurvivorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OSS_EveryDIE_EveryDIE_Source_EveryDIE_SurvivorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
