#ifndef __AL_IK_H__
#define __AL_IK_H__

#include "gm_vec3.h"

#include <stdint.h>

typedef struct animl_ik_node_t
{
#define AL_IK_NODE_MAX_NAME_LEN (128)
    char name[AL_IK_NODE_MAX_NAME_LEN];
    struct animl_ik_node_t * p_parent;
    struct animl_ik_node_t * p_next;
} animl_ik_node_t;

void animl_ik_solve_fabrik(const animl_ik_node_t * p_nodes, uint32_t chain_size, animl_ik_node_t * p_nodes_out);


//void al_ik_fabrik(al_vec3_t target, al_vec3_t origin, float epsilon, uint32_t max_it, uint32_t joint_count, al_joint_t * p_joints);

#endif
