typedef int s32;

extern "C" void fn_02756d78(void*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10135978;

namespace {
struct Object {
    unsigned char padding_0[0x74];
    unsigned char member[1];
};

struct Registration {
    const void *first;
    const void *second;
};
}

extern "C" void fn_027e37ac(void *object) {
    Registration registration;

    fn_02756d78(object);
    registration.second = &data_10263910;
    registration.first = &data_10135978;
    fn_030e9aa8(object, ((Object *) object)->member, &registration.first);
}
