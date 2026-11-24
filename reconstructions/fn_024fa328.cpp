#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_024fa328_28 {
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

struct Opaque_024fa328 {
    unsigned char unknown_0[40];
    Opaque_024fa328_28 member_28;
};

extern "C" void fn_024fa328(Opaque_024fa328* self, unsigned flags) {
    if (self) {
        if (&self->member_28) {
            self->member_28.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
