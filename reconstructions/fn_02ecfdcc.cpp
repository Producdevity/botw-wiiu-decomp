#include "botw/ghs_intrinsics.h"

extern "C" void fn_02ecfbdc(void* object, unsigned flags);
extern "C" void fn_02ed0de0(void* object, unsigned flags);
extern "C" void fn_02f09738(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02ecfdcc(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02ed0de0((char*)arg0 + 48, 2U);
        fn_02ecfbdc((char*)arg0 + 36, 2U);
        fn_02f09738((char*)arg0 + 20, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
