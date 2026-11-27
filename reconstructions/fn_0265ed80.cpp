typedef unsigned char u8;
typedef int s32;
typedef float f32;

namespace {
struct Object {
    char padding_0[0x9C];
    f32 value;
    char padding_A0[8];
    char target[1];
};
}

extern "C" bool fn_0378dacc(void*, void*);

extern "C" f32 data_10102f9c;

extern "C" u8 fn_0265ed80(void *object, void *arg1) {
    s32 result = 0;
    if (fn_0378dacc(((Object *)object)->target, arg1) != 0 && ((Object *)object)->value > data_10102f9c) {
        result = 1;
    }
    return result;
}
