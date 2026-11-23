#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03b9d0b4(void*, int);

extern "C" void fn_03b93c70(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_03b9d0b4((char *)arg0 + 0x3C, 2);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
