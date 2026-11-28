typedef float f32;
extern "C" void fn_0245b674(void*, void*);
extern "C" void fn_02b744a0(void *, float);

namespace {
struct Object {
    char padding_0[0x18];
    float *value;
};
}

extern "C" void fn_0245b9d0(void *object, void *target) {
    fn_0245b674(object, target);
    fn_02b744a0(target, *((Object *) object)->value);
}
