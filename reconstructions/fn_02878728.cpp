typedef int s32;

extern "C" void fn_030ea284(void*, void*, void*);
extern "C" void fn_0327d848(void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1014ba40;

namespace {
struct Object {
    unsigned char padding_0[0xA8];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02878728(void *object) {
    Registration registration;

    fn_0327d848(object);
    registration.second = &data_10263910;
    registration.first = &data_1014ba40;
    fn_030ea284(object, ((Object *) object)->member, &registration.first);
}
