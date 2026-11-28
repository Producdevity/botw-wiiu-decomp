#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102fd414[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0362951c(void *);
extern "C" void fn_03629570(void*);

namespace {
struct Object {
    unsigned char padding_0[0x14];
    const void *vtable;
};
}

extern "C" void fn_03629580(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        static_cast<Object *>(object)->vtable = data_102fd414;
        fn_0362951c(object);
        fn_03629570(object);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
