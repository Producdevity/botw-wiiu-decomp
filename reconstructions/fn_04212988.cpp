#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10418078[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_030bbd6c(void*, void*);

extern "C" void fn_04212988(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_10418078;
            (*(const void**)((char*)object + 24)) = table;
        }
        fn_030bb614((char*)object + 168, 2U);
        fn_030bbd6c(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
