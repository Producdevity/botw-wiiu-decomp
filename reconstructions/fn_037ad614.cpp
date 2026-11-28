typedef int s32;
typedef unsigned int u32;

extern "C" void fn_03712a24(void *);
extern "C" int fn_03798754(void*);
extern "C" void fn_03985370(void*);

namespace {
struct Object {
    char padding_0[0x60];
    u32 flags;
    char padding_64[0x330 - 0x64];
    void *child;
};
}

extern "C" void fn_037ad614(void *object) {
    if (!((((Object *)object)->flags >> 1U) & 1)) {
        s32 entry = fn_03798754(object);
        if (entry != 0) {
            fn_03712a24((void *)entry);
        }
        fn_03985370(((Object *)object)->child);
    }
}
