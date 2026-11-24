#include "botw/ranged_handle.h"

struct Opaque_027e8e38;
extern "C" void fn_027e8e38(Opaque_027e8e38* self, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_024cc7e4_e8 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_024cc7e4 {
    unsigned char unknown_0[188];
    unsigned char handle_bc[4];
    unsigned char unknown_c0[24];
    unsigned char handle_d8[4];
    unsigned char unknown_dc[12];
    Opaque_024cc7e4_e8 member_e8;
};

extern "C" void fn_024cc7e4(Opaque_024cc7e4* self, unsigned flags) {
    if (self) {
        if (&self->member_e8) {
            self->member_e8.release();
        }
        fn_0378da14(self->handle_d8);
        fn_0378da14(self->handle_bc);
        fn_027e8e38((Opaque_027e8e38*)self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
