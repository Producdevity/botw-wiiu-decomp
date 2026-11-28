typedef float f32;
extern "C" void fn_0245b118(void*, void*);
extern "C" void fn_02b744a0(void *, float);

namespace {
struct Object {
    char padding_0[0x18];
    float *value;
};
}

extern "C" void fn_0245b62c(void *object, void *target) {
    fn_0245b118(object, target);
    fn_02b744a0(target, *((Object *) object)->value);
}
