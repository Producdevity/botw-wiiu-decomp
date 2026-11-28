struct DualInterfaceObject;
#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_039883bc(DualInterfaceObject* object, unsigned flags);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_0286e2c4(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_039883bc((DualInterfaceObject*)((char*)object + 76), 2U);
        fn_039883bc((DualInterfaceObject*)((char*)object + 44), 2U);
        fn_037b7d90(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

// TYPE-UNRESOLVED flags