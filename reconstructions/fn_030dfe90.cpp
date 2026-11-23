#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027d260[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bbd6c(void*, void*);
extern "C" void fn_030dea80(void* object, unsigned flags);

extern "C" void fn_030dfe90(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_1027d260;
            (*(const void**)((char*)arg0 + 24)) = table;
        }
        fn_030dea80((char*)arg0 + 208, 2U);
        fn_030bbd6c(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
