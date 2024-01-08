// Copyright under GNU General Public License v3.0

#pragma once

#include "Modules/ModuleManager.h"

class LOG_API FLogModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
