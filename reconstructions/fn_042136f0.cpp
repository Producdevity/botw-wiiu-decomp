#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_104181ec[];
extern "C" unsigned char data_10418284[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a96a8(void*, int);
extern "C" void fn_030a98a8(void*);

extern "C" void fn_042136f0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_10418284;
        (*(const void**)((char*)arg0 + 24)) = data_104181ec;
        fn_030a98a8(arg0);
        fn_030a96a8(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
