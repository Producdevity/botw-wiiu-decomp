#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_027a47d0(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_030bb614((char*)object + 104, 2U);
        fn_030bb614((char*)object + 32, 2U);
        fn_037b7d90(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
