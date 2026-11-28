#include "botw/ghs_intrinsics.h"

extern "C" void fn_0287c468(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0287c468((char *)object + 0x3C, 2);
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_0287c4f0(void *object, unsigned flags) {
    destroy(object, flags);
}
