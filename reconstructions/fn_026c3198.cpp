#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_026c3198_30 {
    RangedHandle handle_0;

    void release() {
        handle_0.release();
    }
};

struct Opaque_026c3198 {
    unsigned char unknown_0[48];
    Opaque_026c3198_30 member_30;
};

static inline void destroy(Opaque_026c3198* self, unsigned flags) {
    if (self) {
        if (&self->member_30) {
            self->member_30.release();
        }
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}

extern "C" void fn_026c3198(void* object, unsigned flags) {
    destroy(static_cast<Opaque_026c3198*>(object), flags);
}
