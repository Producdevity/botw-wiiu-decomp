#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103cee30[];
extern "C" unsigned char data_103cee88[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_03bd71bc(void*);

extern "C" void fn_03bd732c(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)arg0) = data_103cee30;
        {
            const void* const table = data_103cee88;
            (*(const void**)((char*)arg0 + 12)) = table;
        }
        fn_03bd71bc(arg0);
        fn_030bb614((char*)arg0 + 252, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
