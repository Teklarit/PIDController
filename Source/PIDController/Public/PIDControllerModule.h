// Teklarit ©, 2024

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FPIDControllerModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
