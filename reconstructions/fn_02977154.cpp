#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02977154_40 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];
    unsigned char unknown_28[8];
    unsigned char handle_30[4];

    void release() {
        fn_0378da14(handle_30);
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_02977154 {
    unsigned char unknown_0[64];
    Opaque_02977154_40 member_40;
};

extern "C" void fn_02977154(Opaque_02977154* self, unsigned flags) {
    if (self) {
        if (&self->member_40) {
            self->member_40.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
