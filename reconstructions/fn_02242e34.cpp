#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_02242e34(void *arg0, s32 arg1) {
    const s32 flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x58));
        fn_030eb73c((char *)arg0 + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
