typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *source;
    s8 result;
};
}

extern "C" int fn_02c10774(int);

extern "C" void fn_02bc6348(void *object) {
    s32 value;
    s32 result;
    value = *((Object *)object)->source;
    result = fn_02c10774(value);
    if (result != 0) {
        result = (u8)value;
    }
    ((Object *)object)->result = result;
}
