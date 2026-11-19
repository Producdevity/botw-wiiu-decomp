extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Link {
    Link* next;
    Link* prev;
};

struct List {
    unsigned count;
    Link head;
};

struct Storage {
    List list;
};

inline void initialize(List* list) {
    if (!list) {
        list = static_cast<List*>(fn_0308e578(sizeof(List)));
        if (!list)
            return;
    }
    list->count = 0;
    list->head.next = &list->head;
    list->head.prev = &list->head;
}
}

extern "C" void* fn_03c2dd78(void* storage) {
    Storage* result = static_cast<Storage*>(storage);
    if (!result) {
        result = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
        if (!result)
            return result;
    }
    initialize(&result->list);
    return result;
}
