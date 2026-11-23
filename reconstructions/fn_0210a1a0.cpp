#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b14d4c(void* object, unsigned flags);
extern "C" void fn_02b61568(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_0210a1a0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b14d4c((char*)arg0 + 148, 2U);
        fn_02b61568((char*)arg0 + 140, 2U);
        fn_030eb73c((char*)arg0 + 4, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
