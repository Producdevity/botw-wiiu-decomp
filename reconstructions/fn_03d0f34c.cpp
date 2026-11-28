#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03cefb44(void*, int);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_03cefb44((char *)object + 0x100, 2);
        fn_03cefb44((char *)object + 0x10, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_03d0f34c(void *object, unsigned flags) {
    destroy(object, flags);
}
