#include "botw/ranged_handle.h"

extern "C" void fn_025c21d0(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_0272ff48_2a4 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_0272ff48 {
    unsigned char unknown_0[676];
    Opaque_0272ff48_2a4 member_2a4;
};

extern "C" void fn_0272ff48(Opaque_0272ff48* self, unsigned flags) {
    if (self) {
        if (&self->member_2a4) {
            self->member_2a4.release();
        }
        fn_025c21d0(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
