#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

struct Opaque_02366b18_40 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_02366b18 {
    unsigned char unknown_0[4];
    unsigned char base_4[4];
    unsigned char unknown_8[40];
    unsigned char handle_30[4];
    unsigned char unknown_34[12];
    Opaque_02366b18_40 member_40;
};

extern "C" void fn_02366b18(Opaque_02366b18* self, unsigned flags) {
    if (self) {
        if (&self->member_40) {
            self->member_40.release();
        }
        fn_0378da14(self->handle_30);
        fn_030eb73c(self->base_4, 2);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
