// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopAdventure/CoopAdventureGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopAdventureGameMode() {}

// Begin Cross Module References
COOPADVENTURE_API UClass* Z_Construct_UClass_ACoopAdventureGameMode();
COOPADVENTURE_API UClass* Z_Construct_UClass_ACoopAdventureGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CoopAdventure();
// End Cross Module References

// Begin Class ACoopAdventureGameMode
void ACoopAdventureGameMode::StaticRegisterNativesACoopAdventureGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoopAdventureGameMode);
UClass* Z_Construct_UClass_ACoopAdventureGameMode_NoRegister()
{
	return ACoopAdventureGameMode::StaticClass();
}
struct Z_Construct_UClass_ACoopAdventureGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoopAdventureGameMode.h" },
		{ "ModuleRelativePath", "CoopAdventureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoopAdventureGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoopAdventureGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CoopAdventure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoopAdventureGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoopAdventureGameMode_Statics::ClassParams = {
	&ACoopAdventureGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoopAdventureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoopAdventureGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoopAdventureGameMode()
{
	if (!Z_Registration_Info_UClass_ACoopAdventureGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoopAdventureGameMode.OuterSingleton, Z_Construct_UClass_ACoopAdventureGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoopAdventureGameMode.OuterSingleton;
}
template<> COOPADVENTURE_API UClass* StaticClass<ACoopAdventureGameMode>()
{
	return ACoopAdventureGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoopAdventureGameMode);
ACoopAdventureGameMode::~ACoopAdventureGameMode() {}
// End Class ACoopAdventureGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_MultiplayerGameDevUEP2_CoopAdventure_Source_CoopAdventure_CoopAdventureGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoopAdventureGameMode, ACoopAdventureGameMode::StaticClass, TEXT("ACoopAdventureGameMode"), &Z_Registration_Info_UClass_ACoopAdventureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoopAdventureGameMode), 3971003382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_MultiplayerGameDevUEP2_CoopAdventure_Source_CoopAdventure_CoopAdventureGameMode_h_551182057(TEXT("/Script/CoopAdventure"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_MultiplayerGameDevUEP2_CoopAdventure_Source_CoopAdventure_CoopAdventureGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_MultiplayerGameDevUEP2_CoopAdventure_Source_CoopAdventure_CoopAdventureGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
