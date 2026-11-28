#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1034b490[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dfefc(void* object, unsigned flags);

extern "C" void fn_0399cc74(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 8)) = data_1034b490;
        fn_0308e6d0((*(void**)((char*)object + 24)));
        fn_030dfefc(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
