#include "animl_ik.h"
#include "gm_vec3.h"

#include <string.h>

// Sources:
// - http://andreasaristidou.com/publications/papers/Extending_FABRIK_with_Model_C%CE%BFnstraints.pdf

/*
Thus,
it is very important to check whether the target is within
reach or not; the step to identify the conditions that cause
a target position to be unreachable is easy to implement,
especially for cases where no rotational or orientation
restrictions exist, and can importantly lead to a large saving
in processing time
*/

void animl_ik_solve_fabrik(const animl_ik_node_t * p_chain, uint32_t chain_size, animl_ik_node_t * p_chain_out)
{
    memcpy(p_chain_out, p_chain, sizeof(animl_ik_node_t) * chain_size);

    // If no rotational or orientation restrictions exist
    // - Check if reachable
    //      1) find distance between the root and the target
    //      2) less than the sum of inter joint distances? reachable
    //      3) else no reachable

}