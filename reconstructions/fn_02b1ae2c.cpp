#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101abaec[];
extern "C" void fn_02b19880(void*);
extern "C" void fn_02b84674(void *arg0, unsigned arg1);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02b1ae2c(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_101abaec;
            (*(const void**)((char*)arg0 + 24)) = table;
        }
        fn_02b19880(arg0);
        fn_02b84674((char*)arg0 + 28, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
