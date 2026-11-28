typedef int s32;

extern "C" void fn_02921c68(void*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1016acf4;

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

extern "C" void fn_029375e4(void *object) {
    Registration registration;

    fn_02921c68(object);
    registration.second = &data_10263910;
    registration.first = &data_1016acf4;
    fn_030ea03c(object, ((Object *) object)->member, &registration.first);
}
