#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_029a9e48_48 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_029a9e48 {
    unsigned char unknown_0[36];
    unsigned char handle_24[4];
    unsigned char unknown_28[8];
    unsigned char handle_30[4];
    unsigned char unknown_34[8];
    unsigned char handle_3c[4];
    unsigned char unknown_40[8];
    Opaque_029a9e48_48 member_48;
};

extern "C" void fn_029a9e48(Opaque_029a9e48* self, unsigned flags) {
    if (self) {
        if (&self->member_48) {
            self->member_48.release();
        }
        fn_0378da14(self->handle_3c);
        fn_0378da14(self->handle_30);
        fn_0378da14(self->handle_24);
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
