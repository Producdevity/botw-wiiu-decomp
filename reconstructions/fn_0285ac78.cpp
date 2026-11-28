typedef int s32;

extern "C" void fn_0271529c(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101479bc;

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

extern "C" void fn_0285ac78(void *object) {
    Registration registration;

    fn_0271529c(object);
    registration.second = &data_10263910;
    registration.first = &data_101479bc;
    fn_030e9be0(object, ((Object *) object)->member, &registration.first);
}
