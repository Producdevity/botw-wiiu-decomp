#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_104181ec[];
extern "C" unsigned char data_10418284[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a96a8(void*, int);
extern "C" void fn_030a98a8(void*);

extern "C" void fn_042136f0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 12)) = data_10418284;
        (*(const void**)((char*)object + 24)) = data_104181ec;
        fn_030a98a8(object);
        fn_030a96a8(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
