#include "botw/ghs_intrinsics.h"
namespace {
struct Object {
    unsigned flags;
};
}

extern "C" void fn_036a02cc(Object* object, bool enabled) {
    if (enabled)
        object->flags |= 0x4u;
    else
        object->flags = __RLWINM(object->flags, 0, 30, 28);
}
