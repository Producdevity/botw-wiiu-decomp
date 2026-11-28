typedef int s32;

extern "C" void fn_028986c0(void*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10151ab0;

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

extern "C" void fn_02899734(void *object) {
    Registration registration;

    fn_028986c0(object);
    registration.second = &data_10263910;
    registration.first = &data_10151ab0;
    fn_030ea23c(object, ((Object *) object)->member, &registration.first);
}
