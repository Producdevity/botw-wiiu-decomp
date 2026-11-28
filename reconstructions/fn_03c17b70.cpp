typedef int s32;

extern "C" void fn_03c0e660(void*, void*, void*);

namespace {
struct Entry {
    char padding_0[4];
    void *owner;
    char padding_8[0x10];
    char link[1];
};
struct Owner {
    char padding_0[0x18];
    char list[4];
    char link[0x1C];
    s32 count;
};
}

extern "C" void fn_03c17b70(void *owner, void *entry) {
    struct { s32 f8; } sp;
    Owner *list_owner = (Owner *) owner;
    Entry *list_entry = (Entry *) entry;

    list_entry->owner = owner;
    sp.f8 = (s32) list_owner->link;
    fn_03c0e660(list_owner->list, &sp.f8, list_entry->link);
    list_owner->count = list_owner->count + 1;
}
