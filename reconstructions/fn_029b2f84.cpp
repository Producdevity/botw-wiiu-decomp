typedef int s32;

extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_0332d00c(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10179b08;

namespace {
struct Object {
    unsigned char padding_0[0xD8];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_029b2f84(void *object) {
    Registration registration;

    fn_0332d00c(object);
    registration.second = &data_10263910;
    registration.first = &data_10179b08;
    fn_030ff774(object, ((Object *) object)->member, &registration.first);
}
