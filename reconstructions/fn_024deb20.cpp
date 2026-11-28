typedef int s32;

extern "C" void fn_030ea11c(void*, void*, void*);
extern "C" void fn_03277204(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cb520;

namespace {
struct Object {
    char padding_24[0x24];
    char member;
};
}

extern "C" void fn_024deb20(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_03277204(object);
    registration.second = &data_10263910;
    registration.first = &data_100cb520;
    fn_030ea11c(object, &((Object *) object)->member, &registration.first);
}
