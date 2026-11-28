typedef int s32;

extern "C" void fn_026d5ddc(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1015f860;

namespace {
struct Object {
    unsigned char padding_0[0x64];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_029010b0(void *object) {
    Registration registration;

    fn_026d5ddc(object);
    registration.second = &data_10263910;
    registration.first = &data_1015f860;
    fn_030e9b44(object, ((Object *) object)->member, &registration.first);
}
