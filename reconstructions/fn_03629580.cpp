#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102fd414[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0362951c(void *arg0);
extern "C" void fn_03629570(void*);

extern "C" void fn_03629580(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 20)) = data_102fd414;
        fn_0362951c(arg0);
        fn_03629570(arg0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
