// Copyright 2024 Teklarit. All Rights Reserved.

#include "PIDControllerModule.h"

#define LOCTEXT_NAMESPACE "FPIDControllerModule"

void FPIDControllerModule::StartupModule()
{
}

void FPIDControllerModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPIDControllerModule, PIDController)