#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10260c94[];
extern "C" unsigned char data_10260d2c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a96a8(void*, int);
extern "C" void fn_030a98a8(void*);

extern "C" void fn_030a8060(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_10260d2c;
        (*(const void**)((char*)arg0 + 24)) = data_10260c94;
        fn_030a98a8(arg0);
        fn_030a96a8(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
