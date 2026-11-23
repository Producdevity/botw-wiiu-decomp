#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_100e29a0[];
extern "C" void fn_0256dee8(void *arg0);
extern "C" void fn_0257937c(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0256df34(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_100e29a0;
        fn_0256dee8(arg0);
        fn_0257937c(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
