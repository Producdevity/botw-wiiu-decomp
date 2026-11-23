#include "botw/ghs_intrinsics.h"

extern "C" void fn_02834298(void* object, unsigned flags);
extern "C" void fn_02b4db88(void*, int);
extern "C" void fn_02b4ec78(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_028381ac(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b4db88((char*)arg0 + 760, 2);
        fn_02b4ec78((char*)arg0 + 92, 2U);
        fn_02834298(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
