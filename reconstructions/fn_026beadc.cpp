typedef int s32;

extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_032c1900(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101106e8;

namespace {
struct Object {
    char padding_28[0x28];
    char member;
};
}

extern "C" void fn_026beadc(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_032c1900(object);
    registration.second = &data_10263910;
    registration.first = &data_101106e8;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
