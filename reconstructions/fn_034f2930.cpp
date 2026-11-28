#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102d020c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_034f28c0(void*);
extern "C" void fn_037e6024(void* storage, unsigned flags);

extern "C" void fn_034f2930(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_102d020c;
            (*(const void**)((char*)object + 228)) = table;
        }
        fn_034f28c0(object);
        fn_037e6024((char*)object + 172, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
