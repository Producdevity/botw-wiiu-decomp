typedef int s32;

extern "C" void fn_0243800c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100b5430;

namespace {
struct Object {
    char padding_60[0x60];
    char member;
};
}

extern "C" void fn_0243bc4c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0243800c(object);
    registration.second = &data_10263910;
    registration.first = &data_100b5430;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
