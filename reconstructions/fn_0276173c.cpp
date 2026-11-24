#include "botw/ranged_handle.h"

extern "C" void fn_02761d84(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_0276173c_28 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_0276173c {
    unsigned char unknown_0[40];
    Opaque_0276173c_28 member_28;
    unsigned char unknown_44[24];
    unsigned char handle_5c[4];
};

extern "C" void fn_0276173c(Opaque_0276173c* self, unsigned flags) {
    if (self) {
        fn_0378da14(self->handle_5c);
        if (&self->member_28) {
            self->member_28.release();
        }
        fn_02761d84(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
