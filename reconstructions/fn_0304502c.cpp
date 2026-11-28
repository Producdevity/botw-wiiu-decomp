#include "botw/ghs_intrinsics.h"

extern "C" void fn_02de6728(void* object, unsigned flags);
extern "C" void fn_03046190(void* object, unsigned flags);
extern "C" void fn_03046268(void* object, unsigned flags);
extern "C" void fn_030463a0(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0304502c(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_030463a0((char*)object + 1040, 2U);
        fn_03046268((char*)object + 1008, 2U);
        fn_03046190((char*)object + 952, 2U);
        fn_02de6728(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
