typedef int s32;

extern "C" void fn_027bdaac(void*);
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1012ec1c;

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

extern "C" void fn_027a0738(void *object) {
    Registration registration;

    fn_027bdaac(object);
    registration.second = &data_10263910;
    registration.first = &data_1012ec1c;
    fn_030ea0cc(object, ((Object *) object)->member, &registration.first);
}
