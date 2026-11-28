typedef float f32;

extern "C" void fn_0210daa0(void*);
extern "C" void fn_02b74344(float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_1002328c;

namespace {
struct Object {
    void *owner;
    char padding_4[0x7C];
    f32 *value;
};
}

extern "C" void fn_0210c518(void *object) {
    fn_0210daa0(object);
    if (*((Object *) object)->value < data_1002328c && fn_037966a8(((Object *) object)->owner) != 0) {
        fn_02b74344(*((Object *) object)->value);
    }
}
