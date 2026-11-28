typedef int s32;

extern "C" void fn_025d02a0(void*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100eec54;

namespace {
struct Object {
    char padding_44[0x44];
    char member;
};
}

extern "C" void fn_025d06f0(void *object) {
    struct {
        const void *first;
        const void *second;
    } registration;

    fn_025d02a0(object);
    registration.second = &data_10263910;
    registration.first = &data_100eec54;
    fn_030e9b44(object, &((Object *) object)->member, &registration.first);
}
