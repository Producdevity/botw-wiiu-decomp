typedef int s32;

extern "C" void fn_0281bfc0(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013c6ac;

namespace {
struct Object {
    unsigned char padding_0[0x50];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02810b9c(void *object) {
    Registration registration;

    fn_0281bfc0(object);
    registration.second = &data_10263910;
    registration.first = &data_1013c6ac;
    fn_030e9be0(object, ((Object *) object)->member, &registration.first);
}
