#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101eb888[];
extern "C" void fn_02dc40c8(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_031bc274(void*, int);

extern "C" void fn_02dc45d0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 380)) = data_101eb888;
        fn_02dc40c8(arg0);
        fn_031bc274(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
