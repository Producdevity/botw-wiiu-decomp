typedef unsigned char u8;
typedef int s32;
extern "C" unsigned char fn_02e55060(void);

namespace {
struct Object {
    char padding_0[0x138];
    u8 flags;
};
}

extern "C" s32 fn_02e64490(void *object) {
    if (fn_02e55060() != 0 || (((Object *) object)->flags >> 2 & 1)) {
        return 1;
    }
    return 0;
}
