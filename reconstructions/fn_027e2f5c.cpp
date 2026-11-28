typedef int s32;

extern "C" void fn_0295f99c(void*);
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10135788;

namespace {
struct Object {
    unsigned char padding_0[0x3C];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_027e2f5c(void *object) {
    Registration registration;

    fn_0295f99c(object);
    registration.second = &data_10263910;
    registration.first = &data_10135788;
    fn_030ea0cc(object, ((Object *) object)->member, &registration.first);
}
