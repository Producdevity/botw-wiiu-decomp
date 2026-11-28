#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101e92bc[];
extern "C" unsigned char data_101e92dc[];
extern "C" void fn_0308e6d0(void*);
extern "C" void fn_0309f8cc(void*);
extern "C" void fn_030a5ab4(void* object, unsigned flags);

namespace {
struct Object {
    char padding_0[40];
    const void* vtable_28;
    char padding_2c[36];
    const void* vtable_50;
};
}

extern "C" void fn_02daf95c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        ((Object*)object)->vtable_50 = data_101e92bc;
        ((Object*)object)->vtable_28 = data_101e92dc;
        fn_0309f8cc(object);
        fn_030a5ab4((char*)object + 28, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
