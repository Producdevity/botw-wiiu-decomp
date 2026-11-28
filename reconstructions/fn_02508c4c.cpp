typedef int s32;

extern "C" void fn_025964c4(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100d293c;

namespace {
struct Object {
    char padding_4C[0x4C];
    char member;
};
}

extern "C" void fn_02508c4c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_025964c4(object);
    registration.second = &data_10263910;
    registration.first = &data_100d293c;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
