typedef int s32;

extern "C" void fn_02787fa4(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10125198;

namespace {
struct Object {
    char padding_2C[0x2C];
    char member;
};
}

extern "C" void fn_02758224(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02787fa4(object);
    registration.second = &data_10263910;
    registration.first = &data_10125198;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
