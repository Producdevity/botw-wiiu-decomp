#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1033fe40[];
extern "C" unsigned char data_1033fe50[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03099488(void*, int);

extern "C" void fn_0394afa4(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 28)) = data_1033fe40;
        (*(const void**)((char*)object + 92)) = data_1033fe50;
        fn_03099488(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
