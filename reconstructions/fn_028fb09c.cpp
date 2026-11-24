#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028fb09c_2c {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_028fb09c {
    unsigned char unknown_0[44];
    Opaque_028fb09c_2c member_2c;
};

extern "C" void fn_028fb09c(Opaque_028fb09c* self, unsigned flags) {
    if (self) {
        if (&self->member_2c) {
            self->member_2c.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
