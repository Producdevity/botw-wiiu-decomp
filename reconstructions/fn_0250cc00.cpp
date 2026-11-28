typedef int s32;

extern "C" void fn_0250c8b8(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100d33a8;

namespace {
struct Object {
    char padding_30[0x30];
    char member;
};
}

extern "C" void fn_0250cc00(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0250c8b8(object);
    registration.second = &data_10263910;
    registration.first = &data_100d33a8;
    fn_030ea23c(object, &((Object *) object)->member, &registration.first);
}
