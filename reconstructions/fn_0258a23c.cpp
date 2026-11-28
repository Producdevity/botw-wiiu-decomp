typedef int s32;

extern "C" void fn_0258a714(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100e6550;

namespace {
struct Object {
    char padding_28[0x28];
    char member;
};
}

extern "C" void fn_0258a23c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0258a714(object);
    registration.second = &data_10263910;
    registration.first = &data_100e6550;
    fn_030ea23c(object, &((Object *) object)->member, &registration.first);
}
