typedef int s32;

extern "C" void fn_023eb338(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a7290;

namespace {
struct Object {
    char padding_6C[0x6C];
    char member;
};
}

extern "C" void fn_023eba94(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_023eb338(object);
    registration.second = &data_10263910;
    registration.first = &data_100a7290;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
