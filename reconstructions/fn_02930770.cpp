typedef int s32;

extern "C" void fn_02787fa4(void*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10169274;

namespace {
struct Object {
    unsigned char padding_0[0x2C];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02930770(void *object) {
    Registration registration;

    fn_02787fa4(object);
    registration.second = &data_10263910;
    registration.first = &data_10169274;
    fn_030e9d18(object, ((Object *) object)->member, &registration.first);
}
