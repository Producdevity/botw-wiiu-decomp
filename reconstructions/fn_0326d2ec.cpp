#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1029bca0[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);
extern "C" void fn_0326d28c(void*);

extern "C" void fn_0326d2ec(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_1029bca0;
            (*(const void**)((char*)object + 12)) = table;
        }
        if ((*(int*)((char*)object + 32)) & 1) {
            fn_0326d28c(object);
        }
        fn_030eb73c((char*)object + 4, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
