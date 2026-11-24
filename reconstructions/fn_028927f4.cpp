#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028927f4_30 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_028927f4 {
    unsigned char unknown_0[48];
    Opaque_028927f4_30 member_30;
};

extern "C" void fn_028927f4(Opaque_028927f4* self, unsigned flags) {
    if (self) {
        if (&self->member_30) {
            self->member_30.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
