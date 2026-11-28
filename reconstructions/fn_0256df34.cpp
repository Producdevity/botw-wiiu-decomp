#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_100e29a0[];
extern "C" void fn_0256dee8(void *);
extern "C" void fn_0257937c(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

namespace {
struct Object {
    unsigned char padding_0[12];
    const void *vtable;
};
}

extern "C" void fn_0256df34(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        static_cast<Object *>(object)->vtable = data_100e29a0;
        fn_0256dee8(object);
        fn_0257937c(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
