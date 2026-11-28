typedef float f32;

extern "C" void fn_022e5df4(void*);
extern "C" void fn_03793fcc(void*);
extern "C" void fn_037941f0(void*, void*, float);

extern "C" f32 data_100a7c94;

namespace {
struct Object {
    char padding_0[0x9C];
    void *source;
    char member[1];
};
}

extern "C" void fn_023ed758(void *object) {
    fn_037941f0(((Object *) object)->member, ((Object *) object)->source, data_100a7c94);
    fn_03793fcc(((Object *) object)->member);
    fn_022e5df4(object);
}
