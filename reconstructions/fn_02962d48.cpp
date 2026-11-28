typedef int s32;

extern "C" void fn_0295f99c(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016ea38;

namespace {
struct Object {
    unsigned char padding_0[0x3C];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02962d48(void *object) {
    Registration registration;

    fn_0295f99c(object);
    registration.second = &data_10263910;
    registration.first = &data_1016ea38;
    fn_030e9d18(object, ((Object *) object)->member, &registration.first);
}
