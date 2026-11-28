#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101c6dc4[];
extern "C" void fn_0308e6d0(void *);

namespace {
struct Base {
    char padding_0[12];
    void *vtable;
};

struct Object {
    const void *vtable;
    Base *base;
};
}

extern "C" void fn_02c5799c(void* object, unsigned flags) {
    __schedule_barrier();
    Base *base;

    if (object != 0) {
        base = ((Object *)object)->base;
        ((Object *)object)->vtable = data_101c6dc4;
        (*(int (**)(void *))((char *)base->vtable + 36))(base);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
