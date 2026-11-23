#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10418078[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_030bbd6c(void*, void*);

extern "C" void fn_04212988(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_10418078;
            (*(const void**)((char*)arg0 + 24)) = table;
        }
        fn_030bb614((char*)arg0 + 168, 2U);
        fn_030bbd6c(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
