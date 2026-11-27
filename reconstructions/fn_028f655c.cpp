typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02b5c8fc(void*);

namespace {
struct Entry {
    unsigned char padding_0[4];
    u8 flags;
};

struct Object {
    void *owner;
    unsigned char padding_4[0x3C];
    u8 *enabled;
};
}

extern "C" s32 fn_028f655c(void *object_ptr) {
    if (*((Object *)object_ptr)->enabled != 0) {
        Entry *entry = (Entry *)fn_02b5c8fc(((Object *)object_ptr)->owner);
        if (entry != 0) {
            return (entry->flags >> 6U) & 1;
        }
    }
    return 0;
}
