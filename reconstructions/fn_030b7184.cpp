#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027a5ac[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0308e6d4(void *);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)object) = data_1027a5ac;
        if ((*(int*)((char*)object + 16)) & 1) {
            fn_0308e6d4((*(void**)((char*)object + 4)));
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_030b7184(void *object, unsigned flags) {
    destroy(object, flags);
}
