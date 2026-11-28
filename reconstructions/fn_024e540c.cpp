typedef int s32;

extern "C" void fn_028986c0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cc88c;

namespace {
struct Object {
    char padding_2C[0x2C];
    char member;
};
}

extern "C" void fn_024e540c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_028986c0(object);
    registration.second = &data_10263910;
    registration.first = &data_100cc88c;
    fn_030e9b44(object, &((Object *) object)->member, &registration.first);
}
