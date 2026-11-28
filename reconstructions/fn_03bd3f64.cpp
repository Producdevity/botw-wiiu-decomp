#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103cec3c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_03bd3ec8(void*);

extern "C" void fn_03bd3f64(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 140)) = data_103cec3c;
        fn_03bd3ec8(object);
        fn_030bb614((char*)object + 76, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
