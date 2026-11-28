typedef int s32;

extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a88fc;

namespace {
struct Object {
    char padding_18[0x18];
    char member;
};
}

extern "C" void fn_023f4c38(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_023fea2c(object);
    registration.second = &data_10263910;
    registration.first = &data_100a88fc;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
