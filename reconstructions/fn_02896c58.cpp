typedef int s32;
typedef float f32;

extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" f32 data_10150df4;
extern "C" s32 data_10150df8;

namespace {
struct Object {
    char padding_0[0x24];
    f32 value;
};
}

extern "C" void fn_02896c58(void *object, void *argument) {
    fn_037b8284(object, &data_10150df8, argument);
    ((Object *) object)->value = data_10150df4;
}
