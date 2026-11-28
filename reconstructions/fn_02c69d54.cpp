#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
extern "C" void fn_0378da14(void* handle);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0378da14((char *)object + 0x18);
        fn_030eb73c((char *)object + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_02c69d54(void *object, unsigned flags) {
    destroy(object, flags);
}
