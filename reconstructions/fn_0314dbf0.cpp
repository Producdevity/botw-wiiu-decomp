#include "botw/field_accessors.h"

namespace {
struct ObjectView {
    unsigned int value;
};
}

extern "C" unsigned int fn_0314dbf0(const void* context) {
    const ObjectView* object = static_cast<const ObjectView*>(context);
    return (object->value >> 1) & 1u;
}
