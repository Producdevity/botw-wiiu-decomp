typedef float f32;

extern "C" void fn_030ea2cc(void *);
extern "C" void fn_037924b4(void*, float);

extern "C" f32 data_10078d1c;

namespace {
struct Object {
    char padding_0[0x14];
    f32 value;
};
}

extern "C" void fn_022e0a3c(void *object, f32 amount) {
    fn_037924b4(&((Object *) object)->value, amount);
    if (!(((Object *) object)->value > data_10078d1c)) {
        fn_030ea2cc(object);
    }
}
