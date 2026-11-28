#include "botw/ghs_intrinsics.h"

extern "C" void fn_029cc964(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_039883bc((DualInterfaceObject *)((char *)object + 0x48), 2U);
        fn_029cc964(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_029e3cf8(void *object, unsigned flags) {
    destroy(object, flags);
}
