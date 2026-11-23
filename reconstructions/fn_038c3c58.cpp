#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10332268[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_038c3b28(void*);

extern "C" void fn_038c3c58(void* arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)arg0) = data_10332268;
        if ((*(int*)((char*)arg0 + 116)) & 1) {
            fn_038c3b28(arg0);
        }
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
