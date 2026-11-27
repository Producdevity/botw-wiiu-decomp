typedef int s32;

namespace {
struct Entry {
    s32 value;
    void *const *vtable;
    unsigned char padding_8[0x44];
};

struct Table {
    unsigned char padding_0[0x15C];
    Entry *entries;
};
}

extern "C" s32 fn_0383a3b4(void *arg0, s32 arg1) {
    Entry *entry = ((Table *)arg0)->entries + arg1;
    void *const *vtable = entry->vtable;
    ((s32 (*)(void *))vtable[7])(entry);
    return entry->value;
}
