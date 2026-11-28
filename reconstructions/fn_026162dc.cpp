typedef int s32;

extern "C" void fn_026197f0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100f764c;

namespace {
struct Object {
    char padding_5C[0x5C];
    char member;
};
}

extern "C" void fn_026162dc(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_026197f0(object);
    registration.second = &data_10263910;
    registration.first = &data_100f764c;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
