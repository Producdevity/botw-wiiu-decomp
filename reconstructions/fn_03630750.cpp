#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102fe6a4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_03631a4c(void*);

extern "C" void fn_03630750(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 112)) = data_102fe6a4;
        fn_03631a4c(object);
        fn_030bb614(object, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
