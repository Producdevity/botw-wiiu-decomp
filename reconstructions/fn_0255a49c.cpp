#include "botw/ghs_intrinsics.h"

extern "C" void fn_026dc51c(void *, unsigned);
extern "C" void fn_02b3e41c(void*, int);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0255a49c(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b3e41c((char *)arg0 + 0x74, 2);
        fn_026dc51c(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
