#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
struct ProcAccessor;
extern "C" void fn_031f9d70(ProcAccessor *, unsigned);
extern "C" void fn_037b7d90(void *, unsigned);

extern "C" void fn_026e91a0(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_031f9d70((ProcAccessor *)((char *)arg0 + 0x34), 2U);
        fn_037b7d90(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
