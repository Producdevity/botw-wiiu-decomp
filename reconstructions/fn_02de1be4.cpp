#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101ee248[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a5ab4(void* object, unsigned flags);
extern "C" void fn_03619dcc(void*, int);

extern "C" void fn_02de1be4(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_101ee248;
            (*(const void**)((char*)object + 1424)) = table;
        }
        fn_030a5ab4((char*)object + 1412, 0);
        fn_03619dcc(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
