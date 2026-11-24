#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028a6284_44 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_028a6284_20 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_028a6284 {
    unsigned char unknown_0[32];
    Opaque_028a6284_20 member_20;
    unsigned char unknown_3c[8];
    Opaque_028a6284_44 member_44;
};

extern "C" void fn_028a6284(Opaque_028a6284* self, unsigned flags) {
    if (self) {
        if (&self->member_44) {
            self->member_44.release();
        }
        if (&self->member_20) {
            self->member_20.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
