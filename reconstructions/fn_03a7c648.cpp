#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10362938[];
extern "C" unsigned char data_10362948[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a5ab4(void* object, unsigned flags);
extern "C" void fn_03a7c54c(void*);

extern "C" void fn_03a7c648(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 12)) = data_10362938;
        (*(const void**)((char*)object + 16)) = data_10362948;
        fn_03a7c54c(object);
        fn_030a5ab4(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
