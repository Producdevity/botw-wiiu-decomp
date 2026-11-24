#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_026c8e3c_4c {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_026c8e3c_28 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_026c8e3c {
    unsigned char unknown_0[40];
    Opaque_026c8e3c_28 member_28;
    unsigned char unknown_44[8];
    Opaque_026c8e3c_4c member_4c;
};

extern "C" void fn_026c8e3c(Opaque_026c8e3c* self, unsigned flags) {
    if (self) {
        if (&self->member_4c) {
            self->member_4c.release();
        }
        if (&self->member_28) {
            self->member_28.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
