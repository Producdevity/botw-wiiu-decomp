typedef int s32;

extern "C" void fn_02965930(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016f188;

namespace {
struct Object {
    unsigned char padding_0[0x30];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02965054(void *object) {
    Registration registration;

    fn_02965930(object);
    registration.second = &data_10263910;
    registration.first = &data_1016f188;
    fn_030e9be0(object, ((Object *) object)->member, &registration.first);
}
