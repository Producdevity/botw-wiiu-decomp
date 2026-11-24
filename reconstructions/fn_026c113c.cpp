#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_026c113c_34 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_026c113c {
    unsigned char unknown_0[52];
    Opaque_026c113c_34 member_34;
};

extern "C" void fn_026c113c(Opaque_026c113c* self, unsigned flags) {
    if (self) {
        if (&self->member_34) {
            self->member_34.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
