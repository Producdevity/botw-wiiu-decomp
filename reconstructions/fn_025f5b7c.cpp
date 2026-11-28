typedef int s32;

extern "C" void fn_0252e858(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100f2a2c;

namespace {
struct Object {
    char padding_60[0x60];
    char member;
};
}

extern "C" void fn_025f5b7c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0252e858(object);
    registration.second = &data_10263910;
    registration.first = &data_100f2a2c;
    fn_030e9b44(object, &((Object *) object)->member, &registration.first);
}
