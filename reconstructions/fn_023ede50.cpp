typedef int s32;

extern "C" void fn_02344994(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a7edc;

namespace {
struct Object {
    char padding_24[0x24];
    char member;
};
}

extern "C" void fn_023ede50(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02344994(object);
    registration.second = &data_10263910;
    registration.first = &data_100a7edc;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
