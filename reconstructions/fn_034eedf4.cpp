#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_034eecd8(void*);
extern "C" void fn_037e5be8(void* object, unsigned flags);
extern "C" void fn_037e6024(void* storage, unsigned flags);

namespace {
inline void destroy(void *object, int flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_034eecd8(object);
        if (((char*)object + 60) != 0) {
            fn_037e5be8((char*)object + 68, 0U);
        }
        fn_037e6024((char*)object + 12, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_034eedf4(void *object, unsigned flags) {
    destroy(object, flags);
}
