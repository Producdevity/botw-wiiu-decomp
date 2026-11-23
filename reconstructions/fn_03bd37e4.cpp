#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03bd3774(void*, void*);

extern "C" void fn_03bd37e4(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_03bd3774(arg0, (void *)(arg1));
        if ((s32) flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
