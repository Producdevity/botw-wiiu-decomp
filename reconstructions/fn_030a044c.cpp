#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10260520[];
extern "C" unsigned char data_10260540[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0309f8cc(void *arg0);
extern "C" void fn_030a5ab4(void* object, unsigned flags);

extern "C" void fn_030a044c(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 80)) = data_10260520;
        (*(const void**)((char*)arg0 + 40)) = data_10260540;
        fn_0309f8cc(arg0);
        fn_030a5ab4((char*)arg0 + 28, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
