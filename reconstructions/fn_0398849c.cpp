#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1034a1f4[];
extern "C" unsigned char data_1034a214[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03988318(void* member);
extern "C" void fn_039883a8(void* object, unsigned flags);

extern "C" void fn_0398849c(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 28)) = data_1034a1f4;
        (*(const void**)((char*)object + 24)) = data_1034a214;
        fn_03988318((char*)object + 4);
        fn_039883a8((char*)object + 4, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
