#include "botw/ghs_intrinsics.h"

extern "C" void fn_02834298(void* object, unsigned flags);
extern "C" void fn_02b4db88(void*, int);
extern "C" void fn_02b4ec78(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_028381ac(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b4db88((char*)object + 760, 2);
        fn_02b4ec78((char*)object + 92, 2U);
        fn_02834298(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
