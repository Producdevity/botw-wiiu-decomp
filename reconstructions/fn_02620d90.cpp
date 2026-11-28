typedef int s32;

extern "C" void fn_025c6c6c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100f90ec;

namespace {
struct Object {
    char padding_2A4[0x2A4];
    char member;
};
}

extern "C" void fn_02620d90(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_025c6c6c(object);
    registration.second = &data_10263910;
    registration.first = &data_100f90ec;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
