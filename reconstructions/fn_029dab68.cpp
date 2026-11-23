#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b565bc(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_029dab68(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b565bc((char *)arg0 + 0x28, 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
