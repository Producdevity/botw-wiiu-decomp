#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1028afe0[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03176280(void*, int);
extern "C" void fn_03177594(void*, int);

extern "C" void fn_031762e4(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 8)) = data_1028afe0;
        fn_03176280((char*)arg0 + 12, 2);
        fn_03177594(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
