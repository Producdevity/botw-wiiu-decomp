typedef float f32;

extern "C" void fn_02362a54(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0379241c(void*, float);

extern "C" f32 data_100b2ad0;
extern "C" f32 data_100b2ae0;

namespace {
struct Object {
    char padding_68[0x68];
    f32 value;
};
}

extern "C" void fn_0242b3f8(void *object) {
    fn_02362a54(object);
    fn_0379241c(&((Object *) object)->value, data_100b2ae0);
    if (((Object *) object)->value < data_100b2ad0) {
        fn_030ea2cc(object);
    }
}
