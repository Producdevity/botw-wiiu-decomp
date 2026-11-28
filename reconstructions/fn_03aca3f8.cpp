#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1036afa4[];
extern "C" unsigned char data_1036afb4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03aca288(void*, int);

extern "C" void fn_03aca3f8(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 16)) = data_1036afa4;
        (*(const void**)((char*)object + 52)) = data_1036afb4;
        fn_03aca288(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
