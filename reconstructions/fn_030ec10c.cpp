extern "C" unsigned fn_030eb970(const void* key);

namespace {

struct Entry {
    Entry* next;
    unsigned hash;
    unsigned unk08;
    void* payload;
    unsigned short kind;
    unsigned char marked;
};

typedef char EntrySize[sizeof(Entry) == 20 ? 1 : -1];

}

extern "C" void* fn_030ec10c(void* owner, const void* key, unsigned kind, bool mark) {
    unsigned hash = fn_030eb970(key);
    for (Entry* entry = *static_cast<Entry**>(owner); entry; entry = entry->next) {
        if (entry->hash == hash && entry->kind == kind) {
            void* payload = entry->payload;
            if (mark) {
                entry->marked = 1;
            }
            return payload;
        }
    }
    return 0;
}
