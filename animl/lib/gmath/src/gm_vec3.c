#include "gm_vec3.h"

void gm_vec3_add(const gm_vec3_t * p_lhs, const gm_vec3_t * p_rhs, gm_vec3_t * p_out)
{
    p_out->x = p_lhs->x + p_rhs->x;
    p_out->y = p_lhs->y + p_rhs->y;
    p_out->z = p_lhs->z + p_rhs->z;
}