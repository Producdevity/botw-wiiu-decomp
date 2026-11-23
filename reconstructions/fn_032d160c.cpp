#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102a91a0[];
extern "C" unsigned char data_102c94ac[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0347339c(void*, int);

extern "C" void fn_032d160c(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_102a91a0;
            (*(const void**)((char*)arg0 + 12)) = table;
        }
        fn_0347339c((char*)arg0 + 44, 2);
        {
            const void* const table2 = data_102c94ac;
            (*(const void**)((char*)arg0 + 12)) = table2;
        }
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
