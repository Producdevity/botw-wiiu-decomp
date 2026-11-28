typedef int s32;

extern "C" void fn_027d9da0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10133f7c;

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

extern "C" void fn_027d89c4(void *object) {
    Registration registration;

    fn_027d9da0(object);
    registration.second = &data_10263910;
    registration.first = &data_10133f7c;
    fn_030e9be0(object, ((Object *) object)->member, &registration.first);
}
