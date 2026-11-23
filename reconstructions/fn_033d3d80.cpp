#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102bcf04[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_039794d0(void*, int);
extern "C" void fn_03ae44f4(void*, int);

extern "C" void fn_033d3d80(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 16)) = data_102bcf04;
        fn_03ae44f4((char*)arg0 + 3016, 2);
        fn_03ae44f4((char*)arg0 + 2948, 2);
        fn_039794d0(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
