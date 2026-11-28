typedef int s32;

extern "C" void fn_02100304(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a6c30;

namespace {
struct Object {
    char padding_7C[0x7C];
    char member;
};
}

extern "C" void fn_023e8e14(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02100304(object);
    registration.second = &data_10263910;
    registration.first = &data_100a6c30;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
