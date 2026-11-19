#ifndef BOTW_DESCRIPTOR_PREDICATE_H
#define BOTW_DESCRIPTOR_PREDICATE_H

namespace descriptor_predicate {

struct Descriptor {
    const void* payload;
    const void* dispatch;
};

}

extern "C" bool fn_037b82e8(void* receiver, const void* descriptor);

#endif
