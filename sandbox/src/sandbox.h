#pragma once

#include "application.h"

class SandboxApp : public Application
{
public:

    SandboxApp();

    virtual void on_update() override;
    virtual void on_render() override;
};