#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e6b728(void* object, unsigned flags);
extern "C" void fn_02ecfbdc(void* object, unsigned flags);
extern "C" void fn_02ed0de0(void* object, unsigned flags);
extern "C" void fn_02f09738(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02f277e4(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02e6b728((char*)object + 68, 2U);
        fn_02ed0de0((char*)object + 48, 2U);
        fn_02ecfbdc((char*)object + 36, 2U);
        fn_02f09738((char*)object + 20, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
