#ifndef BOTW_LOOKUP_PAYLOAD_H
#define BOTW_LOOKUP_PAYLOAD_H

#include "botw/lookup_copy.h"

#include "botw/ghs_intrinsics.h"

namespace lookup_copy {

inline bool finish_lookup(bool found) {
    __schedule_barrier();
    return found;
}

template <unsigned Kind>
inline bool lookup_payload(void* owner, void** output, const void* key) {
    __schedule_barrier();
    void* result = fn_030ec10c(owner, key, Kind, false);
    *output = result;
    return finish_lookup(result != 0);
}

}

#endif
