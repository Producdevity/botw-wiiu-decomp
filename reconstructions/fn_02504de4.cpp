#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02504de4_44 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_02504de4 {
    unsigned char unknown_0[32];
    RangedHandle handle_20;
    unsigned char unknown_3c[8];
    Opaque_02504de4_44 member_44;
};

static inline void destroy(Opaque_02504de4* self, unsigned flags) {
    if (self) {
        if (&self->member_44) {
            self->member_44.release();
        }
        self->handle_20.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}

extern "C" void fn_02504de4(void* object, unsigned flags) {
    destroy(static_cast<Opaque_02504de4*>(object), flags);
}
