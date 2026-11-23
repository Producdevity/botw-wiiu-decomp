#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);

extern "C" void fn_03a09478(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_030bb614((char *)arg0 + 0x1440, 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
