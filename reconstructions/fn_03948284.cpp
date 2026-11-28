#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037d790c(void *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0378da14((char *)object + 0x140);
        fn_037d790c(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_03948284(void *object, unsigned flags) {
    destroy(object, flags);
}
