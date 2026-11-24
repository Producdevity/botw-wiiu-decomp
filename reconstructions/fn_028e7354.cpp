#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_031cf8d0(void* object, int value);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_028e7354_4c {
    unsigned char unknown_0[4];
    unsigned char handle_4[4];
    unsigned char unknown_8[8];
    unsigned char base_10[4];

    void release() {
        fn_031cf8d0(base_10, 2);
        fn_0378da14(handle_4);
    }
};

struct Opaque_028e7354 {
    unsigned char unknown_0[32];
    RangedHandle handle_20;
    unsigned char unknown_3c[16];
    Opaque_028e7354_4c member_4c;
};

extern "C" void fn_028e7354(Opaque_028e7354* self, unsigned flags) {
    if (self) {
        if (&self->member_4c) {
            self->member_4c.release();
        }
        self->handle_20.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
