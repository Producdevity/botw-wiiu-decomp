#include "botw/ghs_intrinsics.h"
namespace {
struct Object {
    unsigned char flags;
};
}

extern "C" void fn_0324d17c(Object* object, bool enabled) {
    if (enabled)
        object->flags |= 0x1u;
    else
        object->flags = __RLWINM(object->flags, 0, 24, 30);
}
