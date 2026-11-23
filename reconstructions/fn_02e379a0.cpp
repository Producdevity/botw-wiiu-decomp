#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10213d94[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_039794d0(void*, int);
extern "C" void fn_03ae44f4(void*, int);

extern "C" void fn_02e379a0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 16)) = data_10213d94;
        fn_03ae44f4((char*)arg0 + 2952, 2);
        fn_039794d0(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
