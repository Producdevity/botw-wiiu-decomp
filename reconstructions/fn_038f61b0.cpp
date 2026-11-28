#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10335e8c[];
extern "C" unsigned char data_10335f5c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bf26c(void* object, unsigned flags);

extern "C" void fn_038f61b0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_10335f5c;
            (*(const void**)((char*)object + 56)) = table;
        }
        fn_030bf26c((char*)object + 184, 2U);
        {
            const void* const table2 = data_10335e8c;
            (*(const void**)((char*)object + 56)) = table2;
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
