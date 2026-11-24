#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02933900 {
    unsigned char unknown_0[32];
    RangedHandle handle_20;
};

extern "C" void fn_02933900(Opaque_02933900* self, unsigned flags) {
    if (self) {
        self->handle_20.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
