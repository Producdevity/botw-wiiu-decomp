#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_100843ac[];
extern "C" void fn_02e4ae28(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_023197c4(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 12)) = data_100843ac;
        fn_02e4ae28((char*)object + 16);
        fn_030eb73c((char*)object + 4, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
