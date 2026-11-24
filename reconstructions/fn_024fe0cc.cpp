#include "botw/ranged_handle.h"

struct Opaque_024fe0cc {
    unsigned char unknown_00[572];
    RangedHandle handle;
};

extern "C" void fn_02500818(void* object, int flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_024fe0cc(Opaque_024fe0cc* self, unsigned flags) {
    if (self) {
        self->handle.release();
        fn_02500818(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
