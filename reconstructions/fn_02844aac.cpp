#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02844aac_48 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_02844aac {
    unsigned char unknown_0[56];
    unsigned char handle_38[4];
    unsigned char unknown_3c[12];
    Opaque_02844aac_48 member_48;
};

extern "C" void fn_02844aac(Opaque_02844aac* self, unsigned flags) {
    if (self) {
        if (&self->member_48) {
            self->member_48.release();
        }
        fn_0378da14(self->handle_38);
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
