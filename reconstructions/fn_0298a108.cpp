typedef int s32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x44];
    void *entry;
};

struct Entry {
    char padding_0[8];
    s32 state;
};
}

extern "C" int fn_02a27aa8(int, void*);
extern "C" void* data_1046378c;

extern "C" void fn_0298a108(void *object) {
    Entry *entry;
    void *manager = (char *)data_1046378c + 0x5C0;
    if (manager == 0 || fn_02a27aa8((s32)manager, ((Object *)object)->owner) == 0) {
        entry = (Entry *)((Object *)object)->entry;
        if (entry != 0) {
            entry->state = 2;
        }
    }
}
