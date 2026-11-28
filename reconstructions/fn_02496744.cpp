typedef float f32;

extern "C" void fn_02495978(void*);
extern "C" void fn_0249649c(void*);
extern "C" void fn_02496554(void*);
extern "C" void fn_024966c8(void*);

extern "C" f32 data_100c37b4;

namespace {
struct Object {
    char padding_0[0xB4];
    f32 value_b4;
};
}

extern "C" void fn_02496744(void *object) {
    fn_02495978(object);
    ((Object *) object)->value_b4 = data_100c37b4;
    fn_0249649c(object);
    fn_02496554(object);
    fn_024966c8(object);
}
