typedef int s32;
typedef float f32;

extern "C" f32 data_102ad778;
extern "C" f32 data_102ad7b4;

namespace {
struct Object {
    char padding_0[0xFC];
    void *const *vtable;
};
}

extern "C" f32 fn_03306234(void *object) {
    if (((s32 (*)()) ((Object *) object)->vtable[83])() == 0) {
        return data_102ad7b4;
    }
    return data_102ad778;
}
