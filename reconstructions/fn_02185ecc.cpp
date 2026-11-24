#include "botw/ranged_handle.h"

struct Opaque_021866a8;
extern "C" void fn_021866a8(Opaque_021866a8* self, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_02185ecc_b4 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_02185ecc {
    unsigned char unknown_0[164];
    unsigned char handle_a4[4];
    unsigned char unknown_a8[12];
    Opaque_02185ecc_b4 member_b4;
    unsigned char unknown_dc[28];
    unsigned char handle_f8[4];
};

extern "C" void fn_02185ecc(Opaque_02185ecc* self, unsigned flags) {
    if (self) {
        fn_0378da14(self->handle_f8);
        if (&self->member_b4) {
            self->member_b4.release();
        }
        fn_0378da14(self->handle_a4);
        fn_021866a8((Opaque_021866a8*)self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
