typedef int s32;

extern "C" void* fn_02c1974c(void *, int);

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

extern "C" void *fn_0247c7bc(void *object_ptr) {
    Object *object = (Object *)object_ptr;
    if (object->kind == 0) {
        Entry *entry = (Entry *)fn_02c1974c(object->owner, 0);
        if (entry != 0) {
            return entry->payload;
        }
    }
    return 0;
}
