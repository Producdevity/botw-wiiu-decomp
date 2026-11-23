#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101ee248[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a5ab4(void* object, unsigned flags);
extern "C" void fn_03619dcc(void*, int);

extern "C" void fn_02de1be4(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_101ee248;
            (*(const void**)((char*)arg0 + 1424)) = table;
        }
        fn_030a5ab4((char*)arg0 + 1412, 0);
        fn_03619dcc(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
