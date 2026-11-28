typedef int s32;

extern "C" void fn_027fea3c(void*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013ce18;

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

extern "C" void fn_028145a8(void *object) {
    Registration registration;

    fn_027fea3c(object);
    registration.second = &data_10263910;
    registration.first = &data_1013ce18;
    fn_030ea284(object, ((Object *) object)->member, &registration.first);
}
