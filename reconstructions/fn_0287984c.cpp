typedef int s32;

extern "C" void fn_027f606c(void*);
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1014bf84;

namespace {
struct Object {
    unsigned char padding_0[0x260];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0287984c(void *object) {
    Registration registration;

    fn_027f606c(object);
    registration.second = &data_10263910;
    registration.first = &data_1014bf84;
    fn_030ea0cc(object, ((Object *) object)->member, &registration.first);
}
