#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);

struct Opaque_02e295bc_120 {
    unsigned char unknown_0[256];
    RangedHandle handle_100;

    void release() {
        handle_100.release();
    }
};

struct Opaque_02e295bc {
    unsigned char unknown_0[136];
    unsigned char handle_88[4];
    unsigned char unknown_8c[8];
    unsigned char handle_94[4];
    unsigned char unknown_98[8];
    unsigned char handle_a0[4];
    unsigned char unknown_a4[124];
    Opaque_02e295bc_120 member_120;
};

extern "C" void fn_02e295bc(Opaque_02e295bc* self, unsigned flags) {
    if (self) {
        if (&self->member_120) {
            self->member_120.release();
        }
        fn_0378da14(self->handle_a0);
        fn_0378da14(self->handle_94);
        fn_0378da14(self->handle_88);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
