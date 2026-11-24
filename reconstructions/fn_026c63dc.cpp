#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_026c63dc_58 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_026c63dc_34 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_026c63dc {
    unsigned char unknown_0[52];
    Opaque_026c63dc_34 member_34;
    unsigned char unknown_50[8];
    Opaque_026c63dc_58 member_58;
};

extern "C" void fn_026c63dc(Opaque_026c63dc* self, unsigned flags) {
    if (self) {
        if (&self->member_58) {
            self->member_58.release();
        }
        if (&self->member_34) {
            self->member_34.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
