typedef int s32;

extern "C" void fn_0292107c(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100d0fd8;

namespace {
struct Object {
    char padding_2C[0x2C];
    char member;
};
}

extern "C" void fn_02500394(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0292107c(object);
    registration.second = &data_10263910;
    registration.first = &data_100d0fd8;
    fn_030ea23c(object, &((Object *) object)->member, &registration.first);
}
