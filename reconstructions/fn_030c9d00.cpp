#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027bf54[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_030d7a7c(void*, int);

extern "C" void fn_030c9d00(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_1027bf54;
            (*(const void**)((char*)arg0 + 4)) = table;
        }
        fn_030d7a7c((char*)arg0 + 252, 2);
        fn_030bb614((char*)arg0 + 164, 2U);
        fn_030bb614((char*)arg0 + 68, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
