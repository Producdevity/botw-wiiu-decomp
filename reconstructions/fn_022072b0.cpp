#include "botw/ranged_handle.h"

struct Opaque_022072b0 {
    unsigned char unknown_00[4];
    unsigned char base[32];
    RangedHandle handle;
};

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_022072b0(Opaque_022072b0* self, unsigned flags) {
    if (self) {
        self->handle.release();
        fn_030eb73c(self->base, 2);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
