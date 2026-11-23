#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1034b490[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dfefc(void* object, unsigned flags);

extern "C" void fn_0399cc74(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 8)) = data_1034b490;
        fn_0308e6d0((*(void**)((char*)arg0 + 24)));
        fn_030dfefc(arg0, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
