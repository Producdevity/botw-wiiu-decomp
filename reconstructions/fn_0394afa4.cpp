#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1033fe40[];
extern "C" unsigned char data_1033fe50[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03099488(void*, int);

extern "C" void fn_0394afa4(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 28)) = data_1033fe40;
        (*(const void**)((char*)arg0 + 92)) = data_1033fe50;
        fn_03099488(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
