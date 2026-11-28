typedef int s32;

extern "C" void fn_0255a650(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100c8c00;

namespace {
struct Object {
    char padding_158[0x158];
    char member;
};
}

extern "C" void fn_024cb0d8(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0255a650(object);
    registration.second = &data_10263910;
    registration.first = &data_100c8c00;
    fn_030e9b44(object, &((Object *) object)->member, &registration.first);
}
