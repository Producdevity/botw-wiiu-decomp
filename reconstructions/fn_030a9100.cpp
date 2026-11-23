#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10260e3c[];
extern "C" unsigned char data_10260ed4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a96a8(void*, int);
extern "C" void fn_030a98a8(void*);

extern "C" void fn_030a9100(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_10260ed4;
        (*(const void**)((char*)arg0 + 24)) = data_10260e3c;
        fn_030a98a8(arg0);
        fn_030a96a8(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
