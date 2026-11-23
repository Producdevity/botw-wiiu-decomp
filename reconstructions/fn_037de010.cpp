#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1031e740[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_037ddf00(void*);

extern "C" void fn_037de010(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_1031e740;
            (*(const void**)((char*)arg0 + 172)) = table;
        }
        fn_037ddf00(arg0);
        fn_030bb614((char*)arg0 + 56, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
