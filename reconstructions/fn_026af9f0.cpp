#include "botw/virtual_child_forwarding.h"

extern "C" bool fn_026af9f0(const void* object) {
    const virtual_child_forwarding::Receiver* self =
        static_cast<const virtual_child_forwarding::Receiver*>(object);
    return self->get_next()->test_slot_36();
}
