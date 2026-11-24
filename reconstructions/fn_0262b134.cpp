#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_0262b134 {
    unsigned char unknown_0[40];
    RangedHandle handle_28;
};

extern "C" void fn_0262b134(Opaque_0262b134* self, unsigned flags) {
    if (self) {
        self->handle_28.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
