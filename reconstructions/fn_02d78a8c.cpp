#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void*);
extern "C" void fn_030bb69c(void*);

static void destroy(void** object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_030bb69c(*object);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

extern "C" void fn_02d78a8c(void** object, unsigned flags) {
    destroy(object, flags);
}
