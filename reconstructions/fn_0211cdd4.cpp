#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

struct Opaque_0211cdd4_20 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_0211cdd4 {
    unsigned char unknown_0[4];
    unsigned char base_4[4];
    unsigned char unknown_8[12];
    unsigned char handle_14[4];
    unsigned char unknown_18[8];
    Opaque_0211cdd4_20 member_20;
};

extern "C" void fn_0211cdd4(Opaque_0211cdd4* self, unsigned flags) {
    if (self) {
        if (&self->member_20) {
            self->member_20.release();
        }
        fn_0378da14(self->handle_14);
        fn_030eb73c(self->base_4, 2);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
