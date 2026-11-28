#include "botw/ghs_intrinsics.h"

extern "C" void fn_02034668(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333b26c(void* object, unsigned flags);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02034668((char*)object + 112, 2);
        fn_02034668((char*)object + 36, 2);
        fn_0333b26c(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_02035798(void *object, unsigned flags) {
    destroy(object, flags);
}
