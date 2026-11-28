#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103cee30[];
extern "C" unsigned char data_103cee88[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_03bd71bc(void*);

extern "C" void fn_03bd732c(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)object) = data_103cee30;
        {
            const void* const table = data_103cee88;
            (*(const void**)((char*)object + 12)) = table;
        }
        fn_03bd71bc(object);
        fn_030bb614((char*)object + 252, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
