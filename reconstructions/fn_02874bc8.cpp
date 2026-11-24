#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02874bc8_20 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_02874bc8 {
    unsigned char unknown_0[32];
    Opaque_02874bc8_20 member_20;
};

extern "C" void fn_02874bc8(Opaque_02874bc8* self, unsigned flags) {
    if (self) {
        if (&self->member_20) {
            self->member_20.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
