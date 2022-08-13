#include "sandbox.h"

extern "C" {
#include "animl_ik.h"
}

#include <stdio.h>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

SandboxApp::SandboxApp() :
    Application(SCR_WIDTH, SCR_HEIGHT)
{
    animl_ik_test();
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