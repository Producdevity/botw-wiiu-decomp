#include "botw/ghs_intrinsics.h"

extern "C" void fn_02092ee4(void*, int);
extern "C" void fn_020eba44(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02092ee4((char *)object + 0x70, 2);
        fn_020eba44(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_0207b0a8(void *object, unsigned flags) {
    destroy(object, flags);
}
