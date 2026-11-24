#include "botw/ranged_handle.h"

extern "C" void fn_02666440(void* object, int value);
extern "C" void fn_0308e6d0(void *);

struct Opaque_02664544_158 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_02664544 {
    unsigned char unknown_0[344];
    Opaque_02664544_158 member_158;
};

extern "C" void fn_02664544(Opaque_02664544* self, unsigned flags) {
    if (self) {
        if (&self->member_158) {
            self->member_158.release();
        }
        fn_02666440(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
