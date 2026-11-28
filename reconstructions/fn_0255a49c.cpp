#include "botw/ghs_intrinsics.h"

extern "C" void fn_026dc51c(void *, unsigned);
extern "C" void fn_02b3e41c(void*, int);
extern "C" void fn_0308e6d0(void *);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b3e41c((char *)object + 0x74, 2);
        fn_026dc51c(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_0255a49c(void *object, unsigned flags) {
    destroy(object, flags);
}
