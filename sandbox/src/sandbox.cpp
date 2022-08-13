#include "sandbox.h"

#include <stdio.h>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

SandboxApp::SandboxApp() :
    Application(SCR_WIDTH, SCR_HEIGHT)
{

}

void SandboxApp::on_update()
{
    printf("UPDATE\n");
}

void SandboxApp::on_render()
{

}


extern Application * create_application()
{
    return new SandboxApp();
}