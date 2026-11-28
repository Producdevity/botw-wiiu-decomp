#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void*);
extern "C" void fn_0378da14(void* handle);

static void destroy(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0378da14((char*)object + 4);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

extern "C" void fn_02b14c94(void* object, unsigned flags) {
    destroy(object, flags);
}
