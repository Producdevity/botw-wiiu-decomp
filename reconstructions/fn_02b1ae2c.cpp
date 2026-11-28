#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101abaec[];
extern "C" void fn_02b19880(void*);
extern "C" void fn_02b84674(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

namespace {
struct Object {
    char padding_0[24];
    const void* vtable;
};
}

static void destroy(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        ((Object*)object)->vtable = data_101abaec;
        fn_02b19880(object);
        fn_02b84674((char*)object + 28, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

extern "C" void fn_02b1ae2c(void* object, unsigned flags) {
    destroy(object, flags);
}
