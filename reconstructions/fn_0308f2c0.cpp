#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027b05c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030be524(void*, unsigned);

extern "C" void fn_0308f2c0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        if (((char*)arg0 + 44) != 0) {
            {
                const void* const table = data_1027b05c;
                (*(const void**)((char*)arg0 + 364)) = table;
            }
            fn_030be524((char*)arg0 + 44, 0);
        }
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
