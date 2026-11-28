typedef int s32;

extern "C" void fn_022e5dfc(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a7c98;

namespace {
struct Object {
    char padding_9C[0x9C];
    char member;
};
}

extern "C" void fn_023ed7a8(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_022e5dfc(object);
    registration.second = &data_10263910;
    registration.first = &data_100a7c98;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
