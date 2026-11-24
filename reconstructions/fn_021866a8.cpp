#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

struct Opaque_021866a8_54 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_021866a8_20 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_021866a8 {
    unsigned char unknown_0[4];
    unsigned char base_4[4];
    unsigned char unknown_8[24];
    Opaque_021866a8_20 member_20;
    unsigned char unknown_48[12];
    Opaque_021866a8_54 member_54;
};

extern "C" void fn_021866a8(Opaque_021866a8* self, unsigned flags) {
    if (self) {
        if (&self->member_54) {
            self->member_54.release();
        }
        if (&self->member_20) {
            self->member_20.release();
        }
        fn_030eb73c(self->base_4, 2);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
