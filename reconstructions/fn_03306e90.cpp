#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102addd4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_032e051c(void*, int);
extern "C" void fn_0331d6b4(void*, int);

extern "C" void fn_03306e90(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 292)) = data_102addd4;
        fn_0331d6b4((char*)arg0 + 256, 0);
        fn_032e051c(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
