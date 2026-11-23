#include "botw/ghs_intrinsics.h"

extern "C" void fn_020f4078(void *, unsigned);
extern "C" void fn_02b44da0(void*, int);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02341de0(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b44da0((char *)arg0 + 0xF8, 2);
        fn_020f4078(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
