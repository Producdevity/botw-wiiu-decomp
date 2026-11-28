#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027b05c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030be524(void*, unsigned);

extern "C" void fn_0308f2c0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        if (((char*)object + 44) != 0) {
            {
                const void* const table = data_1027b05c;
                (*(const void**)((char*)object + 364)) = table;
            }
            fn_030be524((char*)object + 44, 0);
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
