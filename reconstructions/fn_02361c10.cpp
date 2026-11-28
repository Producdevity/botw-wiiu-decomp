#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b7e148(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b7e148((char *)object + 0x4C, 2);
        fn_030eb73c((char *)object + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_02361c10(void *object, void *flags) {
    destroy(object, (unsigned)flags);
}
