#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103023f4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0366c4ac(void* object, unsigned flags);
extern "C" void fn_03670f78(void *arg0, void *arg1);

extern "C" void fn_0366c4c0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_103023f4;
        fn_0366c4ac((char*)arg0 + 92, 2U);
        fn_03670f78(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
