#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028f9a88_38 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_028f9a88 {
    unsigned char unknown_0[56];
    Opaque_028f9a88_38 member_38;
};

extern "C" void fn_028f9a88(Opaque_028f9a88* self, unsigned flags) {
    if (self) {
        if (&self->member_38) {
            self->member_38.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
