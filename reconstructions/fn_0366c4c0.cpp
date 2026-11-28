#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103023f4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0366c4ac(void* object, unsigned flags);
extern "C" void fn_03670f78(void *, void *);

namespace {
struct Object {
    unsigned char padding_0[0xC];
    const void *vtable;
    unsigned char padding_10[0x4C];
    unsigned char member[1];
};
}

extern "C" void fn_0366c4c0(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        static_cast<Object *>(object)->vtable = data_103023f4;
        fn_0366c4ac(static_cast<Object *>(object)->member, 2U);
        fn_03670f78(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
