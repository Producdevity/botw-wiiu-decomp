#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b565bc(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

namespace {
inline void destroy(void *object, int flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b565bc((char *)object + 0x28, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_029dab68(void *object, unsigned flags) {
    destroy(object, flags);
}
