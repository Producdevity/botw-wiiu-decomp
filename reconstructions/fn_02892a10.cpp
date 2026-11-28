typedef int s32;

extern "C" void fn_028986c0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1014ff9c;

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

extern "C" void fn_02892a10(void *object) {
    Registration registration;

    fn_028986c0(object);
    registration.second = &data_10263910;
    registration.first = &data_1014ff9c;
    fn_030e9b44(object, ((Object *) object)->member, &registration.first);
}
