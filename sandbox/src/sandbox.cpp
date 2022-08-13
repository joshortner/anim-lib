#include "sandbox.h"

extern "C" {
#include "animl_ik.h"
}

#include <stdio.h>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

animl_ik_node_t ik_chain[] = { 
    { "Root", NULL, NULL },
    { "First", NULL, NULL },
    { "Second", NULL, NULL },
    { "Third", NULL, NULL }
};
const uint32_t ik_chain_size = sizeof(ik_chain) / sizeof(animl_ik_node_t);
animl_ik_node_t ik_chain_new[ik_chain_size] = { 0 };

SandboxApp::SandboxApp() :
    Application(SCR_WIDTH, SCR_HEIGHT)
{
    gm_vec3_t vec3;
    animl_ik_solve_fabrik(ik_chain, ik_chain_size, ik_chain_new);
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