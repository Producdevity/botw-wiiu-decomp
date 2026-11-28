#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101ee8b4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_039794d0(void*, int);
extern "C" void fn_03ae44f4(void*, int);

extern "C" void fn_02de6180(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 16)) = data_101ee8b4;
        fn_03ae44f4((char*)object + 2948, 2);
        fn_039794d0(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
