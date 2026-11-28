typedef int s32;

extern "C" void fn_02534b3c(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10113ec4;

namespace {
struct Object {
    char padding_A0[0xA0];
    char member;
};
}

extern "C" void fn_026d48a8(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_02534b3c(object);
    registration.second = &data_10263910;
    registration.first = &data_10113ec4;
    fn_030e9d18(object, &((Object *) object)->member, &registration.first);
}
