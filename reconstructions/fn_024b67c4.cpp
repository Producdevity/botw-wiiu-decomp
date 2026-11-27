typedef int s32;

extern "C" void* fn_02c19904(void *, int);

namespace {
struct Entry {
    unsigned char padding_0[0x1C];
    unsigned char payload[4];
};

struct Object {
    unsigned char padding_0[8];
    void *owner;
    unsigned char padding_c[0x34];
    s32 kind;
};
}

extern "C" void *fn_024b67c4(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    if (object->kind == 1) {
        Entry *entry = (Entry *)fn_02c19904(object->owner, 0);
        if (entry != 0) {
            return entry->payload;
        }
    }
    return 0;
}
