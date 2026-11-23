#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1029bca0[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);
extern "C" void fn_0326d28c(void*);

extern "C" void fn_0326d2ec(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_1029bca0;
            (*(const void**)((char*)arg0 + 12)) = table;
        }
        if ((*(int*)((char*)arg0 + 32)) & 1) {
            fn_0326d28c(arg0);
        }
        fn_030eb73c((char*)arg0 + 4, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
