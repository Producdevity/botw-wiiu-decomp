typedef int s32;

extern "C" void fn_026b40f0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100c9ff0;

namespace {
struct Object {
    char padding_7C[0x7C];
    char member;
};
}

extern "C" void fn_024d4a0c(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_026b40f0(object);
    registration.second = &data_10263910;
    registration.first = &data_100c9ff0;
    fn_030e9b44(object, &((Object *) object)->member, &registration.first);
}
