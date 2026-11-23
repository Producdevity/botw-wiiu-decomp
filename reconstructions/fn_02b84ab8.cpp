#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" void fn_02b84ab8(void *arg0, s32 arg1) {
    const s32 flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)arg0 + 0x44), 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
