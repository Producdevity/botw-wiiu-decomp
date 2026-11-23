#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" void fn_021d4278(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b61568((char *)arg0 + 0x20, 2U);
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
