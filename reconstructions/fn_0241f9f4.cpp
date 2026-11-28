typedef int s32;

extern "C" void fn_0241ef88(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100b014c;

namespace {
struct Object {
    char padding_5C[0x5C];
    char member;
};
}

extern "C" void fn_0241f9f4(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0241ef88(object);
    registration.second = &data_10263910;
    registration.first = &data_100b014c;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
