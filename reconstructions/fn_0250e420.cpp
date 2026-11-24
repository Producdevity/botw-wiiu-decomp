#include "botw/ranged_handle.h"

extern "C" void fn_025c21d0(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_0250e420_2a8 {
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

struct Opaque_0250e420 {
    unsigned char unknown_0[680];
    Opaque_0250e420_2a8 member_2a8;
};

extern "C" void fn_0250e420(Opaque_0250e420* self, unsigned flags) {
    if (self) {
        if (&self->member_2a8) {
            self->member_2a8.release();
        }
        fn_025c21d0(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
