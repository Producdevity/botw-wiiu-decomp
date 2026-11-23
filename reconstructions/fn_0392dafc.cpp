#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_039323e0(void*, int);

extern "C" void fn_0392dafc(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_039323e0((char *)arg0 + 0x28, 2);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
