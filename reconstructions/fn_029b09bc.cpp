#include "botw/ghs_intrinsics.h"

extern "C" void fn_029dc8e8(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)object + 0x74), 2U);
        fn_029dc8e8(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_029b09bc(void *object, unsigned flags) {
    destroy(object, flags);
}
