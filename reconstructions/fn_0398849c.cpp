#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1034a1f4[];
extern "C" unsigned char data_1034a214[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03988318(void* member);
extern "C" void fn_039883a8(void* object, unsigned flags);

extern "C" void fn_0398849c(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 28)) = data_1034a1f4;
        (*(const void**)((char*)arg0 + 24)) = data_1034a214;
        fn_03988318((char*)arg0 + 4);
        fn_039883a8((char*)arg0 + 4, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
