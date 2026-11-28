typedef int s32;

extern "C" void fn_0240840c(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100ab940;

namespace {
struct Object {
    char padding_E0[0xE0];
    char member;
};
}

extern "C" void fn_024073dc(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_0240840c(object);
    registration.second = &data_10263910;
    registration.first = &data_100ab940;
    fn_030e9b44(object, &((Object *) object)->member, &registration.first);
}
