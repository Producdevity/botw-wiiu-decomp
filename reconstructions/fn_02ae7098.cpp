typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern "C" void* fn_02c1974c(void *, int);

namespace {
struct Object {
    char padding_0[8];
    void *owner;
    char padding_c[0x34];
    u32 kind;
    char padding_44[0xC];
    s32 primaryIndex;
    char padding_54[0x18];
    s32 secondaryIndex;
    char padding_70[0x11E];
    u16 flags;
};
}

extern "C" void *fn_02ae7098(void *object) {
    u32 kind = ((Object *)object)->kind;
    switch (kind) {
    case 2: {
        s32 index = ((Object *)object)->primaryIndex;
        if (index >= 0) {
            void *entry = fn_02c1974c(((Object *)object)->owner, index);
            if (entry != 0) {
                return (char *)entry + 0x28;
            }
        }
        return 0;
    }
    case 6:
        if ((((Object *)object)->flags >> 8U) & 1) {
            s32 index = ((Object *)object)->secondaryIndex;
            if (index >= 0) {
                void *entry = fn_02c1974c(((Object *)object)->owner, index);
                if (entry != 0) {
                    return (char *)entry + 0x28;
                }
            }
        }
        return 0;
    default:
        return 0;
    }
}
