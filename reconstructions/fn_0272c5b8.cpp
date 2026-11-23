#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b27110(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);

extern "C" void fn_0272c5b8(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b27110((char *)arg0 + 0x3C, 2U);
        fn_037b7d90(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
