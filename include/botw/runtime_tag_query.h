#ifndef BOTW_RUNTIME_TAG_QUERY_H
#define BOTW_RUNTIME_TAG_QUERY_H

struct RuntimeVTable;
struct RuntimeTag {
    const RuntimeVTable* vtable;
};

namespace runtime_tag_query {

template<unsigned* Guard, RuntimeTag* Slot, const RuntimeVTable* VTable>
struct Token {
    static const RuntimeTag& get() {
        RuntimeTag& token = *Slot;
        if (!*Guard) {
            *Guard = 1;
            token.vtable = VTable;
        }
        return token;
    }
};

// Same guarded initialization as Token, but yields the slot address after the
// guard check; some queries compare against it in that order.
template<unsigned* Guard, RuntimeTag* Slot, const RuntimeVTable* VTable>
struct Pointer {
    static const RuntimeTag* get() {
        if (!*Guard) {
            *Guard = 1;
            Slot->vtable = VTable;
        }
        return Slot;
    }

    static bool is(const RuntimeTag* other) {
        if (!*Guard) {
            *Guard = 1;
            Slot->vtable = VTable;
        }
        return other == Slot;
    }
};

}

#endif
