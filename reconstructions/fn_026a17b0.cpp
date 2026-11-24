#include "botw/ranged_handle.h"

extern "C" void fn_02674a24(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

struct Opaque_026a17b0 {
    unsigned char unknown_0[44];
    RangedHandle handle_2c;
};

extern "C" void fn_026a17b0(Opaque_026a17b0* self, unsigned flags) {
    if (self) {
        self->handle_2c.release();
        fn_02674a24(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
