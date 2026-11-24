#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_0275eb78 {
    unsigned char unknown_0[36];
    RangedHandle handle_24;
};

extern "C" void fn_0275eb78(Opaque_0275eb78* self, unsigned flags) {
    if (self) {
        self->handle_24.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
