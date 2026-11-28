typedef int s32;

extern "C" void fn_020e0ef8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100b3f78;

namespace {
struct Object {
    char padding_74[0x74];
    char member;
};
}

extern "C" void fn_02430e50(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_020e0ef8(object);
    registration.second = &data_10263910;
    registration.first = &data_100b3f78;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
