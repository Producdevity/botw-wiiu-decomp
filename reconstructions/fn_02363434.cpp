#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void fn_0208c118(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void*, void*);

extern "C" void fn_02363434(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0378da14((char *)arg0 + 0x80, (void *)(arg1));
        fn_0208c118(arg0, 0U);
        if ((s32) flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
