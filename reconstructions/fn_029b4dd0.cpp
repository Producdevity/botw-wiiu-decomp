#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void fn_029b4dd0(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0378c734((ProcLink *)((char *)arg0 + 0x24));
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
