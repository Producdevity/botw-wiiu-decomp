#include "botw/ghs_intrinsics.h"

extern "C" void fn_022c059c(void *, unsigned);
extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_022c1b18(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b61568((char *)arg0 + 0x94, 2U);
        fn_022c059c(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
