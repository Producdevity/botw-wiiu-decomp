#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1036afa4[];
extern "C" unsigned char data_1036afb4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03aca288(void*, int);

extern "C" void fn_03aca3f8(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 16)) = data_1036afa4;
        (*(const void**)((char*)arg0 + 52)) = data_1036afb4;
        fn_03aca288(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
