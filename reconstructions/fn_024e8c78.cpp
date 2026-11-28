typedef int s32;

extern "C" void fn_025daecc(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cd0d0;

namespace {
struct Object {
    char padding_A4[0xA4];
    char member;
};
}

extern "C" void fn_024e8c78(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_025daecc(object);
    registration.second = &data_10263910;
    registration.first = &data_100cd0d0;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
