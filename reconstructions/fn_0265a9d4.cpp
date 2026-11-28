typedef int s32;

extern "C" void fn_02653034(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101021a8;

namespace {
struct Object {
    char padding_BC[0xBC];
    char member;
};
}

extern "C" void fn_0265a9d4(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02653034(object);
    registration.second = &data_10263910;
    registration.first = &data_101021a8;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
