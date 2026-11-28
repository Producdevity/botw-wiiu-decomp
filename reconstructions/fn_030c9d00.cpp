#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027bf54[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_030d7a7c(void*, int);

extern "C" void fn_030c9d00(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_1027bf54;
            (*(const void**)((char*)object + 4)) = table;
        }
        fn_030d7a7c((char*)object + 252, 2);
        fn_030bb614((char*)object + 164, 2U);
        fn_030bb614((char*)object + 68, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
