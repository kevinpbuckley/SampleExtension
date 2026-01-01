// Copyright Epic Games, Inc. All Rights Reserved.

#include "SampleExtensionModule.h"
#include "Tools/SampleTools.h"

// Tool registration is handled automatically by the REGISTER_VIBEUE_TOOL macro
// in SampleToolRegistration.cpp

#define LOCTEXT_NAMESPACE "FSampleExtensionModule"

void FSampleExtensionModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSampleExtensionModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSampleExtensionModule, SampleExtension)