typedef int s32;
typedef float f32;

extern "C" void fn_03babee0(void*);
extern "C" void fn_03babf3c(void *, const void *);
extern "C" void fn_03be5560(void*);
extern "C" const float data_103c8978;

namespace {
struct Object {
    char padding_0[0xB8];
    f32 value_b8;
    char padding_bc[0x1C];
    void *owner;
};
}

extern "C" void fn_03babf48(void *object) {
    s32 value;

    ((Object *) object)->value_b8 = data_103c8978;
    fn_03be5560(((Object *) object)->owner);
    fn_03babee0(object);
    value = 7;
    fn_03babf3c(object, &value);
}
