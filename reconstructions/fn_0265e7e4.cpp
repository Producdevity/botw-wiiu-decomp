#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_037b7d90(void *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0378da14((char *)object + 0xA8);
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_0265e7e4(void *object, unsigned flags) {
    destroy(object, flags);
}
