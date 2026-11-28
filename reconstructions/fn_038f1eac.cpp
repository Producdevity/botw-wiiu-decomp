#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10335a30[];
extern "C" unsigned char data_10335a50[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_038f1e10(void*);

extern "C" void fn_038f1eac(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)object) = data_10335a30;
        (*(const void**)((char*)object + 4)) = data_10335a50;
        fn_038f1e10(object);
        fn_030bb614((char*)object + 36, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
