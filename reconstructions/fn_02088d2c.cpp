#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b12214(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" void fn_02088d2c(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b12214((char *)arg0 + 0x40, 2);
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
