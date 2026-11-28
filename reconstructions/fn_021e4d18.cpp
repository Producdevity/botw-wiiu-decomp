#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

namespace {
inline void destroy(void *object, int flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)object + 0x1C), 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_021e4d18(void *object, unsigned flags) {
    destroy(object, flags);
}
