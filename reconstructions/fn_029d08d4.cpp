#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b27110(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_029d08d4(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b27110((char *)arg0 + 0x24, 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
