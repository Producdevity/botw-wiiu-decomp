#include "botw/ghs_intrinsics.h"

extern "C" void fn_029dc8e8(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" void fn_029b09bc(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x74), 2U);
        fn_029dc8e8(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
