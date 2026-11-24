#include "botw/ranged_handle.h"

extern "C" void fn_027fb01c(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_0290849c {
    unsigned char unknown_0[356];
    RangedHandle handle_164;
};

extern "C" void fn_0290849c(Opaque_0290849c* self, unsigned flags) {
    if (self) {
        self->handle_164.release();
        fn_027fb01c(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
