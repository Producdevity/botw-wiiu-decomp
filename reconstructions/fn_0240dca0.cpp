typedef int s32;

extern "C" void fn_0240ed58(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100ac92c;

namespace {
struct Object {
    char padding_38[0x38];
    char member;
};
}

extern "C" void fn_0240dca0(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0240ed58(object);
    registration.second = &data_10263910;
    registration.first = &data_100ac92c;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
