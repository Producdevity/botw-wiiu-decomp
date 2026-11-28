#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b27110(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

namespace {
inline void destroy(void *object, int flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b27110((char *)object + 0x24, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_029d08d4(void *object, unsigned flags) {
    destroy(object, flags);
}
