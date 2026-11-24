#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028a572c_50 {
    RangedHandle handle_0;
    unsigned char unknown_1c[8];
    unsigned char handle_24[4];

    void release() {
        fn_0378da14(handle_24);
        handle_0.release();
    }
};

struct Opaque_028a572c {
    unsigned char unknown_0[36];
    RangedHandle handle_24;
    unsigned char unknown_40[16];
    Opaque_028a572c_50 member_50;
};

extern "C" void fn_028a572c(Opaque_028a572c* self, unsigned flags) {
    if (self) {
        if (&self->member_50) {
            self->member_50.release();
        }
        self->handle_24.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
