typedef unsigned char u8;
typedef int s32;

namespace {
struct Object {
    char padding_0[0x1C];
    s32 *bitIndex;
    char padding_20[0x1C];
    u8 *flagA;
    u8 *flagB;
};
}

extern "C" s32 fn_0224c80c(void *object) {
    s32 mask = 1 << *((Object *)object)->bitIndex;

    if (*((Object *)object)->flagA != 0) {
        mask |= 8;
    } else if (*((Object *)object)->flagB != 0) {
        mask |= 0x100;
    }
    return mask;
}
