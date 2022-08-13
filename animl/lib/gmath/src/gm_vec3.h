#ifndef __GM_VEC3__
#define __GM_VEC3__

typedef struct 
{
    float x;
    float y;
    float z;
} gm_vec3_t;

void gm_vec3_add(const gm_vec3_t * p_lhs, const gm_vec3_t * p_rhs, gm_vec3_t * p_out);

#endif 