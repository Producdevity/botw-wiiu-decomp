#include "botw/ghs_intrinsics.h"
struct Opaque_036a02cc {
    unsigned flags;
};

extern "C" void fn_036a02cc(Opaque_036a02cc* object, bool enabled) {
    if (enabled)
        object->flags |= 0x4u;
    else
        object->flags = __RLWINM(object->flags, 0, 30, 28);
}
