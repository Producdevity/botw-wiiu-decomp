typedef int s32;

extern "C" void fn_023e9bd8(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100a6f54;

namespace {
struct Object {
    char padding_54[0x54];
    char member;
};
}

extern "C" void fn_023ea56c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_023e9bd8(object);
    registration.second = &data_10263910;
    registration.first = &data_100a6f54;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
