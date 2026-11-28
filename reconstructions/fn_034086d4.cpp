typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_034085e8(void*, void*, float);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1046f448;

namespace {
struct Object {
    char padding_0[0xC1A];
    u8 mode;
};
}

extern "C" void fn_034086d4(void *object, s32 force, f32 scale) {
    struct { s32 value; const void *table; } args;

    if (force != 0 || reinterpret_cast<Object *>(object)->mode != 4) {
        args.table = &data_10263910;
        args.value = data_1046f448;
        fn_034085e8(object, &args.value, scale);
    }
}
