typedef int s32;

extern "C" void fn_0280b620(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013a0ec;

namespace {
struct Object {
    unsigned char padding_0[0x50];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_027ff0b8(void *object) {
    Registration registration;

    fn_0280b620(object);
    registration.second = &data_10263910;
    registration.first = &data_1013a0ec;
    fn_030e9aa8(object, ((Object *) object)->member, &registration.first);
}
