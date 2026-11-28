#include "botw/ghs_intrinsics.h"

extern "C" void fn_029ef414(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_0333bcec(void* object, unsigned flags);

extern "C" void fn_029ef454(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_029ef414(object);
        fn_030bb614((char*)object + 88, 2U);
        fn_0333bcec((char*)object + 56, 2U);
        fn_0333bcec((char*)object + 44, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
