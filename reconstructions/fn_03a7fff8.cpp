#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10362a00[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a75b14(void* object, unsigned flags);
extern "C" void fn_03a774c4(void* object, unsigned flags);
extern "C" void fn_03a7ffa0(unsigned char* object);

extern "C" void fn_03a7fff8(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 812)) = data_10362a00;
        fn_03a7ffa0((unsigned char*)(arg0));
        fn_03a774c4((char*)arg0 + 464, 2U);
        fn_03a75b14((char*)arg0 + 20, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
