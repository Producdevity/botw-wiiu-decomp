#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028fcae0_3c {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_028fcae0 {
    unsigned char unknown_0[48];
    unsigned char handle_30[4];
    unsigned char unknown_34[8];
    Opaque_028fcae0_3c member_3c;
    unsigned char unknown_64[28];
    unsigned char handle_80[4];
};

extern "C" void fn_028fcae0(Opaque_028fcae0* self, unsigned flags) {
    if (self) {
        fn_0378da14(self->handle_80);
        if (&self->member_3c) {
            self->member_3c.release();
        }
        fn_0378da14(self->handle_30);
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
