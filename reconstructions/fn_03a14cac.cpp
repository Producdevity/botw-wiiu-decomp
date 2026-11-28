#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10357d24[];
extern "C" unsigned char data_10357d44[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0309f8cc(void *);
extern "C" void fn_030a5ab4(void* object, unsigned flags);

namespace {
struct Object {
    unsigned char padding_0[0x1C];
    unsigned char member[0xC];
    const void *second_vtable;
    unsigned char padding_2C[0x24];
    const void *vtable;
};
}

extern "C" void fn_03a14cac(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        static_cast<Object *>(object)->vtable = data_10357d24;
        static_cast<Object *>(object)->second_vtable = data_10357d44;
        fn_0309f8cc(object);
        fn_030a5ab4(static_cast<Object *>(object)->member, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
