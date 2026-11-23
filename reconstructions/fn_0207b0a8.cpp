#include "botw/ghs_intrinsics.h"

extern "C" void fn_02092ee4(void*, int);
extern "C" void fn_020eba44(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0207b0a8(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02092ee4((char *)arg0 + 0x70, 2);
        fn_020eba44(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
