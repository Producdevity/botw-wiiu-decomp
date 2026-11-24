#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_0299499c_c8 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_0299499c {
    unsigned char unknown_0[72];
    RangedHandle handle_48;
    unsigned char unknown_64[16];
    RangedHandle handle_74;
    unsigned char unknown_90[16];
    RangedHandle handle_a0;
    unsigned char unknown_bc[12];
    Opaque_0299499c_c8 member_c8;
};

extern "C" void fn_0299499c(Opaque_0299499c* self, unsigned flags) {
    if (self) {
        if (&self->member_c8) {
            self->member_c8.release();
        }
        self->handle_a0.release();
        self->handle_74.release();
        self->handle_48.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
