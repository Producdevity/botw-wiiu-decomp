typedef int s32;

extern "C" void fn_02919b40(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101690f4;

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

extern "C" void fn_029300c8(void *object) {
    Registration registration;

    fn_02919b40(object);
    registration.second = &data_10263910;
    registration.first = &data_101690f4;
    fn_030e9be0(object, ((Object *) object)->member, &registration.first);
}
