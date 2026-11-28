#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1006ca10[];
extern "C" unsigned char data_102c94ac[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0347339c(void*, int);

extern "C" void fn_0228567c(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_1006ca10;
            (*(const void**)((char*)object + 12)) = table;
        }
        fn_0347339c((char*)object + 36, 2);
        {
            const void* const table2 = data_102c94ac;
            (*(const void**)((char*)object + 12)) = table2;
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
