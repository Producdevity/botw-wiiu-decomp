#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" void fn_029d16b8(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x1C), 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
