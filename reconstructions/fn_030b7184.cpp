#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027a5ac[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0308e6d4(void *);

extern "C" void fn_030b7184(void* arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)arg0) = data_1027a5ac;
        if ((*(int*)((char*)arg0 + 16)) & 1) {
            fn_0308e6d4((*(void**)((char*)arg0 + 4)));
        }
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
