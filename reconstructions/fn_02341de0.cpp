#include "botw/ghs_intrinsics.h"

extern "C" void fn_020f4078(void *, unsigned);
extern "C" void fn_02b44da0(void*, int);
extern "C" void fn_0308e6d0(void *);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b44da0((char *)object + 0xF8, 2);
        fn_020f4078(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_02341de0(void *object, unsigned flags) {
    destroy(object, flags);
}
