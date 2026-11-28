typedef int s32;

extern "C" void fn_029b9a24(void*);
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1017b860;

namespace {
struct Object {
    unsigned char padding_0[0x1C];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_029b9108(void *object) {
    Registration registration;

    fn_029b9a24(object);
    registration.second = &data_10263910;
    registration.first = &data_1017b860;
    fn_030ff7a8(object, ((Object *) object)->member, &registration.first);
}
