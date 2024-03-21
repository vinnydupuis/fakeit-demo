#pragma once

#include "ILogger.h"

class Logger : public ILogger {
public:
    void log(const std::string &message) override;
};
