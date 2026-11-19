#include "botw/virtual_child_forwarding.h"

extern "C" bool fn_0291e934(const void* object) {
    const virtual_child_forwarding::Receiver* self =
        static_cast<const virtual_child_forwarding::Receiver*>(object);
    return self->get_next()->test_slot_52();
}
