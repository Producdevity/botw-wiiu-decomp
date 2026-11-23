#include "botw/ghs_intrinsics.h"

extern "C" void fn_02de6728(void* object, unsigned flags);
extern "C" void fn_03046190(void* object, unsigned flags);
extern "C" void fn_03046268(void* object, unsigned flags);
extern "C" void fn_030463a0(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0304502c(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_030463a0((char*)arg0 + 1040, 2U);
        fn_03046268((char*)arg0 + 1008, 2U);
        fn_03046190((char*)arg0 + 952, 2U);
        fn_02de6728(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
