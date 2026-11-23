#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102fe6a4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_03631a4c(void*);

extern "C" void fn_03630750(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 112)) = data_102fe6a4;
        fn_03631a4c(arg0);
        fn_030bb614(arg0, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
