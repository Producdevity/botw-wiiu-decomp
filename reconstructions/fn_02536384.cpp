#include "botw/ranged_handle.h"

extern "C" void fn_02a07650(void* object, int value);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02536384 {
    unsigned char unknown_0[32];
    RangedHandle handle_20;
    unsigned char unknown_3c[24];
    unsigned char base_54[4];
};

extern "C" void fn_02536384(Opaque_02536384* self, unsigned flags) {
    if (self) {
        fn_02a07650(self->base_54, 2);
        self->handle_20.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
