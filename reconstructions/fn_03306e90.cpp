#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102addd4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_032e051c(void*, int);
extern "C" void fn_0331d6b4(void*, int);

extern "C" void fn_03306e90(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 292)) = data_102addd4;
        fn_0331d6b4((char*)object + 256, 0);
        fn_032e051c(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
