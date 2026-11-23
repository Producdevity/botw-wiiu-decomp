#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_02d78a8c(void **arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_030bb69c(*arg0);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
