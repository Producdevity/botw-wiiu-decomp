#ifndef BOTW_TEARDOWN_H
#define BOTW_TEARDOWN_H

#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void* memory);

namespace teardown {

template <void (*Cleanup)(void*, unsigned), unsigned MemberOffset, unsigned CleanupFlags>
inline void destroy(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        Cleanup(static_cast<unsigned char*>(object) + MemberOffset, CleanupFlags);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

}

#endif
