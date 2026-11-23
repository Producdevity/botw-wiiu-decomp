#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10335a30[];
extern "C" unsigned char data_10335a50[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_038f1e10(void*);

extern "C" void fn_038f1eac(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)arg0) = data_10335a30;
        (*(const void**)((char*)arg0 + 4)) = data_10335a50;
        fn_038f1e10(arg0);
        fn_030bb614((char*)arg0 + 36, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
