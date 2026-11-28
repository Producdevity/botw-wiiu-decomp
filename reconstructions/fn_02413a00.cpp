typedef int s32;

extern "C" void fn_0241413c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100add98;

namespace {
struct Object {
    char padding_A8[0xA8];
    char member;
};
}

extern "C" void fn_02413a00(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0241413c(object);
    registration.second = &data_10263910;
    registration.first = &data_100add98;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
