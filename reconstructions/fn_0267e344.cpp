#include "botw/ranged_handle.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

struct Opaque_0267e344 {
    unsigned char unknown_0[172];
    RangedHandle handle_ac;
};

static inline void destroy(Opaque_0267e344* self, unsigned flags) {
    if (self) {
        self->handle_ac.release();
        fn_037b7d90(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}

extern "C" void fn_0267e344(void* object, unsigned flags) {
    destroy(static_cast<Opaque_0267e344*>(object), flags);
}
