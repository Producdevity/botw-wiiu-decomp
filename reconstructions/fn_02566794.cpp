#include "botw/ranged_handle.h"

struct Opaque_02566794 {
    unsigned char unknown_00[32];
    RangedHandle handle;
};

extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02566794(Opaque_02566794* self, unsigned flags) {
    if (self) {
        self->handle.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
