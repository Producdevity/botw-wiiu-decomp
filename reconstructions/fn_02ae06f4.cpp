#include "botw/ranged_handle.h"

extern "C" const unsigned char data_101a8770[];
extern "C" void fn_0308e6d0(void *);

struct Opaque_02ae06f4_60 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_02ae06f4 {
    unsigned char unknown_0[16];
    const void* vtable_10;
    unsigned char unknown_14[36];
    RangedHandle handle_38;
    unsigned char unknown_54[12];
    Opaque_02ae06f4_60 member_60;
};

extern "C" void fn_02ae06f4(Opaque_02ae06f4* self, unsigned flags) {
    if (self) {
        self->vtable_10 = data_101a8770;
        if (&self->member_60) {
            self->member_60.release();
        }
        self->handle_38.release();
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
