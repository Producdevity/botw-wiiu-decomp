#include "botw/ranged_handle.h"

extern "C" void fn_027fe828(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_0281d71c {
    unsigned char unknown_0[104];
    RangedHandle handle_68;
};

extern "C" void fn_0281d71c(Opaque_0281d71c* self, unsigned flags) {
    if (self) {
        self->handle_68.release();
        fn_027fe828(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
