#include "botw/ghs_intrinsics.h"
typedef int s32;

typedef s32 (*VirtualFn)(void *);

namespace {
struct VTable {
    VirtualFn slots[10];
};

struct DestroyableObject {
    unsigned char padding_0[0xC];
    VTable *vtable;
};
}

extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02e4a93c(void **owner, unsigned deleteFlags) {
    const unsigned flags = deleteFlags;
    __schedule_barrier();

    if (owner != 0) {
        DestroyableObject *object = (DestroyableObject *)*owner;
        VirtualFn destroy = object->vtable->slots[9];
        destroy(object);
        if (flags & 1) {
            fn_0308e6d0(owner);
        }
    }
}
