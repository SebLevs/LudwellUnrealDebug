// Copyright under GPL-3.0 license
#pragma once

#include "Modules/ModuleManager.h"

class LOG_API FLogModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
