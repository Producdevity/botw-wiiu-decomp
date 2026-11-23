#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02e4a93c(void **arg0, unsigned arg1) {
    void* const* vt1;
    void *temp_r3;
    const unsigned flags = arg1;
    __schedule_barrier();

    if (arg0 != 0) {
        temp_r3 = *arg0;
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xC)))[9])(temp_r3);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
