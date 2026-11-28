#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10177360[];
extern "C" void fn_029a0a30(void *object);
extern "C" void fn_029a0a78(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

namespace {
struct Object {
    unsigned char padding_0[12];
    const void *vtable;
};
}

extern "C" void fn_029a0ab8(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        ((Object *)object)->vtable = data_10177360;
        fn_029a0a30(object);
        fn_029a0a78(object);
        fn_037b7d90(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
