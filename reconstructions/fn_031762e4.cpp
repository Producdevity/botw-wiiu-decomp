#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1028afe0[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03176280(void*, int);
extern "C" void fn_03177594(void*, int);

extern "C" void fn_031762e4(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 8)) = data_1028afe0;
        fn_03176280((char*)object + 12, 2);
        fn_03177594(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
