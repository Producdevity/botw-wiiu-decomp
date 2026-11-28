typedef int s32;

extern "C" void fn_028e85b4(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10103d18;

namespace {
struct Object {
    char padding_3C[0x3C];
    char member;
};
}

extern "C" void fn_02664fbc(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_028e85b4(object);
    registration.second = &data_10263910;
    registration.first = &data_10103d18;
    fn_030ea284(object, &((Object *) object)->member, &registration.first);
}
