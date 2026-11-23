#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103a3ee8[];
extern "C" unsigned char data_103a3ef8[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03b280a4(void*, int);

extern "C" void fn_03b4ae04(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 4)) = data_103a3ee8;
        (*(const void**)((char*)arg0 + 40)) = data_103a3ef8;
        fn_03b280a4(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
