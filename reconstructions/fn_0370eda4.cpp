#include "botw/lazy_vec3.h"

extern "C" void fn_0370ece4(LazyVec3Owner* owner);

extern "C" LazyVec3* fn_0370eda4(LazyVec3Owner* owner) {
    unsigned validBit = owner->flags & 1;
    if (validBit ^ 1)
        fn_0370ece4(owner);
    return &owner->value;
}
