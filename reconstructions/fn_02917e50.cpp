typedef int s32;

extern "C" void fn_02919b40(void*);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10164508;

namespace {
struct Object {
    unsigned char padding_0[0x24];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02917e50(void *object) {
    Registration registration;

    fn_02919b40(object);
    registration.second = &data_10263910;
    registration.first = &data_10164508;
    fn_030e9c7c(object, ((Object *) object)->member, &registration.first);
}
