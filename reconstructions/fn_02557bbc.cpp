#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);
extern "C" void fn_037b7d90(void *, unsigned);

extern "C" void fn_02557bbc(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x30));
        fn_037b7d90(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
