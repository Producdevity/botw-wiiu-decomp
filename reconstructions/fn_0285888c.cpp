typedef int s32;

extern "C" void fn_02858520(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101475a8;

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

extern "C" void fn_0285888c(void *object) {
    Registration registration;

    fn_02858520(object);
    registration.second = &data_10263910;
    registration.first = &data_101475a8;
    fn_030e9b44(object, ((Object *) object)->member, &registration.first);
}
