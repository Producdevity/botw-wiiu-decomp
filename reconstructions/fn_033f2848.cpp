#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102bfb20[];
extern "C" unsigned char data_102bfb30[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_033f26f0(void*);

extern "C" void fn_033f2848(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_102bfb30;
            (*(const void**)((char*)arg0 + 32)) = table;
        }
        {
            const void* const table2 = data_102bfb20;
            (*(const void**)((char*)arg0 + 396)) = table2;
        }
        fn_033f26f0(arg0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
