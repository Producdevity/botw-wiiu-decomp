#include "botw/field_accessors.h"

namespace {
struct ObjectView {
    unsigned char prefix[44];
    const void* nested;
};
}

extern "C" unsigned char fn_02470538(const void* context) {
    const ObjectView* object = static_cast<const ObjectView*>(context);
    return object->nested != 0 && fn_0314dbf0(object->nested) != 0;
}
