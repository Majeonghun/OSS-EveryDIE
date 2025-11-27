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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ASurvivorCharacter, ASurvivorCharacter::StaticClass, TEXT("ASurvivorCharacter"), &Z_Registration_Info_UClass_ASurvivorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivorCharacter), 3023724595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OSS_EveryDIE_EveryDIE_Source_EveryDIE_SurvivorCharacter_h_1874328233(TEXT("/Script/EveryDIE"),
	Z_CompiledInDeferFile_FID_OSS_EveryDIE_EveryDIE_Source_EveryDIE_SurvivorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OSS_EveryDIE_EveryDIE_Source_EveryDIE_SurvivorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
