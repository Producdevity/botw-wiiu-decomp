typedef int s32;

extern "C" void fn_0245f138(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100bb274;

namespace {
struct Object {
    char padding_3C[0x3C];
    char member;
};
}

extern "C" void fn_0245da40(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0245f138(object);
    registration.second = &data_10263910;
    registration.first = &data_100bb274;
    fn_030ea23c(object, &((Object *) object)->member, &registration.first);
}
