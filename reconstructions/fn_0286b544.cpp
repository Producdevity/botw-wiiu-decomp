typedef int s32;

extern "C" void fn_02863284(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10149b08;

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

extern "C" void fn_0286b544(void *object) {
    Registration registration;

    fn_02863284(object);
    registration.second = &data_10263910;
    registration.first = &data_10149b08;
    fn_030ea284(object, ((Object *) object)->member, &registration.first);
}
