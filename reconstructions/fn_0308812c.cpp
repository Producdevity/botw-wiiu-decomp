typedef int s32;

typedef s32 (*VirtualFn)(void *);

namespace {
struct VTable {
    VirtualFn slots[8];
};

struct Object {
    void *key;
    VTable *vtable;
};
}

extern "C" int fn_024b60f8(void);
extern "C" int fn_0310d4b4(void*, void*);
extern "C" void* data_1046ca84;

extern "C" s32 fn_0308812c(void *object) {
    void *manager = data_1046ca84;
    if (manager == 0) {
        return 0;
    }
    ((Object *)object)->vtable->slots[7](object);
    s32 result = fn_0310d4b4(manager, ((Object *)object)->key);
    return result * fn_024b60f8();
}
