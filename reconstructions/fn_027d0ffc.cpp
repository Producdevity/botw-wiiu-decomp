typedef int s32;

extern "C" void fn_027bdaac(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10133154;

namespace {
struct Object {
    unsigned char padding_0[0x1A0];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_027d0ffc(void *object) {
    Registration registration;

    fn_027bdaac(object);
    registration.second = &data_10263910;
    registration.first = &data_10133154;
    fn_030e9d18(object, ((Object *) object)->member, &registration.first);
}
