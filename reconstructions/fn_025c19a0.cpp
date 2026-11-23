#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void*, void*);
extern "C" void fn_037b7d90(void *, unsigned);

extern "C" void fn_025c19a0(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0378da14((char *)arg0 + 0x7C, (void *)(arg1));
        fn_037b7d90(arg0, 0U);
        if ((s32) flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
