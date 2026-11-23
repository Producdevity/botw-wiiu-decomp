#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03cefb44(void*, int);

extern "C" void fn_03d0f34c(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_03cefb44((char *)arg0 + 0x100, 2);
        fn_03cefb44((char *)arg0 + 0x10, 2);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
