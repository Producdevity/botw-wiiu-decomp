#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_02857880 {
    unsigned char unknown_0[68];
    RangedHandle handle_44;
};

static inline void destroy(Opaque_02857880* self, unsigned flags) {
    if (self) {
        self->handle_44.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}

extern "C" void fn_02857880(void* object, unsigned flags) {
    destroy(static_cast<Opaque_02857880*>(object), flags);
}
