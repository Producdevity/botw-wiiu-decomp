#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02787644 {
    unsigned char unknown_0[40];
    RangedHandle handle_28;
};

extern "C" void fn_02787644(Opaque_02787644* self, unsigned flags) {
    if (self) {
        self->handle_28.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
