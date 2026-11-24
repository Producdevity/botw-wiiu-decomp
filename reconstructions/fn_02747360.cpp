#include "botw/ranged_handle.h"

extern "C" void fn_026fad78(void* object, int value);
extern "C" void fn_0308e6d0(void *);

struct Opaque_02747360_2cc {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_02747360 {
    unsigned char unknown_0[716];
    Opaque_02747360_2cc member_2cc;
};

extern "C" void fn_02747360(Opaque_02747360* self, unsigned flags) {
    if (self) {
        if (&self->member_2cc) {
            self->member_2cc.release();
        }
        fn_026fad78(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
