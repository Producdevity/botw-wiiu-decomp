#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101eb888[];
extern "C" void fn_02dc40c8(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_031bc274(void*, int);

extern "C" void fn_02dc45d0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 380)) = data_101eb888;
        fn_02dc40c8(object);
        fn_031bc274(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
