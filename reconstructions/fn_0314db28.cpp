#include "botw/ptr_array.h"

namespace {

struct Owner {
    unsigned char prefix[12];
    PtrArray items;
};

}

extern "C" void* fn_0314db28(void* owner, int index) {
    Owner* self = static_cast<Owner*>(owner);
    if (index < 0 || self->items.count <= index) return 0;
    return *ptr_array_slot(&self->items, index);
}
