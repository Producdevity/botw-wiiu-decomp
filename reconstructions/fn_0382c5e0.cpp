typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0382c5a0(void*);

namespace {
struct Object {
    unsigned char padding_0[0x90];
    u32 flags;
};
}

extern "C" u8 fn_0382c5e0(void *object) {
    u8 result;

    result = 0;
    if ((s32) ((((u32) (((Object *)object)->flags) >> 9U) & 1) ^ 1) == 0) {
        result = fn_0382c5a0(object) ^ 1;
    }
    return result;
}
