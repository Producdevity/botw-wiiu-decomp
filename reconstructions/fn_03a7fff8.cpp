#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10362a00[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a75b14(void* object, unsigned flags);
extern "C" void fn_03a774c4(void* object, unsigned flags);
extern "C" void fn_03a7ffa0(unsigned char* object);

extern "C" void fn_03a7fff8(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 812)) = data_10362a00;
        fn_03a7ffa0((unsigned char*)(object));
        fn_03a774c4((char*)object + 464, 2U);
        fn_03a75b14((char*)object + 20, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
