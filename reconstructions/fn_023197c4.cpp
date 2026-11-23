#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_100843ac[];
extern "C" void fn_02e4ae28(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_023197c4(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_100843ac;
        fn_02e4ae28((char*)arg0 + 16);
        fn_030eb73c((char*)arg0 + 4, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
