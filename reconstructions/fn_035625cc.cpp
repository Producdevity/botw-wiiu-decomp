typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_035625a4(void*);

namespace {
struct Object {
    char padding_0[0x20];
    f32 limit;
    u8 enabled;
};
}

extern "C" s32 fn_035625cc(void *object, f32 value) {
    if (((Object *) object)->enabled != 0 && !(value < ((Object *) object)->limit)) {
        return 0;
    }
    fn_035625a4(object);
    return 1;
}
