#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10332268[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_038c3b28(void*);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)object) = data_10332268;
        if ((*(int*)((char*)object + 116)) & 1) {
            fn_038c3b28(object);
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_038c3c58(void *object, unsigned flags) {
    destroy(object, flags);
}
