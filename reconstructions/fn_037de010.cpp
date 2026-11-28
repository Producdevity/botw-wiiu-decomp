#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1031e740[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_037ddf00(void*);

extern "C" void fn_037de010(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_1031e740;
            (*(const void**)((char*)object + 172)) = table;
        }
        fn_037ddf00(object);
        fn_030bb614((char*)object + 56, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
