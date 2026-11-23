#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103cec3c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_03bd3ec8(void*);

extern "C" void fn_03bd3f64(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 140)) = data_103cec3c;
        fn_03bd3ec8(arg0);
        fn_030bb614((char*)arg0 + 76, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
