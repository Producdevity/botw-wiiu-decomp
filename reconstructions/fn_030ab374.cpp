#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102611b4[];
extern "C" unsigned char data_1026125c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a96a8(void*, int);
extern "C" void fn_030a98a8(void*);

extern "C" void fn_030ab374(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 12)) = data_1026125c;
        (*(const void**)((char*)object + 24)) = data_102611b4;
        fn_030a98a8(object);
        fn_030a96a8(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
