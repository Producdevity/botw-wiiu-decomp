typedef int s32;

extern "C" void fn_024468d0(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100b262c;

namespace {
struct Object {
    char padding_2C[0x2C];
    char member;
};
}

extern "C" void fn_0242a698(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_024468d0(object);
    registration.second = &data_10263910;
    registration.first = &data_100b262c;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
