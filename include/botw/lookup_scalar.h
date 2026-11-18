#ifndef BOTW_LOOKUP_SCALAR_H
#define BOTW_LOOKUP_SCALAR_H

#include "botw/lookup_copy.h"

#include "botw/ghs_intrinsics.h"

namespace lookup_copy {

template <unsigned Kind, typename Scalar>
inline bool store_scalar(void* owner, const Scalar* input, const void* key) {
    __schedule_barrier();
    Scalar* output = static_cast<Scalar*>(fn_030ec10c(owner, key, Kind, true));
    if (output) {
        *output = *input;
        return true;
    }
    return false;
}

}

#endif
