#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10362938[];
extern "C" unsigned char data_10362948[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a5ab4(void* object, unsigned flags);
extern "C" void fn_03a7c54c(void*);

extern "C" void fn_03a7c648(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_10362938;
        (*(const void**)((char*)arg0 + 16)) = data_10362948;
        fn_03a7c54c(arg0);
        fn_030a5ab4(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
