#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" void fn_028cf5f8(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x84), 2U);
        fn_037b7d90(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
