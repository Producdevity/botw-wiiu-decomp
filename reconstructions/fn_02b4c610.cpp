#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);

struct Opaque_02b4c610_110 {
    RangedHandle handle_0;
    unsigned char unknown_1c[12];
    unsigned char handle_28[4];

    void release() {
        fn_0378da14(handle_28);
        handle_0.release();
    }
};

struct Opaque_02b4c610 {
    unsigned char unknown_0[272];
    Opaque_02b4c610_110 member_110;
};

static inline void destroy(Opaque_02b4c610* self, unsigned flags) {
    if (self) {
        if (&self->member_110) {
            self->member_110.release();
        }
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}

extern "C" void fn_02b4c610(void* object, unsigned flags) {
    destroy(static_cast<Opaque_02b4c610*>(object), flags);
}
