#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10037e64[];
extern "C" void fn_0211bb00(void* object, unsigned flags);
extern "C" void fn_0217fbe0(void*);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0217fca0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_10037e64;
            (*(const void**)((char*)object + 12)) = table;
        }
        fn_0217fbe0(object);
        fn_0211bb00(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
