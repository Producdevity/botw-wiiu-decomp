typedef float f32;

extern "C" void fn_0229cc40(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0379241c(void*, float);

extern "C" f32 data_100b2788;
extern "C" f32 data_100b2798;

namespace {
struct Object {
    char padding_30[0x30];
    f32 value;
};
}

extern "C" void fn_0242aabc(void *object) {
    fn_0229cc40(object);
    fn_0379241c(&((Object *) object)->value, data_100b2798);
    if (!(((Object *) object)->value > data_100b2788)) {
        fn_030ea2cc(object);
    }
}
