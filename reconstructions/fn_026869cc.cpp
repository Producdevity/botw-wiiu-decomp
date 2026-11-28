typedef int s32;

extern "C" void fn_02684580(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10109168;

namespace {
struct Object {
    char padding_1B0[0x1B0];
    char member;
};
}

extern "C" void fn_026869cc(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02684580(object);
    registration.second = &data_10263910;
    registration.first = &data_10109168;
    fn_030e9be0(object, &((Object *) object)->member, &registration.first);
}
