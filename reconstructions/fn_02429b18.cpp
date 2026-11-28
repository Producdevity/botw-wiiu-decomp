typedef int s32;

extern "C" void fn_02429000(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100b2294;

namespace {
struct Object {
    char padding_44[0x44];
    char member;
};
}

extern "C" void fn_02429b18(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02429000(object);
    registration.second = &data_10263910;
    registration.first = &data_100b2294;
    fn_030e9aa8(object, &((Object *) object)->member, &registration.first);
}
