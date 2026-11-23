#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102bccf4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_033c8ef4(void*);

extern "C" void fn_033c90b4(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 80)) = data_102bccf4;
        fn_033c8ef4(arg0);
        fn_030bb614(arg0, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
