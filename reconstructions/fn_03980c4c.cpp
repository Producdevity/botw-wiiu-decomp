#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10349338[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0397dad8(void*);
extern "C" void fn_03980b18(void*, int);
extern "C" void fn_03980ba8(void*, int);
extern "C" void fn_03980c38(void* object, unsigned flags);

namespace {
inline void destroy(void *object, int flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 32)) = data_10349338;
        fn_0397dad8(object);
        fn_03980ba8((char*)object + 352, 2);
        fn_03980b18((char*)object + 252, 2);
        fn_03980c38((char*)object + 116, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_03980c4c(void *object, unsigned flags) {
    destroy(object, flags);
}
