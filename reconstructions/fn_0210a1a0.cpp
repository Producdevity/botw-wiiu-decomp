#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b14d4c(void* object, unsigned flags);
extern "C" void fn_02b61568(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_0210a1a0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b14d4c((char*)object + 148, 2U);
        fn_02b61568((char*)object + 140, 2U);
        fn_030eb73c((char*)object + 4, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
