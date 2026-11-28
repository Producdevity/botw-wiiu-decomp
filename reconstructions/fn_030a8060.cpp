#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10260c94[];
extern "C" unsigned char data_10260d2c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a96a8(void*, int);
extern "C" void fn_030a98a8(void*);

extern "C" void fn_030a8060(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 12)) = data_10260d2c;
        (*(const void**)((char*)object + 24)) = data_10260c94;
        fn_030a98a8(object);
        fn_030a96a8(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
