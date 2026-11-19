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

}

#endif
