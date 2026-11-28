typedef int s32;

extern "C" void fn_0284bf68(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101446c8;

namespace {
struct Object {
    unsigned char padding_0[0x78];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02848900(void *object) {
    Registration registration;

    fn_0284bf68(object);
    registration.second = &data_10263910;
    registration.first = &data_101446c8;
    fn_030e9b44(object, ((Object *) object)->member, &registration.first);
}
