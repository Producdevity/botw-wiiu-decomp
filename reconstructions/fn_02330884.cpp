#include "botw/ranged_handle.h"

struct Opaque_02330884 {
    unsigned char unknown_00[4];
    unsigned char base[112];
    RangedHandle handle;
};

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_02330884(Opaque_02330884* self, unsigned flags) {
    if (self) {
        self->handle.release();
        fn_030eb73c(self->base, 2);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
