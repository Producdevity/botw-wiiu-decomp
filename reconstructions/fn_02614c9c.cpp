#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02614c9c_4c {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_02614c9c_0 {
    unsigned char unknown_0[32];
    RangedHandle handle_20;
    unsigned char unknown_3c[16];
    Opaque_02614c9c_4c member_4c;

    void release() {
        if (&member_4c) {
            member_4c.release();
        }
        handle_20.release();
        fn_037b7d90(this, 0);
    }
};

struct Opaque_02614c9c {
    Opaque_02614c9c_0 member_0;
};

static inline void destroy(Opaque_02614c9c* self, unsigned flags) {
    if (self) {
        if (&self->member_0) {
            self->member_0.release();
        }
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}

extern "C" void fn_02614c9c(void* object, unsigned flags) {
    destroy(static_cast<Opaque_02614c9c*>(object), flags);
}
