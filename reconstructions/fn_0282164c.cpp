#include "botw/ranged_handle.h"

extern "C" void fn_027fe828(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_0282164c {
    unsigned char unknown_0[84];
    RangedHandle handle_54;
    unsigned char unknown_70[76];
    unsigned char handle_bc[4];
};

extern "C" void fn_0282164c(Opaque_0282164c* self, unsigned flags) {
    if (self) {
        fn_0378da14(self->handle_bc);
        self->handle_54.release();
        fn_027fe828(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
